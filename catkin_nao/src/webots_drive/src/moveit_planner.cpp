#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit/planning_scene_interface/planning_scene_interface.h>

#include <moveit_msgs/DisplayRobotState.h>
#include <moveit_msgs/DisplayTrajectory.h>

#include <moveit_msgs/AttachedCollisionObject.h>
#include <moveit_msgs/CollisionObject.h>

#include <moveit_visual_tools/moveit_visual_tools.h>

#include <moveit/robot_trajectory/robot_trajectory.h>
#include <moveit/trajectory_processing/iterative_time_parameterization.h>        

#include <boost/thread.hpp>

// MoveItVisualTools包提供了很多在RVIZ下可用的可视化的物体、机器人和轨迹以及调试工具
namespace rvt = rviz_visual_tools;

void timer1callback(const ros::TimerEvent& event)
{
  // moveit_visual_tools::MoveItVisualTools visual_tools1("world");
  // visual_tools1.deleteAllMarkers();
  // // 远程控制是一个在RVIZ通过按钮和键盘控制的工具
  // visual_tools1.loadRemoteControl();

  static const std::string PLANNING_GROUP1 = "right_arm";
  moveit::planning_interface::MoveGroupInterface move_group1(PLANNING_GROUP1);
  moveit::planning_interface::PlanningSceneInterface planning_scene_interface1;
  move_group1.allowReplanning(true);//规划失败允许重新规划

  const robot_state::JointModelGroup* joint_model_group1 = move_group1.getCurrentState()->getJointModelGroup(PLANNING_GROUP1);

  moveit::core::RobotStatePtr current_state1 = move_group1.getCurrentState();

  std::vector<double> joint_group_positions1;
  current_state1->copyJointGroupPositions(joint_model_group1, joint_group_positions1);

  joint_group_positions1[0] = 1.;  // radians
  move_group1.setJointValueTarget(joint_group_positions1);
  move_group1.setMaxVelocityScalingFactor(1);

  moveit::planning_interface::MoveGroupInterface::Plan my_plan1;

  bool success1 = (move_group1.plan(my_plan1) == moveit::planning_interface::MoveItErrorCode::SUCCESS);
  ROS_INFO_NAMED("tutorial", "Visualizing plan 2 (joint space goal) %s", success1 ? "" : "FAILED");

  move_group1.move();//发布运动规划

  // visual_tools1.prompt("Press 'next' in the RvizVisualToolsGui window to continue the demo");

  joint_group_positions1[0] = 0;  // radians
  move_group1.setJointValueTarget(joint_group_positions1);
  move_group1.setMaxVelocityScalingFactor(1);

  success1 = (move_group1.plan(my_plan1) == moveit::planning_interface::MoveItErrorCode::SUCCESS);
  ROS_INFO_NAMED("tutorial", "Visualizing plan 2 (joint space goal) %s", success1 ? "" : "FAILED");

  move_group1.move();//发布运动规划

  // visual_tools1.prompt("Press 'next' in the RvizVisualToolsGui window to continue the demo");

  // ros::waitForShutdown();
}

void timer2callback(const ros::TimerEvent& event)
{
  /////////////配置planning_group///////////////

    // MoveIt 使用JointModelGroup储存机械臂的joints，被称为PLANNING_GROUP.在整个运动中"planning group"和"joint model group"可以互换使用
  // 在官方提供的UR5e配置文件将其定义为两个move_group:{manipulator,endeffector}
  static const std::string PLANNING_GROUP = "left_arm";
  // 通过 创建planning_interface:`MoveGroupInterface` 类的实例可以轻松连接、控制或者计划planning group
  moveit::planning_interface::MoveGroupInterface move_group(PLANNING_GROUP);
  // 通过 使用planning_scene_interface:`PlanningSceneInterface`类在virtual world添加或者移除障碍物
  moveit::planning_interface::PlanningSceneInterface planning_scene_interface;
  move_group.allowReplanning(true);//规划失败允许重新规划

  // 获取机械臂状态
  const robot_state::JointModelGroup* joint_model_group = move_group.getCurrentState()->getJointModelGroup(PLANNING_GROUP);
  
  // // 打印机器人参考坐标系的名称
  // ROS_INFO_NAMED("tutorial", "Planning frame: %s", move_group.getPlanningFrame().c_str());

  // // 打印机器人在group的末端链接的名称
  // ROS_INFO_NAMED("tutorial", "End effector link: %s", move_group.getEndEffectorLink().c_str());

  // // 我们可以得到机器人的所有groups
  // ROS_INFO_NAMED("tutorial", "Available Planning Groups:");
  // std::copy(move_group.getJointModelGroupNames().begin(), move_group.getJointModelGroupNames().end(),
  //           std::ostream_iterator<std::string>(std::cout, ", "));

  // 开始例程
  // visual_tools.prompt("Press 'next' in the RvizVisualToolsGui window to start the demo");

  // /////////////关节空间的运动规划///////////////

    // 关节空间的运动规划。这将取代我们上面设置的姿态目标。
  //首先，我们将创建一个引用当前机器人状态的指针。RobotState是包含所有当前位置/速度/加速度数据的对象。
  moveit::core::RobotStatePtr current_state = move_group.getCurrentState();

  // 接下来获取组的当前关节值集合。
  std::vector<double> joint_group_positions;
  current_state->copyJointGroupPositions(joint_model_group, joint_group_positions);

  // 现在，让我们修改其中一个关节，计划到新的关节空间目标并将计划可视化。
  joint_group_positions[0] = 1.;  // radians
  move_group.setJointValueTarget(joint_group_positions);
  move_group.setMaxVelocityScalingFactor(1);

  moveit::planning_interface::MoveGroupInterface::Plan my_plan;
  

  bool success = (move_group.plan(my_plan) == moveit::planning_interface::MoveItErrorCode::SUCCESS);
  ROS_INFO_NAMED("tutorial", "Visualizing plan 2 (joint space goal) %s", success ? "" : "FAILED");

  move_group.move();//发布运动规划

  // 让整个规划过程可视化
  // visual_tools.prompt("Press 'next' in the RvizVisualToolsGui window to continue the demo");

  // 现在，让我们修改其中一个关节，计划到新的关节空间目标并将计划可视化。
  joint_group_positions[0] = 0;  // radians
  move_group.setJointValueTarget(joint_group_positions);
  move_group.setMaxVelocityScalingFactor(1);

  success = (move_group.plan(my_plan) == moveit::planning_interface::MoveItErrorCode::SUCCESS);
  ROS_INFO_NAMED("tutorial", "Visualizing plan 2 (joint space goal) %s", success ? "" : "FAILED");

  move_group.move();//发布运动规划
}

int main(int argc, char** argv)
{
  ros::init(argc, argv, "move_group_interface_tutorial");
  ros::NodeHandle node_handle;
  // 在CPU中开启一个线程
  ros::AsyncSpinner spinner(2);
  spinner.start();

  ros::Timer timer1= node_handle.createTimer(ros::Duration(10),timer1callback);//定时器
  //ros::Timer timer2= node_handle.createTimer(ros::Duration(5),timer2callback);//定时器

  // moveit_visual_tools::MoveItVisualTools visual_tools("world");

  // // MoveItVisualTools包提供了很多在RVIZ下可用的可视化的物体、机器人和轨迹以及调试工具
  // visual_tools.deleteAllMarkers();
  // // 远程控制是一个在RVIZ通过按钮和键盘控制的工具
  // visual_tools.loadRemoteControl();

  // /////////////配置planning_group///////////////

  //   // MoveIt 使用JointModelGroup储存机械臂的joints，被称为PLANNING_GROUP.在整个运动中"planning group"和"joint model group"可以互换使用
  // // 在官方提供的UR5e配置文件将其定义为两个move_group:{manipulator,endeffector}
  // static const std::string PLANNING_GROUP = "left_arm";
  // // 通过 创建planning_interface:`MoveGroupInterface` 类的实例可以轻松连接、控制或者计划planning group
  // moveit::planning_interface::MoveGroupInterface move_group(PLANNING_GROUP);
  // // 通过 使用planning_scene_interface:`PlanningSceneInterface`类在virtual world添加或者移除障碍物
  // moveit::planning_interface::PlanningSceneInterface planning_scene_interface;
  // move_group.allowReplanning(true);//规划失败允许重新规划

  // // 获取机械臂状态
  // const robot_state::JointModelGroup* joint_model_group = move_group.getCurrentState()->getJointModelGroup(PLANNING_GROUP);
  
  // // // 打印机器人参考坐标系的名称
  // // ROS_INFO_NAMED("tutorial", "Planning frame: %s", move_group.getPlanningFrame().c_str());

  // // // 打印机器人在group的末端链接的名称
  // // ROS_INFO_NAMED("tutorial", "End effector link: %s", move_group.getEndEffectorLink().c_str());

  // // // 我们可以得到机器人的所有groups
  // // ROS_INFO_NAMED("tutorial", "Available Planning Groups:");
  // // std::copy(move_group.getJointModelGroupNames().begin(), move_group.getJointModelGroupNames().end(),
  // //           std::ostream_iterator<std::string>(std::cout, ", "));

  // // 开始例程
  // visual_tools.prompt("Press 'next' in the RvizVisualToolsGui window to start the demo");

  // // /////////////关节空间的运动规划///////////////

  //   // 关节空间的运动规划。这将取代我们上面设置的姿态目标。
  // //首先，我们将创建一个引用当前机器人状态的指针。RobotState是包含所有当前位置/速度/加速度数据的对象。
  // moveit::core::RobotStatePtr current_state = move_group.getCurrentState();

  // // 接下来获取组的当前关节值集合。
  // std::vector<double> joint_group_positions;
  // current_state->copyJointGroupPositions(joint_model_group, joint_group_positions);

  // // 现在，让我们修改其中一个关节，计划到新的关节空间目标并将计划可视化。
  // joint_group_positions[0] = 1.;  // radians
  // move_group.setJointValueTarget(joint_group_positions);
  // move_group.setMaxVelocityScalingFactor(1);

  // moveit::planning_interface::MoveGroupInterface::Plan my_plan;
  

  // bool success = (move_group.plan(my_plan) == moveit::planning_interface::MoveItErrorCode::SUCCESS);
  // ROS_INFO_NAMED("tutorial", "Visualizing plan 2 (joint space goal) %s", success ? "" : "FAILED");

  // move_group.move();//发布运动规划

  // // 让整个规划过程可视化
  // //visual_tools.prompt("Press 'next' in the RvizVisualToolsGui window to continue the demo");

  // // 现在，让我们修改其中一个关节，计划到新的关节空间目标并将计划可视化。
  // joint_group_positions[0] = 0;  // radians
  // move_group.setJointValueTarget(joint_group_positions);
  // move_group.setMaxVelocityScalingFactor(1);

  // success = (move_group.plan(my_plan) == moveit::planning_interface::MoveItErrorCode::SUCCESS);
  // ROS_INFO_NAMED("tutorial", "Visualizing plan 2 (joint space goal) %s", success ? "" : "FAILED");

  // move_group.move();//发布运动规划

  // // 让整个规划过程可视化
  // visual_tools.prompt("Press 'next' in the RvizVisualToolsGui window to continue the demo");

  ros::waitForShutdown();
  return 0;
}

