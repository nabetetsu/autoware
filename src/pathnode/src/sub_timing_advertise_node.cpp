#include "pathnode/sub_timing_advertise_node.hpp"

using pathnode::SubTimingAdvertiseNode;

SubTimingAdvertiseNode::SubTimingAdvertiseNode(
    const std::string & node_name,
    const rclcpp::NodeOptions & options):
    Node(node_name, options)
{
}

SubTimingAdvertiseNode::SubTimingAdvertiseNode(
    const std::string & node_name,
    const std::string & namespace_,
    const rclcpp::NodeOptions & options):
    Node(node_name, namespace_, options)
{
}

SubTimingAdvertiseNode::~SubTimingAdvertiseNode()
{
}
