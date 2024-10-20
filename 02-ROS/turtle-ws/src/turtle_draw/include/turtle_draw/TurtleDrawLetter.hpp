#ifndef TURTLEDRAWLETTER_H
#define TURTLEDRAWLETTER_H

#include <ros/ros.h>
#include "TurtleControl.hpp"

class TurtleDrawLetter {
public:
    // Constructor dengan referensi ke TurtleControl
    TurtleDrawLetter(TurtleControl *control);

    // Method untuk menggambar huruf A
    void drawA();
    void drawB();
    void drawI();
    void drawL();
    void drawR();
    void drawV();

    // Method untuk menggambar huruf B, C, dst. bisa ditambahkan sesuai kebutuhan

private:
    TurtleControl *turtleControl;  // Referensi ke objek TurtleControl
};

#endif
