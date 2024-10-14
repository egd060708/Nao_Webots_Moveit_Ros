#include <signal.h>
#include <std_msgs/String.h>
#include "ros/ros.h"
#include "webots_drive/motion_file.hpp"

ros::NodeHandle *n;

int main(int argc, char **argv) {
    setlocale(LC_ALL, ""); // 用于显示中文字符
    // 在ROS网络中创建一个名为ur5e_init的节点
    ros::init(argc, argv, "file_test", ros::init_options::AnonymousName);
    n = new ros::NodeHandle;
    // 在CPU中开启一个线程
    ros::AsyncSpinner spinner(1);
    spinner.start();

    //路径中的文件夹不能有大写字母，否则路径五发展正常识别
    string Addr = string("/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/move_groups/");
    motionF_Classdef test(Addr);
    
    test.setName(string("motion_test.txt"));
    test.updateSize(3,2);
    vector<double> temp = {1.1,2.2,3.35,4.78,5.09,6.66};
    for(int i=0;i<6;i++)
    {
        ROS_INFO("test data is: %f",temp[i]);
    }
    test.setData(temp);
    
    test.writeFile();
    test.readFile();
    for(int i=0;i<6;i++)
    {
        ROS_INFO("test data is: %f",test.getData()[i]);
    }

    ros::waitForShutdown();
    return 0;
}