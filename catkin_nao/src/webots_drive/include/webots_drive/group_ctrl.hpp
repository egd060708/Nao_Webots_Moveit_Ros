#pragma once

#include "motion_file.hpp"
#include "ros/ros.h"
#include <webots_ros/set_float.h>
#include <webots_ros/get_float.h>
#include <ros/callback_queue.h>
#include "boost/thread.hpp"

/* 控制客户端类型 */
class ctrlClient
{
private:
  double lastTime = 0;                                                  // 上次更新动作时刻
  uint16_t gp = 0, jp = 0;                                              // 取值指针（动作组和关节组）
  string lastName;                                                      // 记录上一次执行动作组的名称
  bool is_send = 1;                                                     // 是否已经发布过此动作组
  vector<double> armpositions;                                          // 关节目标位置
  vector<vector<double>> constrains;                                    // 关节最大目标限幅
  motionF_Classdef *gFile;                                              // 动作组文件操作类型指针
  ros::NodeHandle pNode;                                                // 专属ros节点
  string *mNames;                                                       // 要控制的电机的名字
  ros::Timer timer;                                                     // 专属ros定时器
  ros::CallbackQueue pNode_queue;                                       // 专属ros回调队列
  ros::AsyncSpinner pNode_spinner = ros::AsyncSpinner(1, &pNode_queue); // 专属ros异步多线程管理器
  std::mutex mtx;                                                       // 互斥量（线程锁）

  /* 限幅函数 */
  double constrain(double tmp, double min, double max)
  {
    double result = tmp;
    if (tmp >= max)
    {
      result = max;
    }
    if (tmp <= min)
    {
      result = min;
    }
    return result;
  }

public:
  /* 构造函数 */
  ctrlClient() {}
  ctrlClient(motionF_Classdef *_gFile, string *_mNames) : gFile(_gFile), mNames(_mNames)
  {
    lastName = gFile->getName();
    this->armpositions.resize(gFile->getJnum());
    this->constrains.resize(2);
    this->constrains[0].resize(gFile->getJnum());
    this->constrains[1].resize(gFile->getJnum());
    gFile->readFile();
    gFile->setGroupT(1.);
    pNode.setCallbackQueue(&pNode_queue);
  }

  /* 控制器回调函数 */
  void ctrlCallBack(double _global_time, const ros::TimerEvent &event)
  {
    if (lastName != gFile->getName())
    {
      gp = 0; // 如果动作组更换则重置动作指针
      // lArmF.readFile();
      is_send = 1;
      // ROS_INFO("lArm changeName");
    }
    if (is_send)
    {
      // ROS_INFO("lArm is_send");
      is_send = 0;
      ros::ServiceClient set_position_client; // 电机角度控制
      webots_ros::set_float set_position_srv;
      this->armpositions.resize(gFile->getJnum());
      for (int i = 0; i < gFile->getJnum(); i++)
      {
        this->armpositions[i] = gFile->getData()[gp * gFile->getJnum() + i]; // 更新关节目标位置参数
        set_position_client = pNode.serviceClient<webots_ros::set_float>(string("/nao/") + string(mNames[i]) + string("/set_position"));
        // set_position_srv.request.value = this->constrain(armpositions[i],constrains[1][i],constrains[0][i]);
        set_position_srv.request.value = this->armpositions[i];
        // ROS_INFO("%f,%f,%f,%f",set_position_srv.request.value,armpositions[i],constrains[1][i],constrains[0][i]);
        set_position_client.call(set_position_srv);
      }
    }
    if (_global_time - lastTime >= gFile->getTimeStep())
    {
      lastTime = _global_time;
      if (gp < (gFile->getGnum() - 1))
      {
        gp++; // 满足时间和动作条件时指针自增
        is_send = 1;
      }
    }
    else
    {
      is_send = 0;
    }
    lastName = gFile->getName();
  }

  /* 配置电机最大速度 */
  void setMotorVmax(double _Vmax)
  {
    ros::ServiceClient set_velocity_client;
    webots_ros::set_float set_velocity_srv;
    // 设置电机最大速度
    for (int i = 0; i < gFile->getJnum(); ++i)
    {
      set_velocity_client = pNode.serviceClient<webots_ros::set_float>(string("/nao/") + string(mNames[i]) + string("/set_velocity"));
      set_velocity_srv.request.value = _Vmax;
      if (set_velocity_client.call(set_velocity_srv) && set_velocity_srv.response.success == 1)
        ROS_INFO("Max Velocity set to %f for motor %s.", _Vmax, mNames[i].c_str());
      else
        ROS_ERROR("Failed to call service set_velocity on motor %s.", mNames[i].c_str());
    }
  }

  /* 获取电机位置限幅 */
  void getMotorConstrains()
  {
    ros::ServiceClient get_constrains_client;
    webots_ros::get_float get_constrains_srv;
    for (int i = 0; i < gFile->getJnum(); ++i)
    {
      get_constrains_client = pNode.serviceClient<webots_ros::get_float>(string("/nao/") + string(mNames[i]) + string("/get_max_position"));
      if (get_constrains_client.call(get_constrains_srv))
      {
        this->constrains[0][i] = get_constrains_srv.response.value;
        ROS_INFO("Max Position for %s is %f.", mNames[i].c_str(), this->constrains[0][i]);
      }
      else
        ROS_ERROR("Failed to call service get_max_position on motor %s.", mNames[i].c_str());

      get_constrains_client = pNode.serviceClient<webots_ros::get_float>(string("/nao/") + string(mNames[i]) + string("/get_min_position"));
      if (get_constrains_client.call(get_constrains_srv))
      {
        this->constrains[1][i] = get_constrains_srv.response.value;
        ROS_INFO("Min Position for %s is %f.", mNames[i].c_str(), this->constrains[1][i]);
      }
      else
        ROS_ERROR("Failed to call service get_min_position on motor %s.", mNames[i].c_str());
    }
  }

  /* 开启控制循环 */
  void beginCtrlLoop(double _timeStep, double _gtime)
  {
    pNode_spinner.start();
    this->timer = pNode.createTimer(ros::Duration(_timeStep), boost::bind(&ctrlClient::ctrlCallBack, this, _gtime, boost::placeholders::_1), false, true);
  }
};