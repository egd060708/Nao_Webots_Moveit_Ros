# Install script for directory: /home/lu/ros_catkin/ros_webots/catkin_nao/src/nao_robot/nao_apps

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
  include("/home/lu/ros_catkin/ros_webots/catkin_nao/build/nao_robot/nao_apps/catkin_generated/safe_execute_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/lu/ros_catkin/ros_webots/catkin_nao/build/nao_robot/nao_apps/catkin_generated/installspace/nao_apps.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/nao_apps/cmake" TYPE FILE FILES
    "/home/lu/ros_catkin/ros_webots/catkin_nao/build/nao_robot/nao_apps/catkin_generated/installspace/nao_appsConfig.cmake"
    "/home/lu/ros_catkin/ros_webots/catkin_nao/build/nao_robot/nao_apps/catkin_generated/installspace/nao_appsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/nao_apps" TYPE FILE FILES "/home/lu/ros_catkin/ros_webots/catkin_nao/src/nao_robot/nao_apps/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/nao_apps" TYPE PROGRAM FILES "/home/lu/ros_catkin/ros_webots/catkin_nao/build/nao_robot/nao_apps/catkin_generated/installspace/nao_alife.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/nao_apps" TYPE PROGRAM FILES "/home/lu/ros_catkin/ros_webots/catkin_nao/build/nao_robot/nao_apps/catkin_generated/installspace/nao_behaviors.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/nao_apps" TYPE PROGRAM FILES "/home/lu/ros_catkin/ros_webots/catkin_nao/build/nao_robot/nao_apps/catkin_generated/installspace/nao_diagnostic_updater.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/nao_apps" TYPE PROGRAM FILES "/home/lu/ros_catkin/ros_webots/catkin_nao/build/nao_robot/nao_apps/catkin_generated/installspace/nao_footsteps.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/nao_apps" TYPE PROGRAM FILES "/home/lu/ros_catkin/ros_webots/catkin_nao/build/nao_robot/nao_apps/catkin_generated/installspace/nao_leds.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/nao_apps" TYPE PROGRAM FILES "/home/lu/ros_catkin/ros_webots/catkin_nao/build/nao_robot/nao_apps/catkin_generated/installspace/nao_speech.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/nao_apps" TYPE PROGRAM FILES "/home/lu/ros_catkin/ros_webots/catkin_nao/build/nao_robot/nao_apps/catkin_generated/installspace/nao_tactile.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/nao_apps" TYPE PROGRAM FILES "/home/lu/ros_catkin/ros_webots/catkin_nao/build/nao_robot/nao_apps/catkin_generated/installspace/nao_walker.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/nao_apps" TYPE DIRECTORY FILES "/home/lu/ros_catkin/ros_webots/catkin_nao/src/nao_robot/nao_apps/launch")
endif()

