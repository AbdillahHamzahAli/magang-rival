#include "ros/ros.h"
#include "../include/turtle_draw/TurtleControl.hpp"
#include "TurtleDrawLetter.hpp"
#include <map>
#include <functional>
#include <cctype>

int main(int argc, char **argv) {
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


    TurtleDrawLetter drawLetter(&turtle);
    std::map<std::string, std::function<void()>> drawMap;

    drawMap["A"] = std::bind(&TurtleDrawLetter::drawA, &drawLetter);
    drawMap["B"] = std::bind(&TurtleDrawLetter::drawB, &drawLetter);
    drawMap["C"] = std::bind(&TurtleDrawLetter::drawC, &drawLetter);
    drawMap["D"] = std::bind(&TurtleDrawLetter::drawD, &drawLetter);
    drawMap["E"] = std::bind(&TurtleDrawLetter::drawE, &drawLetter);
    drawMap["F"] = std::bind(&TurtleDrawLetter::drawF, &drawLetter);
    drawMap["G"] = std::bind(&TurtleDrawLetter::drawG, &drawLetter);
    drawMap["H"] = std::bind(&TurtleDrawLetter::drawH, &drawLetter);
    drawMap["I"] = std::bind(&TurtleDrawLetter::drawI, &drawLetter);
    drawMap["J"] = std::bind(&TurtleDrawLetter::drawJ, &drawLetter);
    drawMap["K"] = std::bind(&TurtleDrawLetter::drawK, &drawLetter);
    drawMap["L"] = std::bind(&TurtleDrawLetter::drawL, &drawLetter);
    drawMap["M"] = std::bind(&TurtleDrawLetter::drawM, &drawLetter);
    drawMap["N"] = std::bind(&TurtleDrawLetter::drawN, &drawLetter);
    drawMap["O"] = std::bind(&TurtleDrawLetter::drawO, &drawLetter);
    drawMap["P"] = std::bind(&TurtleDrawLetter::drawP, &drawLetter);
    drawMap["Q"] = std::bind(&TurtleDrawLetter::drawQ, &drawLetter);
    drawMap["R"] = std::bind(&TurtleDrawLetter::drawR, &drawLetter);
    drawMap["S"] = std::bind(&TurtleDrawLetter::drawS, &drawLetter);
    drawMap["T"] = std::bind(&TurtleDrawLetter::drawT, &drawLetter);
    drawMap["U"] = std::bind(&TurtleDrawLetter::drawU, &drawLetter);
    drawMap["V"] = std::bind(&TurtleDrawLetter::drawV, &drawLetter);
    drawMap["W"] = std::bind(&TurtleDrawLetter::drawW, &drawLetter);
    drawMap["X"] = std::bind(&TurtleDrawLetter::drawX, &drawLetter);
    drawMap["Y"] = std::bind(&TurtleDrawLetter::drawY, &drawLetter);
    drawMap["Z"] = std::bind(&TurtleDrawLetter::drawZ, &drawLetter);

    std::string input;
    std::cout << "Masukkan huruf yang ingin digambar(max = 5)(dalam uppercase): ";
    std::cin >> input;
    
    for(int i = 0; i < input.size(); i++){
        char str = toupper(input.substr(i,1));
        drawMap[str]();
    }
    return 0;
}
