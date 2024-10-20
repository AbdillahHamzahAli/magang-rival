#ifndef TURTLECONTROL_H
#define TURTLECONTROL_H

#include "ros/ros.h"
#include "geometry_msgs/Twist.h"
#include "turtlesim/TeleportAbsolute.h"
#include "turtlesim/SetPen.h"

class TurtleControl {
public:
    // Constructor
    TurtleControl(ros::NodeHandle *nh);

    // Method untuk menggerakkan maju atau mundur
    void move(double speed, double distance, bool isForward);

    // Method untuk rotasi dengan input dalam derajat
    void rotate(double ang_speed, double angle, bool cw);

    // Method untuk mengatur pen
    void penOff();
    void penOn();

    // Method untuk teleport turtle
    bool teleport(double x, double y, double theta);
    
private:
    ros::Publisher twist_pub;
    ros::ServiceClient pen_client;  // Service client untuk mengatur pen
    ros::ServiceClient teleport_service;  // Service client untuk teleport
};

#endif
