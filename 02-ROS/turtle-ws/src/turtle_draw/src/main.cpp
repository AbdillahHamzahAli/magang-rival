#include "ros/ros.h"
#include "../include/turtle_draw/TurtleControl.hpp"
#include "TurtleDrawLetter.hpp"


int main(int argc, char **argv) {
    // Inisialisasi node ROS
    ros::init(argc, argv, "main");
    ros::NodeHandle nh;

    // Membuat objek TurtleControl
    TurtleControl turtle(&nh);

    turtle.penOff();
    if (turtle.teleport(2.0, 1.0, 0.5)) {
        ROS_INFO("Turtle teleported to (1, 1)");
    } else {
        ROS_ERROR("Failed to teleport turtle");
    }
    // turtle.penOn();


    // Membuat objek TurtleDrawLetter
    TurtleDrawLetter drawLetter(&turtle);
    drawLetter.drawR();
    drawLetter.drawI();
    drawLetter.drawV();
    drawLetter.drawA();
    drawLetter.drawL();
    // drawLetter.drawB();

    return 0;
}
