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
void TurtleDrawLetter::drawC(){
    turtleControl->penOn();
    turtleControl->move(1.0, 1.0,true);
    turtleControl->move(1.0, 1.0,false);
    turtleControl->rotate(1.0,1.57, false);
    turtleControl->move(1.0, 1.5,true);
    turtleControl->rotate(1.0,1.57, true);
    turtleControl->move(1.0, 1.0,true);
    turtleControl->penOff();
    turtleControl->rotate(1.0,1.57, true);
    turtleControl->move(1.0, 1.5,true);
    turtleControl->rotate(1.0,1.57, false);
    turtleControl->move(1.0, 1.0,true);
}
void TurtleDrawLetter::drawD(){
    turtleControl->penOn();
    turtleControl->move(1.0, 1.3,true);
    turtleControl->rotate(1.0,1.57, false);
    turtleControl->move(1.0, 1.8,true);
    turtleControl->move(1.0,0.8, false);
    turtleControl->rotate(1.0,1.57, false);
    turtleControl->move(1.0, 1.0,true);
    turtleControl->rotate(1.0,1.57, false);
    turtleControl->move(1.0, 1.0,true);
    turtleControl->rotate(1.0,1.57, false);
    turtleControl->penOff();
    turtleControl->move(1.0, 1.5,true);
}
void TurtleDrawLetter::drawE(){
    turtleControl->penOn();
    turtleControl->rotate(1.0,1.57, false);
    turtleControl->move(1.0, 1.8,true);
    turtleControl->rotate(1.0,1.57, true);
    turtleControl->move(1.0, 0.9,true);
    turtleControl->rotate(1.0,1.57, true);
    turtleControl->move(1.0, 0.9,true);
    turtleControl->rotate(1.0,1.57, true);
    turtleControl->move(1.0, 0.9,true);
    turtleControl->rotate(1.0,1.57, false);
    turtleControl->move(1.0, 0.9,true);
    turtleControl->rotate(1.0,1.57, false);
    turtleControl->move(1.0, 0.9,true);
    turtleControl->penOff();
    turtleControl->move(1.0, 0.9,true);
}
void TurtleDrawLetter::drawF(){
    turtleControl->penOn();
    turtleControl->rotate(1.0,1.57, false);
    turtleControl->move(1.0, 1.8,true);
    turtleControl->rotate(1.0,1.57, true);
    turtleControl->move(1.0, 0.9,true);
    turtleControl->rotate(1.0,1.57, true);
    turtleControl->penOff();
    turtleControl->move(1.0, 0.9,true);
    turtleControl->rotate(1.0,1.57, true);
    turtleControl->penOn();
    turtleControl->move(1.0, 0.9,true);
    turtleControl->rotate(1.0,1.57, false);
    turtleControl->penOff();
    turtleControl->move(1.0, 0.9,true);
    turtleControl->rotate(1.0,1.57, false);
    turtleControl->move(1.0, 0.9,true);
}
void TurtleDrawLetter::drawG(){
    turtleControl->penOn();
    turtleControl->move(1.0,0.9,true);
    turtleControl->rotate(1.0,1.57, false);
    turtleControl->move(1.0, 1.8,true);
    turtleControl->rotate(1.0,1.57, false);
    turtleControl->move(1.0, 0.9,true);
    turtleControl->rotate(1.0,1.57, false);
    turtleControl->move(1.0, 0.9,true);
    turtleControl->rotate(1.0,1.57, false);
    turtleControl->move(1.0, 0.9,true);
    turtleControl->penOff();
    turtleControl->rotate(1.0,1.57, true);
    turtleControl->move(1.0, 0.9,true);
    turtleControl->rotate(1.0,1.57, false);
    turtleControl->move(1.0, 0.9,true);
}
void TurtleDrawLetter::drawH(){
    turtleControl->penOn();
    turtleControl->rotate(1.0,1.57, false);
    turtleControl->move(1.0, 1.8,true);
    turtleControl->move(1.0, 0.9,false);
    turtleControl->rotate(1.0,1.57, true);
    turtleControl->move(1.0, 0.9,true);
    turtleControl->rotate(1.0,1.57, true);
    turtleControl->move(1.0, 0.9,true);
    turtleControl->penOff();
    turtleControl->rotate(1.0,1.57, false);
    turtleControl->move(1.0, 0.9,true);
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

void TurtleDrawLetter::drawJ(){
    turtleControl->penOn();
    turtleControl->move(1.0, 0.9,true);
    turtleControl->rotate(1.0,1.57, false);
    turtleControl->move(1.0, 1.5,true);
    turtleControl->penOff();
    turtleControl->move(1.0, 1.5,false);
    turtleControl->rotate(1.0,1.57, true);
    turtleControl->move(1.0, 1.0,true);
}

void TurtleDrawLetter::drawK(){
    turtleControl->penOn();
    turtleControl->rotate(1.0,1.57, false);
    turtleControl->move(1.0, 1.8,true);
    turtleControl->move(1.0, 1.0,false);
    turtleControl->rotate(1.0,0.785398, true);
    turtleControl->move(1.0, 0.9,true);
    turtleControl->move(1.0, 0.9,false);
    turtleControl->rotate(1.0,1.57, true);
    turtleControl->move(1.0, 0.9,true);
    turtleControl->rotate(1.0,0.785398, false);  
    turtleControl->penOff();
    turtleControl->move(1.0, 0.5,true);
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

void TurtleDrawLetter::drawM(){
    turtleControl->penOn();
    turtleControl->rotate(1.0,1.57, false);
    turtleControl->move(1.0, 1.8,true);
    turtleControl->rotate(1.0,2.35619, true);
    turtleControl->move(1.0, 0.8,true);
    turtleControl->rotate(1.0,1.57, false);
    turtleControl->move(1.0, 0.8,true);
    turtleControl->rotate(1.0,2.35619, true);
    turtleControl->move(1.0, 1.8,true);
    turtleControl->penOff();
    turtleControl->rotate(1.0,1.57, false);
    turtleControl->move(1.0, 0.8,true);
}

void TurtleDrawLetter::drawN(){
    turtleControl->penOn();
    turtleControl->rotate(1.0,1.57, false);
    turtleControl->move(1.0, 1.8,true);
    turtleControl->rotate(1.0,2.35619, true);
    turtleControl->move(1.0, 1.8,true);
    turtleControl->rotate(1.0,2.35619, false);
    turtleControl->move(1.0, 1.8,true);
    turtleControl->move(1.0, 1.8,false);
    turtleControl->rotate(1.0,1.57, true);
    turtleControl->penOff();
    turtleControl->move(1.0, 1.0,true);
}

void TurtleDrawLetter::drawO(){
    turtleControl->move(1.0, 1.0,true);
    turtleControl->penOn();
    for(int i = 0; i < 60; i++){
        turtleControl->move(1.0, 0.1,true);
        turtleControl->rotate(1.0,0.1, false);
    }
    turtleControl->penOff();
    turtleControl->move(1.0, 0.8,true);
}

void TurtleDrawLetter::drawP(){
    turtleControl->penOn();
    turtleControl->rotate(1.0,1.57, false);
    turtleControl->move(1.0, 1.8,true);
    turtleControl->rotate(1.0,1.57, true);
    turtleControl->move(1.0, 0.9,true);
    turtleControl->rotate(1.0,1.57, true);
    turtleControl->move(1.0, 0.9,true);
    turtleControl->rotate(1.0,1.57, true);
    turtleControl->move(1.0, 0.9,true);
    turtleControl->rotate(1.0,1.57, false);
    turtleControl->penOff();
    turtleControl->move(1.0, 0.9,true);
    turtleControl->rotate(1.0,1.57, false);
    turtleControl->move(1.0, 1.5,true);
}


void TurtleDrawLetter::drawQ(){
    turtleControl->penOn();
    for(int i = 0; i < 65; i++){
        turtleControl->move(1.0, 0.1,true);
        turtleControl->rotate(1.0,0.1, false);
    }
    turtleControl->rotate(1.0,1.57, false);
    turtleControl->move(1.0, 0.5,true);
    turtleControl->move(1.0, 1.0,false);
    turtleControl->penOff();
    turtleControl->rotate(1.0,2.35619, true);
    turtleControl->move(1.0, 1.0,true);
}

void TurtleDrawLetter::drawR() {
    turtleControl->penOn();
    turtleControl->rotate(1.0,1.57, false);
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

void TurtleDrawLetter::drawS(){
    turtleControl->penOn();
    turtleControl->move(1.0, 1.2,true);
    turtleControl->rotate(1.0,1.57,false);
    turtleControl->move(1.0, 0.9,true);
    turtleControl->rotate(1.0,1.57,false);
    turtleControl->move(1.0, 0.9,true);
    turtleControl->rotate(1.0,1.57,true);
    turtleControl->move(1.0, 0.9,true);
    turtleControl->rotate(1.0,1.57,true);
    turtleControl->move(1.0, 0.9,true);
    turtleControl->rotate(1.0,1.57,true);
    turtleControl->penOff();
    turtleControl->move(1.0, 1.8,true);
    turtleControl->rotate(1.0,1.57,false);
    turtleControl->move(1.0, 1.0,true);

}

void TurtleDrawLetter::drawT(){
    turtleControl->move(1.0, 1.0,true);
    turtleControl->penOn();
    turtleControl->rotate(1.0,1.57,false);
    turtleControl->move(1.0, 1.8,true);
    turtleControl->rotate(1.0,1.57,false);
    turtleControl->move(1.0, 0.9,true);
    turtleControl->move(1.0, 1.8,false);
    turtleControl->rotate(1.0,1.57,false);
    turtleControl->penOff();
    turtleControl->move(1.0, 1.8,true);
    turtleControl->rotate(1.0,1.57,false);
    turtleControl->move(1.0, 1.0,true);
}

void TurtleDrawLetter::drawU(){
    turtleControl->penOn();
    turtleControl->rotate(1.0,1.57,false);
    turtleControl->move(1.0, 1.8,true);
    turtleControl->move(1.0, 1.8,false);
    turtleControl->rotate(1.0,1.57,true);
    turtleControl->move(1.0, 1.0,true);
    turtleControl->rotate(1.0,1.57,false);
    turtleControl->move(1.0, 1.8,true);
    turtleControl->move(1.0, 1.8,false);
    turtleControl->rotate(1.0,1.57,true);
    turtleControl->penOff();
    turtleControl->move(1.0, 0.5,true);
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

void TurtleDrawLetter::drawW(){
    turtleControl->penOn();
    turtleControl->rotate(1.0,1.57,false);
    turtleControl->move(1.0, 1.0,true);
    turtleControl->move(1.0, 1.0,false);
    turtleControl->rotate(1.0,0.785398,true);
    turtleControl->move(1.0, 1.0,true);
    turtleControl->rotate(1.0,1.57,true);
    turtleControl->move(1.0, 1.0,true);
    turtleControl->rotate(1.0,2.35619,false);
    turtleControl->move(1.0, 1.0,true);
    turtleControl->move(1.0, 1.0,false);
    turtleControl->penOff();
    turtleControl->rotate(1.0,1.57,true);
    turtleControl->move(1.0, 1.0,true);
}

void TurtleDrawLetter::drawX(){
    turtleControl->penOn();
    turtleControl->rotate(1.0,1.0472,false);
    turtleControl->move(1.0, 1.8,true);
    turtleControl->move(1.0, 0.9,false);
    turtleControl->rotate(1.0,1.57,false);
    turtleControl->move(1.0, 0.9,true);
    turtleControl->move(1.0, 1.8,false);
    turtleControl->rotate(1.0,2.2,true);
    turtleControl->penOff();
    turtleControl->move(1.0, 1.0,true);
}

void TurtleDrawLetter::drawY(){
    turtleControl->move(1.0, 1.0,true);
    turtleControl->penOn();
    turtleControl->rotate(1.0,1.57,false);
    turtleControl->move(1.0, 0.9,true);
    turtleControl->rotate(1.0,0.785398,false);
    turtleControl->move(1.0, 0.9,true);
    turtleControl->move(1.0, 0.9,false);
    turtleControl->rotate(1.0,1.57,true);
    turtleControl->move(1.0, 0.9,true);
    turtleControl->rotate(1.0,2.35619,true);
    turtleControl->penOff();
    turtleControl->move(1.0, 1.5,true);
    turtleControl->rotate(1.0,1.57,false);
    turtleControl->move(1.0, 1.0,true);
}

void TurtleDrawLetter::drawZ(){
    turtleControl->move(1.0, 1.0,true);
    turtleControl->penOn();
    turtleControl->move(1.0, 1.0,false);
    turtleControl->rotate(1.0,0.785398,false);
    turtleControl->move(1.0, 1.5,true);
    turtleControl->rotate(1.0,2.35619,false);
    turtleControl->move(1.0, 1.0,true);
    turtleControl->penOff();
    turtleControl->rotate(1.0,1.57,false);
    turtleControl->move(1.0, 1.3,true);
    turtleControl->rotate(1.0,1.57,false);
    turtleControl->move(1.0, 1.5,true);
}