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
    void drawC();
    void drawD();
    void drawE();
    void drawF();
    void drawG();
    void drawH();
    void drawI();
    void drawJ();
    void drawK();
    void drawL();
    void drawM();
    void drawN();
    void drawO();
    void drawP();
    void drawQ();
    void drawR();
    void drawS();
    void drawT();
    void drawU();
    void drawV();
    void drawW();
    void drawX();
    void drawY();
    void drawZ();

    // Method untuk menggambar huruf B, C, dst. bisa ditambahkan sesuai kebutuhan

private:
    TurtleControl *turtleControl;  // Referensi ke objek TurtleControl
};

#endif
