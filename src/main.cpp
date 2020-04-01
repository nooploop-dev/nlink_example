#include <nlink_parser/LinktrackTagframe0.h>
#include <ros/ros.h>

void exampleCallback(const nlink_parser::LinktrackTagframe0 &msg) {
  ROS_INFO("msg LinktrackTagframe0 received,systemTime: %d", msg.systemTime);
}

int main(int argc, char **argv) {
  ros::init(argc, argv, "linktrack_example");
  ros::NodeHandle nh;

  ros::Subscriber sub =
      nh.subscribe("nlink_linktrack_tagframe0", 1000, exampleCallback);

  ros::spin();

  return 0;
}
