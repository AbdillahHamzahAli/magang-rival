#ifndef BULLET_HPP
#define BULLET_HPP

#include <opencv4/opencv2/opencv.hpp>

using namespace cv;

class Bullet {
public:
    Bullet(int startX, int startY, int radius, Point speed)
        : x(startX), y(startY), radius(radius), speedX(speed.x), speedY(speed.y) {}

    void update(int frameWidth, int frameHeight) {
        x += speedX;
        y += speedY;

        if (x < radius) {
            speedX = -speedX;
            x = radius;
        } else if (x > frameWidth - radius) {
            speedX = -speedX;
            x = frameWidth - radius;
        }

        if (y < radius) {
            speedY = -speedY;
            y = radius;
        } else if (y > frameHeight - radius) {
            speedY = -speedY;
            y = frameHeight - radius;
        }
    }

    void draw(Mat& frame) {
        circle(frame, Point(x, y), radius, Scalar(255, 0, 0), -1);
    }

    Point getPosition() {
        return Point(x, y);
    }

private:
    int x; 
    int y; 
    int radius; 
    int speedX; 
    int speedY; 
};

#endif