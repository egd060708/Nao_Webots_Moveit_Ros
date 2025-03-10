cmake_minimum_required(VERSION 3.0.2)
project(webots_drive)

## Compile as C++11, supported in ROS Kinetic and newer
# add_compile_options(-std=c++11)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  geometry_msgs
  message_generation
  message_runtime
  roscpp
  rospy
  sensor_msgs
  std_msgs
  tf
  actionlib
  actionlib_msgs
  moveit_msgs
  moveit_ros_planning_interface
  moveit_visual_tools
)

## System dependencies are found with CMake's conventions
# find_package(Boost REQUIRED COMPONENTS system)


## Uncomment this if the package has a setup.py. This macro ensures
## modules and global scripts declared therein get installed
## See http://ros.org/doc/api/catkin/html/user_guide/setup_dot_py.html
# catkin_python_setup()

################################################
## Declare ROS messages, services and actions ##
################################################

## To declare and build messages, services or actions from within this
## package, follow these steps:
## * Let MSG_DEP_SET be the set of packages whose message types you use in
##   your messages/services/actions (e.g. std_msgs, actionlib_msgs, ...).
## * In the file package.xml:
##   * add a build_depend tag for "message_generation"
##   * add a build_depend and a exec_depend tag for each package in MSG_DEP_SET
##   * If MSG_DEP_SET isn't empty the following dependency has been pulled in
##     but can be declared for certainty nonetheless:
##     * add a exec_depend tag for "message_runtime"
## * In this file (CMakeLists.txt):
##   * add "message_generation" and every package in MSG_DEP_SET to
##     find_package(catkin REQUIRED COMPONENTS ...)
##   * add "message_runtime" and every package in MSG_DEP_SET to
##     catkin_package(CATKIN_DEPENDS ...)
##   * uncomment the add_*_files sections below as needed
##     and list every .msg/.srv/.action file to be processed
##   * uncomment the generate_messages entry below
##   * add every package in MSG_DEP_SET to generate_messages(DEPENDENCIES ...)

## Generate messages in the 'msg' folder
add_message_files(
  FILES
  # 添加有关webots信息的文件
  BoolStamped.msg
  ContactPoint.msg
  Float64Stamped.msg
  Int32Stamped.msg
  Int8Stamped.msg
  RadarTarget.msg
  RecognitionObject.msg
  StringStamped.msg
)

## Generate services in the 'srv' folder
add_service_files(
  FILES
  # 添加相关服务
  camera_get_focus_info.srv
  camera_get_info.srv
  camera_get_zoom_info.srv
  display_draw_line.srv
  display_draw_oval.srv
  display_draw_pixel.srv
  display_draw_polygon.srv
  display_draw_rectangle.srv
  display_draw_text.srv
  display_get_info.srv
  display_image_copy.srv
  display_image_delete.srv
  display_image_load.srv
  display_image_new.srv
  display_image_paste.srv
  display_image_save.srv
  display_set_font.srv
  field_disable_sf_tracking.srv
  field_enable_sf_tracking.srv
  field_get_bool.srv
  field_get_color.srv
  field_get_count.srv
  field_get_float.srv
  field_get_int32.srv
  field_get_name.srv
  field_get_node.srv
  field_get_rotation.srv
  field_get_string.srv
  field_get_type.srv
  field_get_vec2f.srv
  field_get_vec3f.srv
  field_import_node_from_string.srv
  field_remove_node.srv
  field_remove.srv
  field_set_bool.srv
  field_set_color.srv
  field_set_float.srv
  field_set_int32.srv
  field_set_rotation.srv
  field_set_string.srv
  field_set_vec2f.srv
  field_set_vec3f.srv
  get_bool.srv
  get_float_array.srv
  get_float.srv
  get_int.srv
  get_string.srv
  get_uint64.srv
  get_urdf.srv
  gps_decimal_degrees_to_degrees_minutes_seconds.srv
  lidar_get_frequency_info.srv
  lidar_get_info.srv
  lidar_get_layer_point_cloud.srv
  lidar_get_layer_range_image.srv
  motor_set_control_pid.srv
  mouse_get_state.srv
  node_add_force_or_torque.srv
  node_add_force_with_offset.srv
  node_disable_contact_points_tracking.srv
  node_disable_pose_tracking.srv
  node_enable_contact_points_tracking.srv
  node_enable_pose_tracking.srv
  node_get_center_of_mass.srv
  node_get_field.srv
  node_get_id.srv
  node_get_name.srv
  node_get_orientation.srv
  node_get_parent_node.srv
  node_get_position.srv
  node_get_static_balance.srv
  node_get_status.srv
  node_get_type.srv
  node_get_velocity.srv
  node_remove.srv
  node_reset_functions.srv
  node_move_viewpoint.srv
  node_set_visibility.srv
  node_set_velocity.srv
  pen_set_ink_color.srv
  range_finder_get_info.srv
  receiver_get_emitter_direction.srv
  robot_get_device_list.srv
  robot_set_mode.srv
  robot_wait_for_user_input_event.srv
  save_image.srv
  set_bool.srv
  set_float.srv
  set_float_array.srv
  set_int.srv
  set_string.srv
  skin_get_bone_name.srv
  skin_get_bone_orientation.srv
  skin_get_bone_position.srv
  skin_set_bone_orientation.srv
  skin_set_bone_position.srv
  speaker_is_sound_playing.srv
  speaker_speak.srv
  speaker_play_sound.srv
  supervisor_get_from_def.srv
  supervisor_get_from_id.srv
  supervisor_get_from_string.srv
  supervisor_movie_start_recording.srv
  supervisor_set_label.srv
  supervisor_virtual_reality_headset_get_orientation.srv
  supervisor_virtual_reality_headset_get_position.srv
)

## Generate actions in the 'action' folder
# add_action_files(
#   FILES
#   Action1.action
#   Action2.action
# )

## Generate added messages and services with any dependencies listed here
generate_messages(
  DEPENDENCIES
  sensor_msgs
  std_msgs
  tf
  geometry_msgs
  actionlib_msgs
)

################################################
## Declare ROS dynamic reconfigure parameters ##
################################################

## To declare and build dynamic reconfigure parameters within this
## package, follow these steps:
## * In the file package.xml:
##   * add a build_depend and a exec_depend tag for "dynamic_reconfigure"
## * In this file (CMakeLists.txt):
##   * add "dynamic_reconfigure" to
##     find_package(catkin REQUIRED COMPONENTS ...)
##   * uncomment the "generate_dynamic_reconfigure_options" section below
##     and list every .cfg file to be processed

## Generate dynamic reconfigure parameters in the 'cfg' folder
# generate_dynamic_reconfigure_options(
#   cfg/DynReconf1.cfg
#   cfg/DynReconf2.cfg
# )

###################################
## catkin specific configuration ##
###################################
## The catkin_package macro generates cmake config files for your package
## Declare things to be passed to dependent projects
## INCLUDE_DIRS: uncomment this if your package contains header files
## LIBRARIES: libraries you create in this project that dependent projects also need
## CATKIN_DEPENDS: catkin_packages dependent projects also need
## DEPENDS: system dependencies of this project that dependent projects also need
catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES webots_demo
  CATKIN_DEPENDS roscpp rospy sensor_msgs std_msgs message_runtime tf geometry_msgs actionlib moveit_msgs actionlib_msgs moveit_msgs moveit_ros_planning_interface moveit_visual_tools
#  DEPENDS system_lib
)

###########
## Build ##
###########

## Specify additional locations of header files
## Your package locations should be listed before other locations
include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

# add_executable(motor_state_publisher_moveit src/motor_state_publisher_moveit.cpp)
# add_dependencies(motor_state_publisher_moveit webots_ros_generate_messages_cpp)
# target_link_libraries(motor_state_publisher_moveit  ${catkin_LIBRARIES})

# add_executable(trajectory_follower_moveit src/trajectory_follower_moveit.cpp)
# add_dependencies(trajectory_follower_moveit webots_ros_generate_messages_cpp)
# target_link_libraries(trajectory_follower_moveit  ${catkin_LIBRARIES})

# add_executable(moveit_planner src/moveit_planner.cpp)
# add_dependencies(moveit_planner webots_ros_generate_messages_cpp)
# target_link_libraries(moveit_planner  ${catkin_LIBRARIES})

# add_executable(moveit_planner1 src/moveit_planner1.cpp)
# add_dependencies(moveit_planner1 webots_ros_generate_messages_cpp)
# target_link_libraries(moveit_planner1  ${catkin_LIBRARIES})

# add_executable(file_test src/file_test.cpp)
# add_dependencies(file_test webots_ros_generate_messages_cpp)
# target_link_libraries(file_test  ${catkin_LIBRARIES})
# target_include_directories(file_test $(find webots_drive)/include/webots_drive/motion_file.hpp)


## Declare a C++ library
add_library(motion_file
  ./include/webots_drive/motion_file.hpp
  src/trajectory_follower.cpp
)

add_library(group_ctrl
  ./include/webots_drive/group_ctrl.hpp
  src/trajectory_follower.cpp
)
# #强制按照C++语言编译
# set_target_properties(motion_file PROPERTIES LINKER_LANGUAGE CXX)

## Declare a C++ executable
## With catkin_make all packages are built within a single CMake context
## The recommended prefix ensures that target names across packages don't collide
add_executable(motor_state_publisher_moveit src/motor_state_publisher_moveit.cpp)
add_executable(trajectory_follower_moveit src/trajectory_follower_moveit.cpp)
add_executable(moveit_planner src/moveit_planner.cpp)
add_executable(moveit_planner1 src/moveit_planner1.cpp)
add_executable(file_test src/file_test.cpp)
add_executable(trajectory_follower src/trajectory_follower.cpp)

## Add cmake target dependencies of the library
## as an example, code may need to be generated before libraries
## either from message generation or dynamic reconfigure
add_dependencies(motor_state_publisher_moveit webots_ros_generate_messages_cpp)
add_dependencies(trajectory_follower_moveit webots_ros_generate_messages_cpp)
add_dependencies(moveit_planner webots_ros_generate_messages_cpp)
add_dependencies(moveit_planner1 webots_ros_generate_messages_cpp)
add_dependencies(file_test webots_ros_generate_messages_cpp)
add_dependencies(motion_file ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
add_dependencies(group_ctrl ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
add_dependencies(trajectory_follower webots_ros_generate_messages_cpp)


## Rename C++ executable without prefix
## The above recommended prefix causes long target names, the following renames the
## target back to the shorter version for ease of user use
## e.g. "rosrun someones_pkg node" instead of "rosrun someones_pkg someones_pkg_node"
# set_target_properties(${PROJECT_NAME}_node PROPERTIES OUTPUT_NAME node PREFIX "")

## Add cmake target dependencies of the executable
## same as for the library above
# add_dependencies(${PROJECT_NAME}_node ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})

## Specify libraries to link a library or executable target against
target_link_libraries(motor_state_publisher_moveit
  ${catkin_LIBRARIES}
)

target_link_libraries(trajectory_follower_moveit
  ${catkin_LIBRARIES}
)

target_link_libraries(moveit_planner
  ${catkin_LIBRARIES}
)

target_link_libraries(moveit_planner1
  ${catkin_LIBRARIES}
)

target_link_libraries(file_test
  ${catkin_LIBRARIES}
)

target_link_libraries(motion_file
  ${catkin_LIBRARIES}
)

target_link_libraries(group_ctrl
  ${catkin_LIBRARIES}
)

target_link_libraries(trajectory_follower
  ${catkin_LIBRARIES}
)


#############
## Install ##
#############

# all install targets should use catkin DESTINATION variables
# See http://ros.org/doc/api/catkin/html/adv_user_guide/variables.html

## Mark executable scripts (Python etc.) for installation
## in contrast to setup.py, you can choose the destination
# catkin_install_python(PROGRAMS
#   scripts/my_python_script
#   DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
# )

## Mark executables for installation
## See http://docs.ros.org/melodic/api/catkin/html/howto/format1/building_executables.html
# install(TARGETS ${PROJECT_NAME}_node
#   RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
# )

## Mark libraries for installation
## See http://docs.ros.org/melodic/api/catkin/html/howto/format1/building_libraries.html
# install(TARGETS ${PROJECT_NAME}
#   ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
#   LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
#   RUNTIME DESTINATION ${CATKIN_GLOBAL_BIN_DESTINATION}
# )

## Mark cpp header files for installation
# install(DIRECTORY include/${PROJECT_NAME}/
#   DESTINATION ${CATKIN_PACKAGE_INCLUDE_DESTINATION}
#   FILES_MATCHING PATTERN "*.h"
#   PATTERN ".svn" EXCLUDE
# )

## Mark other files for installation (e.g. launch and bag files, etc.)
# install(FILES
#   # myfile1
#   # myfile2
#   DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
# )

#############
## Testing ##
#############

## Add gtest based cpp test target and link libraries
# catkin_add_gtest(${PROJECT_NAME}-test test/test_webots_drive.cpp)
# if(TARGET ${PROJECT_NAME}-test)
#   target_link_libraries(${PROJECT_NAME}-test ${PROJECT_NAME})
# endif()

## Add folders to be run by python nosetests
# catkin_add_nosetests(test)
