#include <signal.h>
#include <std_msgs/String.h>
#include "ros/ros.h"
 
#include <webots_ros/set_float.h>
#include <webots_ros/set_int.h>
#include <webots_ros/Int32Stamped.h>
#include <webots_ros/Float64Stamped.h>
#include <sensor_msgs/NavSatFix.h> // 增加传感器srv数据类型
#include <geometry_msgs/PointStamped.h>
#include <sensor_msgs/Imu.h>
#include <tf/transform_broadcaster.h> // tf坐标变换
#include <sensor_msgs/JointState.h>
#include <actionlib/server/simple_action_server.h>  //action服务
#include <control_msgs/FollowJointTrajectoryAction.h>   // 信息类型
#include <moveit_msgs/RobotTrajectory.h>

#include "webots_drive/motion_file.hpp"



using namespace std;
#define TIME_STEP 32    //时钟
#define NMOTORS 22
#define MOTORSPEED 0.21

typedef actionlib::SimpleActionServer<control_msgs::FollowJointTrajectoryAction> ServerClass;
 
ros::NodeHandle *n;

static int controllerCount;
static vector<string> controllerList; 

ros::ServiceClient timeStepClient;          //时钟通讯客户端
webots_ros::set_int timeStepSrv;            //时钟服务数据

ros::ServiceClient set_velocity_client;     //电机速度设置客户端
webots_ros::set_float set_velocity_srv;

static const char *armNames[NMOTORS] = {"HeadPitch", "HeadYaw", "RElbowRoll", "RElbowYaw", "RShoulderPitch", "RShoulderRoll","LElbowRoll", "LElbowYaw", "LShoulderPitch", "LShoulderRoll","RHipYawPitch","RHipPitch","RKneePitch","RHipRoll","RAnklePitch","RAnkleRoll","LHipYawPitch","LHipPitch","LKneePitch","LHipRoll","LAnklePitch","LAnkleRoll"};

// 动作组文件输出类型
string Addr = string("/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/move_groups/");
motionF_Classdef lArmF(Addr);
motionF_Classdef rArmF(Addr);
motionF_Classdef lLegF(Addr);
motionF_Classdef rLegF(Addr);
motionF_Classdef headF(Addr);
motionF_Classdef lFootF(Addr);
motionF_Classdef rFootF(Addr);
motionF_Classdef lHandF(Addr);
motionF_Classdef rHandF(Addr);
motionF_Classdef pelvisF(Addr);


/*******************************************************
* Function name ：controllerNameCallback
* Description   ：控制器名回调函数，获取当前ROS存在的机器人控制器
* Parameter     ：
        @name   控制器名
* Return        ：无
**********************************************************/
void controllerNameCallback(const std_msgs::String::ConstPtr &name) { 
    controllerCount++; 
    controllerList.push_back(name->data);//将控制器名加入到列表中
    ROS_INFO("Controller #%d: %s.", controllerCount, controllerList.back().c_str());

}
/*******************************************************
* Function name ：quit
* Description   ：退出函数
* Parameter     ：
        @sig   信号
* Return        ：无
**********************************************************/
void quit(int sig) {
    ROS_INFO("User stopped the '/nao' node.");
    timeStepSrv.request.value = 0; 
    timeStepClient.call(timeStepSrv); 
    ros::shutdown();
    exit(0);
}

void leftArm_onGoal(const control_msgs::FollowJointTrajectoryGoalConstPtr& goal, ServerClass* as){
    ros::ServiceClient set_position_client;     //电机角度控制
    webots_ros::set_float set_position_srv;
    /* 获取基本信息 */
    int PointsSize = goal->trajectory.points.size();
    int JointsNum = goal->trajectory.points.size();
    ROS_INFO("data size %d",PointsSize);
    vector<double> armpositions = {0.,0.,0.,0.,0.};
    /* 配置文件读写 */
    static int fileCount = 0;
    lArmF.setName(string("leftArm")+to_string(fileCount)+string(".txt"));
    lArmF.updateSize(PointsSize,4);
    /* 数据输出和仿真 */
    for (int i = 0; i < PointsSize; i++)
    {
        armpositions = goal->trajectory.points[i].positions;
        ROS_INFO("running time list %d:%d",goal->trajectory.points[i].time_from_start.sec,goal->trajectory.points[i].time_from_start.nsec);
        // 获取当前时间戳
        ros::Time current_time = ros::Time::now();
        ROS_INFO("current_time %d:%d",current_time.sec,current_time.nsec);
        for (int j = 0; j < 4; j++)
        {
            lArmF.setData(i,j,armpositions[j]);
            set_position_client = n->serviceClient<webots_ros::set_float>(string("/nao/") + string(armNames[6 + j]) + string("/set_position"));   
            set_position_srv.request.value = armpositions[j];
            if (set_position_client.call(set_position_srv) && set_position_srv.response.success)     
                ROS_INFO("Position set to %f for motor %s.", armpositions[j], armNames[j]);   
            else     
                ROS_ERROR("Failed to call service set_position on motor %s.", armNames[j]);
        }
    }
    lArmF.writeFile();// 输出文件
    fileCount++;// 名称计数增加
    as->setSucceeded();
}

void rightArm_onGoal(const control_msgs::FollowJointTrajectoryGoalConstPtr& goal, ServerClass* as){
    ros::ServiceClient set_position_client;     //电机角度控制
    webots_ros::set_float set_position_srv;
    /* 获取基本信息 */
    int PointsSize = goal->trajectory.points.size();
    int JointsNum = goal->trajectory.points.size();
    ROS_INFO("data size %d",PointsSize);
    vector<double> armpositions = {0.,0.,0.,0.,0.};
    /* 配置文件读写 */
    static int fileCount = 0;
    rArmF.setName(string("rightArm")+to_string(fileCount)+string(".txt"));
    rArmF.updateSize(PointsSize,4);
    /* 数据输出和仿真 */
    for (int i = 0; i < PointsSize; i++)
    {
        armpositions = goal->trajectory.points[i].positions;
        for (int j = 0; j < 4; j++)
        {
            rArmF.setData(i,j,armpositions[j]);
            set_position_client = n->serviceClient<webots_ros::set_float>(string("/nao/") + string(armNames[2 + j]) + string("/set_position"));   
            set_position_srv.request.value = armpositions[j];
            if (set_position_client.call(set_position_srv) && set_position_srv.response.success)     
                ROS_INFO("Position set to %f for motor %s.", armpositions[j], armNames[j]);   
            else     
                ROS_ERROR("Failed to call service set_position on motor %s.", armNames[j]);
        }
    }
    rArmF.writeFile();// 输出文件
    fileCount++;// 名称计数增加
    as->setSucceeded();
}

void Head_onGoal(const control_msgs::FollowJointTrajectoryGoalConstPtr& goal, ServerClass* as){
    ros::ServiceClient set_position_client;     //电机角度控制
    webots_ros::set_float set_position_srv;
    /* 获取基本信息 */
    int PointsSize = goal->trajectory.points.size();
    int JointsNum = goal->trajectory.points.size();
    ROS_INFO("data size %d",PointsSize);
    vector<double> armpositions = {0.,0.};
    /* 配置文件读写 */
    static int fileCount = 0;
    headF.setName(string("head")+to_string(fileCount)+string(".txt"));
    headF.updateSize(PointsSize,2);
    /* 数据输出和仿真 */
    for (int i = 0; i < PointsSize; i++)
    {
        armpositions = goal->trajectory.points[i].positions;
        for (int j = 0; j < 2; j++)
        {
            headF.setData(i,j,armpositions[j]);
            set_position_client = n->serviceClient<webots_ros::set_float>(string("/nao/") + string(armNames[0 + j]) + string("/set_position"));   
            set_position_srv.request.value = armpositions[j];
            if (set_position_client.call(set_position_srv) && set_position_srv.response.success)     
                ROS_INFO("Position set to %f for motor %s.", armpositions[j], armNames[j]);   
            else     
                ROS_ERROR("Failed to call service set_position on motor %s.", armNames[j]);
        }
    }
    headF.writeFile();// 输出文件
    fileCount++;// 名称计数增加
    as->setSucceeded();
}

void leftLeg_onGoal(const control_msgs::FollowJointTrajectoryGoalConstPtr& goal, ServerClass* as){
    ros::ServiceClient set_position_client;     //电机角度控制
    webots_ros::set_float set_position_srv;
    /* 获取基本信息 */
    int PointsSize = goal->trajectory.points.size();
    int JointsNum = goal->trajectory.points.size();
    ROS_INFO("data size %d",PointsSize);
    vector<double> armpositions = {0.,0.,0.};
    /* 配置文件读写 */
    static int fileCount = 0;
    lLegF.setName(string("leftLeg")+to_string(fileCount)+string(".txt"));
    lLegF.updateSize(PointsSize,3);
    /* 数据输出和仿真 */
    for (int i = 0; i < PointsSize; i++)
    {
        armpositions = goal->trajectory.points[i].positions;
        for (int j = 0; j < 3; j++)
        {
            lLegF.setData(i,j,armpositions[j]);
            set_position_client = n->serviceClient<webots_ros::set_float>(string("/nao/") + string(armNames[17 + j]) + string("/set_position"));   
            set_position_srv.request.value = armpositions[j];
            if (set_position_client.call(set_position_srv) && set_position_srv.response.success)     
                ROS_INFO("Position set to %f for motor %s.", armpositions[j], armNames[j]);   
            else     
                ROS_ERROR("Failed to call service set_position on motor %s.", armNames[j]);
        }
    }
    lLegF.writeFile();// 输出文件
    fileCount++;// 名称计数增加
    as->setSucceeded();
}

void rightLeg_onGoal(const control_msgs::FollowJointTrajectoryGoalConstPtr& goal, ServerClass* as){
    ros::ServiceClient set_position_client;     //电机角度控制
    webots_ros::set_float set_position_srv;
    /* 获取基本信息 */
    int PointsSize = goal->trajectory.points.size();
    int JointsNum = goal->trajectory.points.size();
    ROS_INFO("data size %d",PointsSize);
    vector<double> armpositions = {0.,0.,0.};
    /* 配置文件读写 */
    static int fileCount = 0;
    rLegF.setName(string("rightLeg")+to_string(fileCount)+string(".txt"));
    rLegF.updateSize(PointsSize,3);
    /* 数据输出和仿真 */
    for (int i = 0; i < PointsSize; i++)
    {
        armpositions = goal->trajectory.points[i].positions;
        for (int j = 0; j < 3; j++)
        {
            rLegF.setData(i,j,armpositions[j]);
            set_position_client = n->serviceClient<webots_ros::set_float>(string("/nao/") + string(armNames[11 + j]) + string("/set_position"));   
            set_position_srv.request.value = armpositions[j];
            if (set_position_client.call(set_position_srv) && set_position_srv.response.success)     
                ROS_INFO("Position set to %f for motor %s.", armpositions[j], armNames[j]);   
            else     
                ROS_ERROR("Failed to call service set_position on motor %s.", armNames[j]);
        }
    }
    rLegF.writeFile();// 输出文件
    fileCount++;// 名称计数增加
    as->setSucceeded();
}

void leftFoot_onGoal(const control_msgs::FollowJointTrajectoryGoalConstPtr& goal, ServerClass* as){
    ros::ServiceClient set_position_client;     //电机角度控制
    webots_ros::set_float set_position_srv;
    /* 获取基本信息 */
    int PointsSize = goal->trajectory.points.size();
    int JointsNum = goal->trajectory.points.size();
    ROS_INFO("data size %d",PointsSize);
    vector<double> armpositions = {0.,0.};
    /* 配置文件读写 */
    static int fileCount = 0;
    lFootF.setName(string("leftFoot")+to_string(fileCount)+string(".txt"));
    lFootF.updateSize(PointsSize,2);
    /* 数据输出和仿真 */
    for (int i = 0; i < PointsSize; i++)
    {
        armpositions = goal->trajectory.points[i].positions;
        for (int j = 0; j < 2; j++)
        {
            lFootF.setData(i,j,armpositions[j]);
            set_position_client = n->serviceClient<webots_ros::set_float>(string("/nao/") + string(armNames[20 + j]) + string("/set_position"));   
            set_position_srv.request.value = armpositions[j];
            if (set_position_client.call(set_position_srv) && set_position_srv.response.success)     
                ROS_INFO("Position set to %f for motor %s.", armpositions[j], armNames[j]);   
            else     
                ROS_ERROR("Failed to call service set_position on motor %s.", armNames[j]);
        }
    }
    lFootF.writeFile();// 输出文件
    fileCount++;// 名称计数增加
    as->setSucceeded();
}

void rightFoot_onGoal(const control_msgs::FollowJointTrajectoryGoalConstPtr& goal, ServerClass* as){
    ros::ServiceClient set_position_client;     //电机角度控制
    webots_ros::set_float set_position_srv;
    /* 获取基本信息 */
    int PointsSize = goal->trajectory.points.size();
    int JointsNum = goal->trajectory.points.size();
    ROS_INFO("data size %d",PointsSize);
    vector<double> armpositions = {0.,0.};
    /* 配置文件读写 */
    static int fileCount = 0;
    rFootF.setName(string("rightFoot")+to_string(fileCount)+string(".txt"));
    rFootF.updateSize(PointsSize,2);
    /* 数据输出和仿真 */
    for (int i = 0; i < PointsSize; i++)
    {
        armpositions = goal->trajectory.points[i].positions;
        for (int j = 0; j < 2; j++)
        {
            rFootF.setData(i,j,armpositions[j]);
            set_position_client = n->serviceClient<webots_ros::set_float>(string("/nao/") + string(armNames[14 + j]) + string("/set_position"));   
            set_position_srv.request.value = armpositions[j];
            if (set_position_client.call(set_position_srv) && set_position_srv.response.success)     
                ROS_INFO("Position set to %f for motor %s.", armpositions[j], armNames[j]);   
            else     
                ROS_ERROR("Failed to call service set_position on motor %s.", armNames[j]);
        }
    }
    rFootF.writeFile();// 输出文件
    fileCount++;// 名称计数增加
    as->setSucceeded();
}

void pelvis_onGoal(const control_msgs::FollowJointTrajectoryGoalConstPtr& goal, ServerClass* as){
    ros::ServiceClient set_position_client;     //电机角度控制
    webots_ros::set_float set_position_srv;
    /* 获取基本信息 */
    int PointsSize = goal->trajectory.points.size();
    int JointsNum = goal->trajectory.points.size();
    ROS_INFO("data size %d",PointsSize);
    vector<double> armpositions = {0.};
    /* 配置文件读写 */
    static int fileCount = 0;
    pelvisF.setName(string("Pelvis")+to_string(fileCount)+string(".txt"));
    pelvisF.updateSize(PointsSize,1);
    /* 数据输出和仿真 */
    for (int i = 0; i < PointsSize; i++)
    {
        armpositions = goal->trajectory.points[i].positions;
        for (int j = 0; j < 1; j++)
        {
            pelvisF.setData(i,j,armpositions[j]);
            set_position_client = n->serviceClient<webots_ros::set_float>(string("/nao/") + string(armNames[16 + j]) + string("/set_position"));   
            set_position_srv.request.value = armpositions[j];
            if (set_position_client.call(set_position_srv) && set_position_srv.response.success)     
                ROS_INFO("Position set to %f for motor %s.", armpositions[j], armNames[j]);   
            else     
                ROS_ERROR("Failed to call service set_position on motor %s.", armNames[j]);
        }
    }
    pelvisF.writeFile();// 输出文件
    fileCount++;// 名称计数增加
    as->setSucceeded();
}

void leftHand_onGoal(const control_msgs::FollowJointTrajectoryGoalConstPtr& goal, ServerClass* as){
    ros::ServiceClient set_position_client;     //电机角度控制
    webots_ros::set_float set_position_srv;
    /* 获取基本信息 */
    int PointsSize = goal->trajectory.points.size();
    int JointsNum = goal->trajectory.points.size();
    ROS_INFO("data size %d",PointsSize);
    vector<double> armpositions = {0.};
    for (int i = 0; i < PointsSize; i++)
    {
        armpositions = goal->trajectory.points[i].positions;
    }
    as->setSucceeded();
}

void rightHand_onGoal(const control_msgs::FollowJointTrajectoryGoalConstPtr& goal, ServerClass* as){
    ros::ServiceClient set_position_client;     //电机角度控制
    webots_ros::set_float set_position_srv;
    int PointsSize = goal->trajectory.points.size();
    //ROS_INFO("data size %d",PointsSize);
    vector<double> armpositions = {0.};
    for (int i = 0; i < PointsSize; i++)
    {
        armpositions = goal->trajectory.points[i].positions;
    }
    as->setSucceeded();
}

void timercallback(const ros::TimerEvent& event){  //定时器回调函数
    if (!timeStepClient.call(timeStepSrv) || !timeStepSrv.response.success)
    {  
        ROS_ERROR("Failed to call service time_step for next step.");       
    }
}



int main(int argc, char **argv) {
    setlocale(LC_ALL, ""); // 用于显示中文字符
    string controllerName;
    // 在ROS网络中创建一个名为robot_init的节点
    ros::init(argc, argv, "nao_getTar", ros::init_options::AnonymousName);
    n = new ros::NodeHandle;
    // 在CPU中开启一个线程
    ros::AsyncSpinner spinner(0);
    spinner.start();
    // 截取退出信号
    signal(SIGINT, quit);

    // 订阅webots中所有可用的model_name
    ros::Subscriber nameSub = n->subscribe("model_name", 10, controllerNameCallback);
    while (controllerCount == 0 || controllerCount < nameSub.getNumPublishers()) {}
    // 服务订阅time_step和webots保持同步
    timeStepClient = n->serviceClient<webots_ros::set_int>("nao/robot/time_step");
    timeStepSrv.request.value = TIME_STEP;

    // 如果在webots中有多个控制器的话，需要让用户选择一个控制器
    if (controllerCount == 1)
        controllerName = controllerList[0];
    else {
        int wantedController = 0;
        cout << "Choose the # of the controller you want to use:\n";
        cin >> wantedController;
        if (1 <= wantedController && wantedController <= controllerCount)
        controllerName = controllerList[wantedController - 1];
        else {
        ROS_ERROR("Invalid number for controller choice.");
        return 1;
        }
    }
    ROS_INFO("Using controller: '%s'", controllerName.c_str());
    // 退出主题，因为已经不重要了
    nameSub.shutdown();

    // // 设置电机最大速度
    // for (int i = 0; i < NMOTORS; ++i) { 
    //     set_velocity_client = n->serviceClient<webots_ros::set_float>(string("/nao/") + string(armNames[i]) + string("/set_velocity"));   
    //     set_velocity_srv.request.value = MOTORSPEED;   
    //     if (set_velocity_client.call(set_velocity_srv) && set_velocity_srv.response.success == 1)     
    //         ROS_INFO("Max Velocity set to %f for motor %s.", MOTORSPEED, armNames[i]);   
    //     else     
    //         ROS_ERROR("Failed to call service set_velocity on motor %s.", armNames[i]);
    // }
    // 启动电机位置控制接口
    ServerClass leftArm_server(*n, "nao_dcm/LeftArm_controller/follow_joint_trajectory", boost::bind(&leftArm_onGoal,_1,&leftArm_server), false);
    ROS_INFO("leftArm_server: Starting");
    leftArm_server.start();

    ServerClass rightArm_server(*n, "nao_dcm/RightArm_controller/follow_joint_trajectory", boost::bind(&rightArm_onGoal,_1,&rightArm_server), false);
    ROS_INFO("rightArm_server: Starting");
    rightArm_server.start();

    ServerClass Head_server(*n, "nao_dcm/Head_controller/follow_joint_trajectory", boost::bind(&Head_onGoal,_1,&Head_server), false);
    ROS_INFO("Head_server: Starting");
    Head_server.start();

    ServerClass leftLeg_server(*n, "nao_dcm/LeftLeg_controller/follow_joint_trajectory", boost::bind(&leftLeg_onGoal,_1,&leftLeg_server), false);
    ROS_INFO("leftLeg_server: Starting");
    leftLeg_server.start();

    ServerClass leftFoot_server(*n, "nao_dcm/LeftFoot_controller/follow_joint_trajectory", boost::bind(&leftFoot_onGoal,_1,&leftFoot_server), false);
    ROS_INFO("leftFoot_server: Starting");
    leftFoot_server.start();

    ServerClass rightLeg_server(*n, "nao_dcm/RightLeg_controller/follow_joint_trajectory", boost::bind(&rightLeg_onGoal,_1,&rightLeg_server), false);
    ROS_INFO("rightLeg_server: Starting");
    rightLeg_server.start();

    ServerClass rightFoot_server(*n, "nao_dcm/RightFoot_controller/follow_joint_trajectory", boost::bind(&rightFoot_onGoal,_1,&rightFoot_server), false);
    ROS_INFO("rightFoot_server: Starting");
    rightFoot_server.start();

    ServerClass pelvis_server(*n, "nao_dcm/Pelvis_controller/follow_joint_trajectory", boost::bind(&pelvis_onGoal,_1,&pelvis_server), false);
    ROS_INFO("pelvis_server: Starting");
    pelvis_server.start();

    ServerClass leftHand_server(*n, "nao_dcm/LeftHand_controller/follow_joint_trajectory", boost::bind(&leftHand_onGoal,_1,&leftHand_server), false);
    ROS_INFO("leftHand_server: Starting");
    leftHand_server.start();

    ServerClass rightHand_server(*n, "nao_dcm/RightHand_controller/follow_joint_trajectory", boost::bind(&rightHand_onGoal,_1,&rightHand_server), false);
    ROS_INFO("rightHand_server: Starting");
    rightHand_server.start();

    ros::Timer timer= n->createTimer(ros::Duration(TIME_STEP*0.001),timercallback);//定时器
    // // 主循环
    // while (ros::ok()) {   
    //     // // 获取当前时间戳
    //     // ros::Time current_time = ros::Time::now();
    //     // ROS_INFO("timeStep: %d",current_time.nsec);
    //     ros::spinOnce();
    //     if (!timeStepClient.call(timeStepSrv) || !timeStepSrv.response.success)
    //     {  
    //         ROS_ERROR("Failed to call service time_step for next step.");     
    //         break;   
    //     }   
    //     ros::spinOnce();
    // } 
    ros::waitForShutdown();
    //退出时时钟清零
    timeStepSrv.request.value = 0;
    timeStepClient.call(timeStepSrv);
    ros::shutdown();
    return 0;
}
