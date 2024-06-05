#include <iostream>
#include "ball.h"

int ball::numOfBalls=0;

//funnctions
ball createNewBall();



int main() {
    ball balls[10];
    for(int i =0; i<10;i++){
        balls[i]=createNewBall();
    }
    return 0;
}



ball createNewBall(){
    ball tempBall(0, 0, 0, 0, 0, 0, 1, 1);
    return tempBall;
}