#include <ros/ros.h>
#include "TurtleDrawLetter.hpp"

// Constructor
TurtleDrawLetter::TurtleDrawLetter(TurtleControl *control) {
    turtleControl = control;  // Simpan referensi ke objek TurtleControl
}

// Menggambar huruf A
void TurtleDrawLetter::drawA() {
    turtleControl->penOn();
    turtleControl->rotate(1.0,1.3,false);
    turtleControl->move(1.0, 2.0,true);
    turtleControl->rotate(1.0,2.0,true);
    turtleControl->move(1.0, 2.0,true);
    turtleControl->rotate(1.0,1.0,false);
    turtleControl->penOff();
    turtleControl->move(1.0, 1.0,true);
}
void TurtleDrawLetter::drawB() {
    turtleControl->penOn();
    turtleControl->rotate(1.0,1.57, false);
    turtleControl->move(1.0, 2.0,true);
    turtleControl->rotate(1.0,1.57,true);
    turtleControl->move(1.0, 1.0,true);
    turtleControl->rotate(1.0,1.57,true);
    turtleControl->move(1.0, 1.0,true);
    turtleControl->rotate(1.0,1.57,true);
    turtleControl->move(1.0, 1.0,true);
    turtleControl->rotate(1.0,3.14159,false);
    turtleControl->move(1.0, 1.0,true);
    turtleControl->rotate(1.0,1.57,true);
    turtleControl->move(1.0,0.7,true);
    turtleControl->rotate(1.0,1.57,true);
    turtleControl->move(1.0, 1.0,true);
    turtleControl->rotate(1.0,3.14159,true);
    turtleControl->penOff();
    turtleControl->move(1.0, 1.0,true);
}

void TurtleDrawLetter::drawI(){
    turtleControl->penOn();
    turtleControl->rotate(1.0,1.57, false);
    turtleControl->move(1.0, 2.0,true);
    turtleControl->move(1.0, 2.0,false);
    turtleControl->rotate(1.0,1.57, true);
    turtleControl->penOff();
    turtleControl->move(1.0, 1.0,true);
}

void TurtleDrawLetter::drawL() {
    turtleControl->penOn();
    turtleControl->rotate(1.0,1.57, false);
    turtleControl->move(1.0, 2.0,true);
    turtleControl->move(1.0, 2.0,false);
    turtleControl->rotate(1.0,1.57, true);
    turtleControl->move(1.0, 1.0,true);
    turtleControl->penOff();
    turtleControl->move(1.0, 0.5,true);
}

void TurtleDrawLetter::drawR() {
    turtleControl->penOn();
    turtleControl->rotate(1.0,2.0, false);
    turtleControl->move(1.0, 2.0,true);
    turtleControl->rotate(1.0,1.57,true);
    turtleControl->move(1.0,1.0,true);
    turtleControl->rotate(1.0,1.57,true);
    turtleControl->move(1.0, 1.0,true);
    turtleControl->rotate(1.0,1.57,true);
    turtleControl->move(1.0, 1.0,true);
    turtleControl->rotate(1.0,2.35619,false);
    turtleControl->move(1.0, 1.0,true);
    turtleControl->rotate(1.0,0.785398,false);
    turtleControl->penOff();
    turtleControl->move(1.0, 1.0,true);
}

void TurtleDrawLetter::drawV() {
    turtleControl->move(1.0, 1.0,true);
    turtleControl->penOn();
    turtleControl->rotate(1.0,2.0,false);
    turtleControl->move(1.0, 2.0,true);
    turtleControl->move(1.0, 2.0,false);
    turtleControl->rotate(1.0,1.0,true);
    turtleControl->move(1.0, 2.0,true);
    turtleControl->move(1.0, 2.0,false);
    turtleControl->rotate(1.0,1.0,true);
    turtleControl->penOff();
    turtleControl->move(1.0, 1.5,true);
}