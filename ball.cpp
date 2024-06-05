#include "ball.h"

int ball::numOfBalls = 0;

ball::ball() {
    // Initialize member variables to some default values
    xPos = 0;
    yPos = 0;
    xVel = 0;
    yVel = 0;
    xAcel = 0;
    yAxcel = 0;
    mass = 0;
    radius = 0;
    numOfBalls++;
}

// Corrected declaration and definition of updateBall function
void ball::updateBall(double xPos, double yPos, double xVel, double yVel, double xAcel, double yAcel, double mass, double radius) {
    this->xPos = xPos;
    this->yPos = yPos;
    this->xVel = xVel;
    this->yVel = yVel;
    this->xAcel = xAcel;
    this->yAxcel = yAcel;
    this->mass = mass;
    this->radius = radius;
    // No need to increment numOfBalls here; updateBall is not creating a new ball object
}

double ball::getXVel() {
    return xVel;
}

double ball::getYVel() {
    return yVel;
}

double ball::getXPos() {
    return xPos;
}
