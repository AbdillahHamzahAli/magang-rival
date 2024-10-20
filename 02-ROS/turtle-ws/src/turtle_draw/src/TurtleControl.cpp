#include "TurtleControl.hpp"


const double PI = 3.141592;

TurtleControl::TurtleControl(ros::NodeHandle *nh) {
    twist_pub = nh->advertise<geometry_msgs::Twist>("/turtle1/cmd_vel", 1000);
    pen_client = nh->serviceClient<turtlesim::SetPen>("/turtle1/set_pen");
    teleport_service = nh->serviceClient<turtlesim::TeleportAbsolute>("/turtle1/teleport_absolute");
}

void TurtleControl::move(double speed, double distance, bool isForward){
	geometry_msgs::Twist twist;

	if(isForward)
		twist.linear.x = fabs(speed);
	else
		twist.linear.x = -fabs(speed);

	double t0 = ros::Time::now().toSec();
	double current_dis = 0.0;
	
	ros::Rate loop_rate(100);
	do{
		twist_pub.publish(twist);
		double t1 = ros::Time::now().toSec();
		current_dis = speed * (t1 - t0);
		ros::spinOnce();
		loop_rate.sleep();
	}while(current_dis < distance);
	twist.linear.x = 0;

	ros::spinOnce();
    loop_rate.sleep();
	twist_pub.publish(twist);	
}

void TurtleControl::rotate(double ang_speed, double angle, bool cw){
	geometry_msgs::Twist twist;
	if(cw)
		twist.angular.z = -fabs(ang_speed);
	else
		twist.angular.z = fabs(ang_speed);
	
	double t0 = ros::Time::now().toSec();
	double current_ang = 0.0;

	ros::Rate loop_rate(100);
	do{
		twist_pub.publish(twist);
		double t1 = ros::Time::now().toSec();
		current_ang = ang_speed * (t1 - t0);
		ros::spinOnce();
		loop_rate.sleep();
	}while(current_ang < angle);

	twist.angular.z = 0.0;
	twist_pub.publish(twist);
}

void TurtleControl::penOff() {
    turtlesim::SetPen srv;
    srv.request.r = 0;    // Warna merah
    srv.request.g = 0;    // Warna hijau
    srv.request.b = 0;    // Warna biru
    srv.request.width = 1;  // Ketebalan garis
    srv.request.off = 1;    // 1 untuk mematikan jejak

    if (pen_client.call(srv)) {
        ROS_INFO("Pen turned off");
    } else {
        ROS_ERROR("Failed to turn off pen");
    }
}

void TurtleControl::penOn() {
    turtlesim::SetPen srv;
    srv.request.r = 255;  // Atur ke warna yang diinginkan (misalnya merah)
    srv.request.g = 255;
    srv.request.b = 255;
    srv.request.width = 3;  // Ketebalan garis
    srv.request.off = 0;    // 0 untuk menyalakan jejak

    if (pen_client.call(srv)) {
        ROS_INFO("Pen turned on");
    } else {
        ROS_ERROR("Failed to turn on pen");
    }
}


// Fungsi untuk teleport turtle
bool TurtleControl::teleport(double x, double y, double theta) {
    turtlesim::TeleportAbsolute srv;
    srv.request.x = x;
    srv.request.y = y;
    srv.request.theta = theta;  // Sudut dalam radian

    // Panggil layanan teleport
    if (teleport_service.call(srv)) {
        return true;  // Teleport berhasil
    } else {
        return false;  // Teleport gagal
    }
}


