# Install script for directory: /home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/lu/ros_catkin/ros_webots/catkin_nao/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/webots_drive/msg" TYPE FILE FILES
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/msg/BoolStamped.msg"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/msg/ContactPoint.msg"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/msg/Float64Stamped.msg"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/msg/Int32Stamped.msg"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/msg/Int8Stamped.msg"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/msg/RadarTarget.msg"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/msg/RecognitionObject.msg"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/msg/StringStamped.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/webots_drive/srv" TYPE FILE FILES
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/camera_get_focus_info.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/camera_get_info.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/camera_get_zoom_info.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/display_draw_line.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/display_draw_oval.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/display_draw_pixel.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/display_draw_polygon.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/display_draw_rectangle.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/display_draw_text.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/display_get_info.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/display_image_copy.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/display_image_delete.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/display_image_load.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/display_image_new.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/display_image_paste.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/display_image_save.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/display_set_font.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/field_disable_sf_tracking.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/field_enable_sf_tracking.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/field_get_bool.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/field_get_color.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/field_get_count.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/field_get_float.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/field_get_int32.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/field_get_name.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/field_get_node.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/field_get_rotation.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/field_get_string.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/field_get_type.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/field_get_vec2f.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/field_get_vec3f.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/field_import_node_from_string.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/field_remove_node.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/field_remove.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/field_set_bool.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/field_set_color.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/field_set_float.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/field_set_int32.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/field_set_rotation.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/field_set_string.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/field_set_vec2f.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/field_set_vec3f.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/get_bool.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/get_float_array.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/get_float.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/get_int.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/get_string.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/get_uint64.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/get_urdf.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/gps_decimal_degrees_to_degrees_minutes_seconds.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/lidar_get_frequency_info.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/lidar_get_info.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/lidar_get_layer_point_cloud.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/lidar_get_layer_range_image.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/motor_set_control_pid.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/mouse_get_state.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/node_add_force_or_torque.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/node_add_force_with_offset.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/node_disable_contact_points_tracking.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/node_disable_pose_tracking.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/node_enable_contact_points_tracking.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/node_enable_pose_tracking.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/node_get_center_of_mass.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/node_get_field.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/node_get_id.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/node_get_name.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/node_get_orientation.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/node_get_parent_node.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/node_get_position.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/node_get_static_balance.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/node_get_status.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/node_get_type.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/node_get_velocity.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/node_remove.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/node_reset_functions.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/node_move_viewpoint.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/node_set_visibility.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/node_set_velocity.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/pen_set_ink_color.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/range_finder_get_info.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/receiver_get_emitter_direction.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/robot_get_device_list.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/robot_set_mode.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/robot_wait_for_user_input_event.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/save_image.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/set_bool.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/set_float.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/set_float_array.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/set_int.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/set_string.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/skin_get_bone_name.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/skin_get_bone_orientation.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/skin_get_bone_position.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/skin_set_bone_orientation.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/skin_set_bone_position.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/speaker_is_sound_playing.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/speaker_speak.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/speaker_play_sound.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/supervisor_get_from_def.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/supervisor_get_from_id.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/supervisor_get_from_string.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/supervisor_movie_start_recording.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/supervisor_set_label.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/supervisor_virtual_reality_headset_get_orientation.srv"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/srv/supervisor_virtual_reality_headset_get_position.srv"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/webots_drive/cmake" TYPE FILE FILES "/home/lu/ros_catkin/ros_webots/catkin_nao/build/webots_drive/catkin_generated/installspace/webots_drive-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/lu/ros_catkin/ros_webots/catkin_nao/devel/include/webots_drive")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/lu/ros_catkin/ros_webots/catkin_nao/devel/share/roseus/ros/webots_drive")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/lu/ros_catkin/ros_webots/catkin_nao/devel/share/common-lisp/ros/webots_drive")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/lu/ros_catkin/ros_webots/catkin_nao/devel/share/gennodejs/ros/webots_drive")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/home/lu/ros_catkin/ros_webots/catkin_nao/devel/lib/python3/dist-packages/webots_drive")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/home/lu/ros_catkin/ros_webots/catkin_nao/devel/lib/python3/dist-packages/webots_drive")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/lu/ros_catkin/ros_webots/catkin_nao/build/webots_drive/catkin_generated/installspace/webots_drive.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/webots_drive/cmake" TYPE FILE FILES "/home/lu/ros_catkin/ros_webots/catkin_nao/build/webots_drive/catkin_generated/installspace/webots_drive-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/webots_drive/cmake" TYPE FILE FILES
    "/home/lu/ros_catkin/ros_webots/catkin_nao/build/webots_drive/catkin_generated/installspace/webots_driveConfig.cmake"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/build/webots_drive/catkin_generated/installspace/webots_driveConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/webots_drive" TYPE FILE FILES "/home/lu/ros_catkin/ros_webots/catkin_nao/src/webots_drive/package.xml")
endif()

