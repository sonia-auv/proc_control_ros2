
//
// File main.cpp
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 1.206
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Sat Jul 26 18:24:00 2025
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
