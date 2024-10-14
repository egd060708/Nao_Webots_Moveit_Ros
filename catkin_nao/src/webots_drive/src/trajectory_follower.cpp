#include <signal.h>
#include <std_msgs/String.h>
#include "ros/ros.h"

#include <webots_ros/set_float.h>
#include <webots_ros/set_int.h>
#include <std_msgs/UInt16.h>
#include <std_msgs/Int16.h>
#include <std_msgs/Float32.h>

#include "webots_drive/motion_file.hpp"
#include "webots_drive/group_ctrl.hpp"

using namespace std;
#define TIME_STEP 32   // 仿真时钟步长
#define MOTORSPEED 2.0 // 电机转速限幅
#define ALLGROUPNUM 4  // 动作组循环中动作组的个数

ros::NodeHandle *n; // 全局初始化节点

static int controllerCount;           // 控制器个数计数
static vector<string> controllerList; // 控制器名称列表

ros::ServiceClient timeStepClient; // 时钟通讯客户端
webots_ros::set_int timeStepSrv;   // 时钟服务数据

double global_time = 0;      // 全局计时
uint32_t is_audio_check = 0; // 判断是否在播放音乐
int group_count = 0;         // 动作组循环计数

/* 互斥锁保护临界资源 */
std::mutex mtx_globalT; // 用于时间计数写

/* nao各控制器名称 */
string lArmNames[4] = {"LElbowRoll", "LElbowYaw", "LShoulderPitch", "LShoulderRoll"};
string rArmNames[4] = {"RElbowRoll", "RElbowYaw", "RShoulderPitch", "RShoulderRoll"};
string lLegNames[3] = {"LHipYawPitch", "LHipPitch", "LKneePitch"};
string rLegNames[3] = {"RHipYawPitch", "RHipPitch", "RKneePitch"};
string headNames[2] = {"HeadPitch", "HeadYaw"};
string lFootNames[2] = {"LAnklePitch", "LAnkleRoll"};
string rFootNames[2] = {"RAnklePitch", "RAnkleRoll"};

/* 动作组文件输出类型 */
string Addr = string("/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/move_groups/"); // 主要地址段
string subAddr = string("first/");                                                               // 次级地址段
motionF_Classdef lArmF(Addr + subAddr, string("leftArmHome.txt"), 1, 4);
motionF_Classdef rArmF(Addr + subAddr, string("rightArmHome.txt"), 1, 4);
motionF_Classdef lLegF(Addr + subAddr, string("leftLegHome.txt"), 1, 3);
motionF_Classdef rLegF(Addr + subAddr, string("rightLegHome.txt"), 1, 3);
motionF_Classdef headF(Addr + subAddr, string("headHome.txt"), 1, 2);
motionF_Classdef lFootF(Addr + subAddr, string("leftFootHome.txt"), 1, 2);
motionF_Classdef rFootF(Addr + subAddr, string("rightFootHome.txt"), 1, 2);
// motionF_Classdef lHandF(Addr,string("leftHand0.txt"),1,1);
// motionF_Classdef rHandF(Addr,string("rightHand0.txt"),1,1);
// motionF_Classdef pelvisF(Addr,string("Pelvis0.txt"),1,1);

/*******************************************************
* Function name ：controllerNameCallback
* Description   ：控制器名回调函数，获取当前ROS存在的机器人控制器
* Parameter     ：
        @name   控制器名
* Return        ：无
**********************************************************/
void controllerNameCallback(const std_msgs::String::ConstPtr &name)
{
  controllerCount++;
  controllerList.push_back(name->data); // 将控制器名加入到列表中
  ROS_INFO("Controller #%d: %s.", controllerCount, controllerList.back().c_str());
}

/*******************************************************
* Function name ：quit
* Description   ：退出函数
* Parameter     ：
        @sig   信号
* Return        ：无
**********************************************************/
void quit(int sig)
{
  ROS_INFO("User stopped the '/nao' node.");
  timeStepSrv.request.value = 0;
  timeStepClient.call(timeStepSrv);
  ros::shutdown();
  exit(0);
}

/*******************************************************
* Function name ：timerCallBack
* Description   ：全局时钟计数定时器回调函数
* Parameter     ：
        @sig   信号
* Return        ：无
**********************************************************/
void timerCallBack(const ros::TimerEvent &event)
{ // 定时器回调函数
  mtx_globalT.lock();
  // 获取预期时间戳
  // global_time = event.current_expected.sec * 1.0 + event.current_expected.nsec * 0.000000001;
  global_time = event.current_expected.toSec();
  mtx_globalT.unlock();
  is_audio_check++; // 定时器音乐计数自增
  if (is_audio_check > 120)
  {
    is_audio_check = 120;
  }
}

/*******************************************************
* Function name ：wbTimCallBack
* Description   ：webots机器人时钟同步定时器回调函数
* Parameter     ：
        @sig   信号
* Return        ：无
**********************************************************/
void wbTimCallBack(const ros::TimerEvent &event)
{
  // 如果长时间未能获取动作指令，则回到初始动作组
  if (is_audio_check > 100)
  {
    group_count = 0;
    lArmF.updateGroup(string("leftArm") + string("Home") + string(".txt"), 1);
    rArmF.updateGroup(string("rightArm") + string("Home") + string(".txt"), 1);
    lLegF.updateGroup(string("leftLeg") + string("Home") + string(".txt"), 1);
    rLegF.updateGroup(string("rightLeg") + string("Home") + string(".txt"), 1);
    headF.updateGroup(string("head") + string("Home") + string(".txt"), 1);
    lFootF.updateGroup(string("leftFoot") + string("Home") + string(".txt"), 1);
    rFootF.updateGroup(string("rightFoot") + string("Home") + string(".txt"), 1);
  }
  if (!timeStepClient.call(timeStepSrv) || !timeStepSrv.response.success)
  {
    ROS_ERROR("Failed to call service time_step for next step.");
  }
}

/*******************************************************
* Function name ：keyCommandCallBack
* Description   ：键盘动作组回调函数
* Parameter     ：
        @sig   信号
* Return        ：无
**********************************************************/
void keyCommandCallBack(const std_msgs::UInt16::ConstPtr &command)
{
  ROS_INFO("key is: %d", command->data);
  switch (command->data)
  {
  case 1:
    lArmF.setName(string("leftArm0.txt"));
    lArmF.readFile();
    rArmF.setName(string("rightArm0.txt"));
    rArmF.readFile();
    break;
  case 2:
    lArmF.setName(string("leftArm1.txt"));
    lArmF.readFile();
    rArmF.setName(string("rightArm1.txt"));
    rArmF.readFile();
    break;
  case 3:
    lArmF.setName(string("leftArm2.txt"));
    lArmF.readFile();
    rArmF.setName(string("rightArm2.txt"));
    rArmF.readFile();
    break;
  case 4:
    lArmF.setName(string("leftArm3.txt"));
    lArmF.readFile();
    rArmF.setName(string("rightArm3.txt"));
    rArmF.readFile();
    break;
  default:
    lArmF.setName(string("leftArmHome.txt"));
    lArmF.readFile();
    rArmF.setName(string("rightArmHome.txt"));
    rArmF.readFile();
    break;
  }
}

/*******************************************************
* Function name ：typeCallBack
* Description   ：音乐类型动作组控制回调函数
* Parameter     ：
        @sig   信号
* Return        ：无
**********************************************************/
void typeCallBack(const std_msgs::Int16::ConstPtr &command)
{
  int16_t temp = command->data;
  switch (temp)
  {
  case 1:
    subAddr = string("first/");
    break;
  case 2:
    subAddr = string("second/");
    break;
  case 3:
    subAddr = string("third/");
    break;
  default:
    break;
  }
  lArmF.updateAddr(Addr + subAddr);
  rArmF.updateAddr(Addr + subAddr);
  lLegF.updateAddr(Addr + subAddr);
  rLegF.updateAddr(Addr + subAddr);
  headF.updateAddr(Addr + subAddr);
  lFootF.updateAddr(Addr + subAddr);
  rFootF.updateAddr(Addr + subAddr);
}

/*******************************************************
* Function name ：beatCallBack
* Description   ：音乐识别动作组控制回调函数
* Parameter     ：
        @sig   信号
* Return        ：无
**********************************************************/
void beatCallBack(const std_msgs::Float32::ConstPtr &command)
{
  is_audio_check = 0;
  float next_time = command->data;
  group_count++;
  ROS_INFO("get time %f", next_time);
  if (group_count > ALLGROUPNUM - 1)
  {
    group_count = 0;
  }

  lArmF.updateGroup(string("leftArm") + to_string(group_count) + string(".txt"), next_time);
  rArmF.updateGroup(string("rightArm") + to_string(group_count) + string(".txt"), next_time);
  lLegF.updateGroup(string("leftLeg") + to_string(group_count) + string(".txt"), next_time);
  rLegF.updateGroup(string("rightLeg") + to_string(group_count) + string(".txt"), next_time);
  headF.updateGroup(string("head") + to_string(group_count) + string(".txt"), next_time);
  lFootF.updateGroup(string("leftFoot") + to_string(group_count) + string(".txt"), next_time);
  rFootF.updateGroup(string("rightFoot") + to_string(group_count) + string(".txt"), next_time);
}

/* 主函数 */
int main(int argc, char **argv)
{
  setlocale(LC_ALL, ""); // 用于显示中文字符
  string controllerName;
  // 在ROS网络中创建一个名为robot_init的节点
  ros::init(argc, argv, "nao_init", ros::init_options::AnonymousName);
  n = new ros::NodeHandle;
  // 在CPU中开启一个线程
  ros::AsyncSpinner spinner(2);
  spinner.start();
  // 截取退出信号
  signal(SIGINT, quit);

  // 订阅webots中所有可用的model_name
  ros::Subscriber nameSub = n->subscribe("model_name", 2, controllerNameCallback);
  while (controllerCount == 0 || controllerCount < nameSub.getNumPublishers())
  {
  }
  // 服务订阅time_step和webots保持同步
  timeStepClient = n->serviceClient<webots_ros::set_int>("nao/robot/time_step");
  timeStepSrv.request.value = TIME_STEP;

  // 如果在webots中有多个控制器的话，需要让用户选择一个控制器
  if (controllerCount == 1)
    controllerName = controllerList[0];
  else
  {
    int wantedController = 0;
    cout << "Choose the # of the controller you want to use:\n";
    cin >> wantedController;
    if (1 <= wantedController && wantedController <= controllerCount)
      controllerName = controllerList[wantedController - 1];
    else
    {
      ROS_ERROR("Invalid number for controller choice.");
      return 1;
    }
  }
  ROS_INFO("Using controller: '%s'", controllerName.c_str());
  // 退出主题，因为已经不重要了
  nameSub.shutdown();

  /* 创建机器人控制节点 */
  ctrlClient lArmCtrl(&lArmF, lArmNames);
  ctrlClient rArmCtrl(&rArmF, rArmNames);
  ctrlClient lLegCtrl(&lLegF, lLegNames);
  ctrlClient rLegCtrl(&rLegF, rLegNames);
  ctrlClient headCtrl(&headF, headNames);
  ctrlClient lFootCtrl(&lFootF, lFootNames);
  ctrlClient rFootCtrl(&rFootF, rFootNames);

  /* 电机初始化参数获取与配置 */
  headCtrl.getMotorConstrains();
  rArmCtrl.getMotorConstrains();
  lArmCtrl.getMotorConstrains();
  rLegCtrl.getMotorConstrains();
  lLegCtrl.getMotorConstrains();
  lFootCtrl.getMotorConstrains();
  rFootCtrl.getMotorConstrains();

  // headCtrl.setMotorVmax(MOTORSPEED);
  // rArmCtrl.setMotorVmax(MOTORSPEED);
  // lArmCtrl.setMotorVmax(MOTORSPEED);
  // rLegCtrl.setMotorVmax(MOTORSPEED);
  // lLegCtrl.setMotorVmax(MOTORSPEED);
  // lFootCtrl.setMotorVmax(MOTORSPEED);
  // rFootCtrl.setMotorVmax(MOTORSPEED);

  /* 全局计时定时器创建 */
  ros::NodeHandle n_timer;
  ros::CallbackQueue n_timer_queue;
  n_timer.setCallbackQueue(&n_timer_queue);
  ros::Timer timer = n_timer.createTimer(ros::Duration(TIME_STEP * 0.001), timerCallBack, false, false); // 标准计时定时器
  ros::AsyncSpinner spinner_timer(1, &n_timer_queue);
  spinner_timer.start();

  /* webots同步定时器创建 */
  ros::NodeHandle n_wbtimer;
  ros::CallbackQueue n_wbtimer_queue;
  n_wbtimer.setCallbackQueue(&n_wbtimer_queue);
  // 此同步定时器必须使用较低频率，否则会使控制实时性大打折扣
  ros::Timer wbtimer = n_wbtimer.createTimer(ros::Duration(TIME_STEP * 0.02), wbTimCallBack, false, false); // wb同步定时器
  ros::AsyncSpinner spinner_wbtimer(1, &n_wbtimer_queue);
  spinner_wbtimer.start();

  wbtimer.start();
  timer.start();

  /* 启动机器人控制器 */
  headCtrl.beginCtrlLoop(TIME_STEP * 0.001, global_time);
  rArmCtrl.beginCtrlLoop(TIME_STEP * 0.001, global_time);
  lArmCtrl.beginCtrlLoop(TIME_STEP * 0.001, global_time);
  rLegCtrl.beginCtrlLoop(TIME_STEP * 0.001, global_time);
  lLegCtrl.beginCtrlLoop(TIME_STEP * 0.001, global_time);
  lFootCtrl.beginCtrlLoop(TIME_STEP * 0.001, global_time);
  rFootCtrl.beginCtrlLoop(TIME_STEP * 0.001, global_time);

  /* 订阅键盘消息 */
  ros::Subscriber keySub = n->subscribe("key_command", 1, keyCommandCallBack);

  /* 订阅音乐节拍的消息 */
  ros::Subscriber beatSub = n->subscribe("cmd_beat", 10, beatCallBack);

  /* 订阅音乐类型的消息 */
  ros::Subscriber typeSub = n->subscribe("cmd_type", 1, typeCallBack);

  ros::waitForShutdown();
  // 退出时时钟清零
  timeStepSrv.request.value = 0;
  timeStepClient.call(timeStepSrv);
  ros::shutdown();
  return 0;
}
