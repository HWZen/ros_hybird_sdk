//
// Created by HWZen on 2022/12/12.
// Copyright (c) 2022 HWZen All rights reserved.
// MIT License
// 

#include "GenServerMsgBuildPackage.h"
#include <fstream>
#include <filesystem>
#include "../Config.h"

using namespace std::string_literals;

void GenServerMsgBuildPackage(const std::string &path)
{
    /*********************
     * Prepare files string
     ********************/

    auto CMakeLists_txt = R"(
# generated automatic by ros_hybrid_protoc in )"s + __DATE__ + "  "s + __TIME__ + R"(
cmake_minimum_required(VERSION 3.0.2)
project(ros_hybrid_dynamic_msgs)
find_package(Protobuf CONFIG REQUIRED)
find_package(catkin REQUIRED COMPONENTS
        actionlib
        actionlib_msgs
        dynamic_reconfigure
        message_runtime
        roscpp
        std_msgs
        ros_hybrid_sdk
        )
include_directories(./ ${catkin_INCLUDE_DIRS})
add_library(HybridOption SHARED HybridOption.pb.cc)
target_link_libraries(HybridOption PRIVATE  protobuf::libprotobuf)
target_compile_options(HybridOption PRIVATE -std=c++17 -fPIC )

)"s;

    auto package_xml =
R"(<?xml version="1.0"?>
<package format="2">
    <name>ros_hybrid_dynamic_msgs</name>
    <version>0.0.0</version>
    <description>The ros_hybrid_dynamic_msgs package</description>

    <maintainer email="ros_hybrid_sdk@todo.todo">hwz</maintainer>


    <!-- One license tag required, multiple allowed, one license per tag -->
    <!-- Commonly used license strings: -->
    <!--   BSD, MIT, Boost Software License, GPLv2, GPLv3, LGPLv2.1, LGPLv3 -->
    <license>TODO</license>


    <!-- Url tags are optional, but multiple are allowed, one per tag -->
    <!-- Optional attribute type can be: website, bugtracker, or repository -->
    <!-- Example: -->
    <!-- <url type="website">http://wiki.ros.org/ros_hybrid_sdk</url> -->


    <!-- Author tags are optional, multiple are allowed, one per tag -->
    <!-- Authors do not have to be maintainers, but could be -->
    <!-- Example: -->
    <!-- <author email="jane.doe@example.com">Jane Doe</author> -->


    <!-- The *depend tags are used to specify dependencies -->
    <!-- Dependencies can be catkin packages or system dependencies -->
    <!-- Examples: -->
    <!-- Use depend as a shortcut for packages that are both build and exec dependencies -->
    <!--   <depend>roscpp</depend> -->
    <!--   Note that this is equivalent to the following: -->
    <!--   <build_depend>roscpp</build_depend> -->
    <!--   <exec_depend>roscpp</exec_depend> -->
    <!-- Use build_depend for packages you need at compile time: -->
    <!--   <build_depend>message_generation</build_depend> -->
    <!-- Use build_export_depend for packages you need in order to build against this package: -->
    <!--   <build_export_depend>message_generation</build_export_depend> -->
    <!-- Use buildtool_depend for build tool packages: -->
    <!--   <buildtool_depend>catkin</buildtool_depend> -->
    <!-- Use exec_depend for packages you need at runtime: -->
    <!--   <exec_depend>message_runtime</exec_depend> -->
    <!-- Use test_depend for packages you need only for testing: -->
    <!--   <test_depend>gtest</test_depend> -->
    <!-- Use doc_depend for packages you need only for building documentation: -->
    <!--   <doc_depend>doxygen</doc_depend> -->
    <buildtool_depend>catkin</buildtool_depend>
    <build_depend>actionlib</build_depend>
    <build_depend>actionlib_msgs</build_depend>
    <build_depend>dynamic_reconfigure</build_depend>
    <build_depend>roscpp</build_depend>
    <build_depend>rospy</build_depend>
    <build_depend>std_msgs</build_depend>
    <build_depend>message_runtime</build_depend>
    <build_depend>ros_hybrid_sdk</build_depend>
    <build_export_depend>actionlib</build_export_depend>
    <build_export_depend>actionlib_msgs</build_export_depend>
    <build_export_depend>dynamic_reconfigure</build_export_depend>
    <build_export_depend>roscpp</build_export_depend>
    <build_export_depend>rospy</build_export_depend>
    <build_export_depend>std_msgs</build_export_depend>
    <build_export_depend>ros_hybrid_sdk</build_export_depend>
    <exec_depend>actionlib</exec_depend>
    <exec_depend>actionlib_msgs</exec_depend>
    <exec_depend>dynamic_reconfigure</exec_depend>
    <exec_depend>message_runtime</exec_depend>
    <exec_depend>roscpp</exec_depend>
    <exec_depend>rospy</exec_depend>
    <exec_depend>std_msgs</exec_depend>
    <exec_depend>ros_hybrid_sdk</exec_depend>

    <!-- The export tag contains other, unspecified, tags -->
    <export>
        <!-- Other tools can request additional information be placed here -->

    </export>
</package>

)"s;

    auto HybridOption_proto = R"(
// generated by ros_hybrid_protoc in )"s + __DATE__ + "  "s + __TIME__ + R"(
syntax = "proto3";
import "google/protobuf/descriptor.proto";
package hybrid;

extend google.protobuf.FieldOptions {
  uint64 array_size = 50000;
}

extend google.protobuf.FieldOptions{
  int64 data_range_min = 50001;
  int64 data_range_max = 50002;
}
)"s;

    auto serverDll_map = R"(
{
global:
  make_publisher;
  make_subscriber;
local: *;
};
)"s;

    auto interface_h = R"(
//
// Created by HWZen on 2022/12/13.
// Copyright (c) 2022 HWZen All rights reserved.
// MIT License
//

#ifndef ROS_HYBRID_DYNAMIC_MSGS_INTERFACE_H
#define ROS_HYBRID_DYNAMIC_MSGS_INTERFACE_H

#include <string>
#include <functional>

namespace hybrid
{
    class MsgPublisher
    {
    public:
        MsgPublisher(const std::string &topic, uint32_t queue_size, bool latch = false) {};

        virtual void publish(const std::string &msg) = 0;

        virtual ~MsgPublisher() = default;


    };

    class MsgSubscriber
    {
    public:
        MsgSubscriber(const std::string &topic, uint32_t queue_size,
                      const std::function<void(std::string)> &callback) {};

        virtual ~MsgSubscriber() = default;


    };
}

#endif //ROS_HYBRID_DYNAMIC_MSGS_INTERFACE_H

)"s;

    /*********************
     * release files
     ********************/
    // mkdir
    std::filesystem::create_directory(path);

    // CMakeLists.txt
    std::ofstream CMakeLists_txt_file(path + "/CMakeLists.txt");
    CMakeLists_txt_file << CMakeLists_txt;
    CMakeLists_txt_file.close();

    // package.xml
    std::ofstream package_xml_file(path + "/package.xml");
    package_xml_file << package_xml;
    package_xml_file.close();

    // HybridOption.proto
    std::ofstream HybridOption_proto_file(path + "/HybridOption.proto");
    HybridOption_proto_file << HybridOption_proto;
    HybridOption_proto_file.close();

    // serverDll.map
    std::ofstream serverDll_map_file(path + "/serverDll.map");
    serverDll_map_file << serverDll_map;
    serverDll_map_file.close();

    // interface.h
    std::ofstream interface_h_file(path + "/interface.h");
    interface_h_file << interface_h;
    interface_h_file.close();

    /**********************
     * build HybridOption.proto
     **********************/
    std::string cmd =  g_config.protocPath +  " -I=" + path +  " --cpp_out=" + path +  "  HybridOption.proto";
    ::system(cmd.c_str());
}
