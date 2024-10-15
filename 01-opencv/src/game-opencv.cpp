#include <opencv4/opencv2/opencv.hpp>
#include <iostream>
#include <math.h>
#include <cstdlib> // untuk rand() dan srand()
#include <ctime>   // untuk time()
#include "../lib/bullet.hpp"

using namespace std;
using namespace cv;


Point randomPosition(int width, int height) {
    int x = rand() % width;
    int y = rand() % height;
    return Point(x, y);
}


Point randomSpeed() {
    int speedX = (rand() % 5) + 1;
    int speedY = (rand() % 5) + 1;
    if (rand() % 2 == 0) speedX = -speedX;
    if (rand() % 2 == 0) speedY = -speedY;
    return Point(speedX, speedY);
}

int main() {
    VideoCapture kamera(0);
    if (!kamera.isOpened()) {
        cerr << "tidak bisa membuka" << endl;
        return -1;
    }

    Mat frame;
    int initial_score = 0;
    int bulletSize = 20;
    int height = kamera.get(CAP_PROP_FRAME_HEIGHT);
    int width = kamera.get(CAP_PROP_FRAME_WIDTH);
    // cout << "WIDTH : " << width << endl;
    // cout << "HEIGHT : " << height << endl;

    // spawn bullet first time
    Bullet bullet(randomPosition(width, height).x, randomPosition(width, height).y, bulletSize, randomSpeed());
    
    while (true) {
        kamera >> frame;

        // score
        string score = "Score = " + to_string(initial_score);
        putText(frame, score, Point(10, 100), FONT_HERSHEY_DUPLEX, 1.0, CV_RGB(0, 255, 0), 1);

        Mat hsv, lim_color;

        // convert to hsv
        cvtColor(frame, hsv, COLOR_BGR2HSV);

        // detect red color
        inRange(hsv, Scalar(0, 159, 116), Scalar(179, 255, 168), lim_color);

        vector<vector<Point>> kontur;
        findContours(lim_color, kontur, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);

        Point2f circleCenter;
        float radius;
        bool circleActive = false;

        // draw circle
        for (size_t i = 0; i < kontur.size(); i++) {
            Moments m = moments(kontur[i]);
            minEnclosingCircle(kontur[i], circleCenter, radius);

            // cout << "Koordinat merah: (" << circleCenter.x << ", " << circleCenter.y << ")" << endl;
            circle(frame, circleCenter, (int)radius, Scalar(0, 255, 0), 2);
            circleActive = true;
        }

        // draw bullet
        bullet.update(width, height); // Pass height for boundary check
        bullet.draw(frame);

        // check if bullet in the circle
        if (circleActive) {
            Point bulletPosition = bullet.getPosition();
            // d = sqrt((x-h)^2 + (y-k)^2)
            double distanceSquared = sqrt(pow((bulletPosition.x - circleCenter.x), 2) + pow((bulletPosition.y - circleCenter.y), 2)); 
            if (distanceSquared < radius) {
                initial_score++;
                // cout << "Score: " << initial_score << endl;

                // reset bullet
                bullet = Bullet(randomPosition(width, height).x, randomPosition(width, height).y, bulletSize, randomSpeed());
            }
        }

        imshow("kamera", frame);
        if (waitKey(30) == 32) { 
            break;
        }
    }

    return 0;
}