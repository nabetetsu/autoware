// Copyright 2021 Research Institute of Systems Planning, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <gtest/gtest.h>

#include "tilde/stee_node.hpp"

#include "sensor_msgs/msg/point_cloud2.hpp"

using tilde::SteeNode;
using sensor_msgs::msg::PointCloud2;

class TestSteeNode : public ::testing::Test
{
public:
  void SetUp() override
  {
    rclcpp::init(0, nullptr);
  }

  void TearDown() override
  {
    rclcpp::shutdown();
  }
};

TEST_F(TestSteeNode, stee_publisher_allocation) {
  rclcpp::NodeOptions options;
  options.append_parameter_override("use_sim_time", true);
  auto main_node = std::make_shared<SteeNode>("stee_node", options);
  auto stee_pub = main_node->create_stee_publisher<PointCloud2>("topic", 1);

  SUCCEED();
}
