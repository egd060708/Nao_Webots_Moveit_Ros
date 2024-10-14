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


using namespace std;
#define TIME_STEP 32    //时钟
#define NMOTORS 22
 
ros::NodeHandle *n;

static int controllerCount;
static vector<string> controllerList; 

ros::ServiceClient timeStepClient;          //时钟通讯客户端
webots_ros::set_int timeStepSrv;            //时钟服务数据

ros::Publisher pub_Joint_State_Publisher;

static const char *armNames[NMOTORS + 4] = {"HeadYaw", "HeadPitch", "RShoulderPitch", "RShoulderRoll", "RElbowYaw", "RElbowRoll","LShoulderPitch", "LShoulderRoll", "LElbowYaw", "LElbowRoll","RHipYawPitch","RHipRoll","RHipPitch","RKneePitch","RAnklePitch","RAnkleRoll","LHipYawPitch","LHipRoll","LHipPitch","LKneePitch","LAnklePitch","LAnkleRoll","LWristYaw","RWristYaw","LHand","RHand"};
vector<double> armpositions = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};

vector<void(*)(const webots_ros::Float64Stamped::ConstPtr &value)> joint_sensorcallback;


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

void HeadYaw_sensorcallback(const webots_ros::Float64Stamped::ConstPtr &value){
    armpositions[0] = value->data;
}

void HeadPitch_sensorcallback(const webots_ros::Float64Stamped::ConstPtr &value){
    armpositions[1] = value->data;
}

void RShoulderPitch_sensorcallback(const webots_ros::Float64Stamped::ConstPtr &value){
    armpositions[2] = value->data;
}

void RShoulderRoll_sensorcallback(const webots_ros::Float64Stamped::ConstPtr &value){
    armpositions[3] = value->data;
}

void RElbowYaw_sensorcallback(const webots_ros::Float64Stamped::ConstPtr &value){
    armpositions[4] = value->data;
}

void RElbowRoll_sensorcallback(const webots_ros::Float64Stamped::ConstPtr &value){
    armpositions[5] = value->data;
}

void LShoulderPitch_sensorcallback(const webots_ros::Float64Stamped::ConstPtr &value){
    armpositions[6] = value->data;
}

void LShoulderRoll_sensorcallback(const webots_ros::Float64Stamped::ConstPtr &value){
    armpositions[7] = value->data;
}

void LElbowYaw_sensorcallback(const webots_ros::Float64Stamped::ConstPtr &value){
    armpositions[8] = value->data;
}

void LElbowRoll_sensorcallback(const webots_ros::Float64Stamped::ConstPtr &value){
    armpositions[9] = value->data;
}

void RHipYawPitch_sensorcallback(const webots_ros::Float64Stamped::ConstPtr &value){
    armpositions[10] = value->data;
}

void RHipRoll_sensorcallback(const webots_ros::Float64Stamped::ConstPtr &value){
    armpositions[11] = value->data;
}

void RHipPitch_sensorcallback(const webots_ros::Float64Stamped::ConstPtr &value){
    armpositions[12] = value->data;
}

void RKneePitch_sensorcallback(const webots_ros::Float64Stamped::ConstPtr &value){
    armpositions[13] = value->data;
}

void RAnglePitch_sensorcallback(const webots_ros::Float64Stamped::ConstPtr &value){
    armpositions[14] = value->data;
}

void RAngleRoll_sensorcallback(const webots_ros::Float64Stamped::ConstPtr &value){
    armpositions[15] = value->data;
}

void LHipYawPitch_sensorcallback(const webots_ros::Float64Stamped::ConstPtr &value){
    armpositions[16] = value->data;
}

void LHipRoll_sensorcallback(const webots_ros::Float64Stamped::ConstPtr &value){
    armpositions[17] = value->data;
}

void LHipPitch_sensorcallback(const webots_ros::Float64Stamped::ConstPtr &value){
    armpositions[18] = value->data;
}

void LKneePitch_sensorcallback(const webots_ros::Float64Stamped::ConstPtr &value){
    armpositions[19] = value->data;
}

void LAnglePitch_sensorcallback(const webots_ros::Float64Stamped::ConstPtr &value){
    armpositions[20] = value->data;
}

void LAngleRoll_sensorcallback(const webots_ros::Float64Stamped::ConstPtr &value){
    armpositions[21] = value->data;
}

// 整合消息并且发布
void Joint_State_Publish(ros::Publisher pub){
    sensor_msgs::JointState joint_state;
    joint_state.header.stamp = ros::Time::now();
    joint_state.header.frame_id = "sim";
    for (int i = 0; i < NMOTORS + 4; i++)
    {
        // if(i!=10&&i!=16)// 排除两个官方urdf里面没有的电机
        // {
            joint_state.name.push_back(armNames[i]);
            joint_state.position.push_back(armpositions[i]);
            joint_state.velocity.push_back(0.0);
            joint_state.effort.push_back(0.0);
        // }
    }
    pub.publish(joint_state);
}

void timercallback(const ros::TimerEvent& event){  //定时器回调函数
    Joint_State_Publish(pub_Joint_State_Publisher);
    if (!timeStepClient.call(timeStepSrv) || !timeStepSrv.response.success)
    {  
        ROS_ERROR("Failed to call service time_step for next step.");       
    }
}



int main(int argc, char **argv) {
    setlocale(LC_ALL, ""); // 用于显示中文字符
    string controllerName;
    // 在ROS网络中创建一个名为ur5e_init的节点
    ros::init(argc, argv, "nao_init", ros::init_options::AnonymousName);
    n = new ros::NodeHandle;
    // 在CPU中开启一个线程
    ros::AsyncSpinner spinner(4);
    spinner.start();
    // 截取退出信号
    signal(SIGINT, quit);

    // 订阅webots中所有可用的model_name
    ros::Subscriber nameSub = n->subscribe("model_name", 100, controllerNameCallback);
    while (controllerCount == 0 || controllerCount < nameSub.getNumPublishers()) {
        ros::spinOnce();
        ros::spinOnce();
        ros::spinOnce();
    }
    ros::spinOnce();
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

    // 使能所有电机的位置传感器 
    ros::ServiceClient position_sensor_client;
    webots_ros::set_int position_sensor_srv;
    for (int i = 0; i < NMOTORS; i++)
    {
        position_sensor_client = n->serviceClient<webots_ros::set_int>(string("/nao/")+string(armNames[i])+string("S/enable"));
        position_sensor_srv.request.value = TIME_STEP;
        if (position_sensor_client.call(position_sensor_srv) && position_sensor_srv.response.success)     
            ROS_INFO("Enabled %s successful.", armNames[i]);   
        else     
            ROS_ERROR("Failed to enabled %s.", armNames[i]);
    }
    ros::Subscriber sub_joint_sensor[NMOTORS];
    joint_sensorcallback.push_back(HeadYaw_sensorcallback);
	joint_sensorcallback.push_back(HeadPitch_sensorcallback);
	joint_sensorcallback.push_back(RShoulderPitch_sensorcallback);
	joint_sensorcallback.push_back(RShoulderRoll_sensorcallback);
	joint_sensorcallback.push_back(RElbowYaw_sensorcallback);
	joint_sensorcallback.push_back(RElbowRoll_sensorcallback);
	joint_sensorcallback.push_back(LShoulderPitch_sensorcallback);
	joint_sensorcallback.push_back(LShoulderRoll_sensorcallback);
	joint_sensorcallback.push_back(LElbowYaw_sensorcallback);
	joint_sensorcallback.push_back(LElbowRoll_sensorcallback);
	joint_sensorcallback.push_back(RHipYawPitch_sensorcallback);
	joint_sensorcallback.push_back(RHipRoll_sensorcallback);
	joint_sensorcallback.push_back(RHipPitch_sensorcallback);
	joint_sensorcallback.push_back(RKneePitch_sensorcallback);
	joint_sensorcallback.push_back(RAnglePitch_sensorcallback);
	joint_sensorcallback.push_back(RAngleRoll_sensorcallback);
	joint_sensorcallback.push_back(LHipYawPitch_sensorcallback);
	joint_sensorcallback.push_back(LHipRoll_sensorcallback);
	joint_sensorcallback.push_back(LHipPitch_sensorcallback);
	joint_sensorcallback.push_back(LKneePitch_sensorcallback);
	joint_sensorcallback.push_back(LAnglePitch_sensorcallback);
	joint_sensorcallback.push_back(LAngleRoll_sensorcallback);
    for(int i=0;i<NMOTORS;i++)
    {
        sub_joint_sensor[i] = n->subscribe("/nao/"+string(armNames[i])+"S/value",2,joint_sensorcallback[i]);
    }

    pub_Joint_State_Publisher = n->advertise<sensor_msgs::JointState>("/joint_states",50);


    ros::Timer timer= n->createTimer(ros::Duration(TIME_STEP*0.001),timercallback);//定时器
    // // 主循环
    // while (ros::ok()) {   
    //     Joint_State_Publish(pub_Joint_State_Publisher);
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
