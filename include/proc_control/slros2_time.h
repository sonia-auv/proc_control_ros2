/* Copyright 2022-2025 The MathWorks, Inc. */

#ifndef _SLROS2_TIME_H_
#define _SLROS2_TIME_H_

#include "rclcpp/rclcpp.hpp"
#include <builtin_interfaces/msg/time.hpp>

#ifndef _SL_ROS2_CONTROL_PLUGIN_
// Use shared pointer for standard/component node generation
extern rclcpp::Node::SharedPtr SLROSNodePtr;
#endif

#ifdef _SL_ROS2_CONTROL_PLUGIN_
#include "rclcpp_lifecycle/lifecycle_node.hpp"
// Use lifecycle node for ROS 2 control plugin generation
extern rclcpp_lifecycle::LifecycleNode::SharedPtr SLROSNodePtr;
#endif


/**
 * Retrieve the current ROS2 time and return the information in a message bus.
 *
 * @param busPtr[out] Simulink bus structure that should be populated with time
 */
template <class BusType>
inline void currentROS2TimeBus(BusType* busPtr) {
    builtin_interfaces::msg::Time currentTime = SLROSNodePtr->now();
    convertToBus(busPtr,currentTime);
}

/**
 * Retrieve the current ROS 2 time and return as a double.
 * This method is separate from @currentROS2TimeBus, since it has a completely
 * different signature.
 *
 * @return Current time as double-precision value (in seconds)
 */
inline void currentROS2TimeDouble(double* timePtr) {
    builtin_interfaces::msg::Time currentTime = SLROSNodePtr->now();
    *timePtr = double(currentTime.sec) + double(currentTime.nanosec)/1e9;
    
}

#endif
