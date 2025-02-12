
//
// File main.cpp
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 1.178
// Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
// C/C++ source code generated on : Tue Feb 11 21:48:23 2025
//
#include "ros2nodeinterface.h"
rclcpp::Node::SharedPtr SLROSNodePtr;
namespace ros2 {
namespace matlab {
  std::shared_ptr<ros2::matlab::NodeInterface> gMatlabNodeIntr;
  std::shared_ptr<ros2::matlab::NodeInterface> getNodeInterface() {
    return gMatlabNodeIntr;
  }
} //namespace matlab
} //namespace ros2
int main(int argc, char* argv[]) {
    ros2::matlab::gMatlabNodeIntr = std::make_shared<ros2::matlab::NodeInterface>();
    ros2::matlab::gMatlabNodeIntr->initialize(argc, argv);
    auto ret = ros2::matlab::gMatlabNodeIntr->run();
    ros2::matlab::gMatlabNodeIntr->terminate();
    ros2::matlab::gMatlabNodeIntr.reset();
    return ret;
}
