#ifndef BALL_H
#define BALL_H

#include <string>

class ball {
private:
    std::string colour;
    double xPos, yPos, xVel, yVel, xAcel, yAxcel, mass, radius, xForce, yForce;
    static int numOfBalls;

public:
    ball(); // Default constructor
    void updateBall(double xPos, double yPos, double xVel, double yVel, double xAcel, double yAcel, double mass, double radius);

    double getXVel();
    double getYVel();
    double getXPos();
};

#endif
