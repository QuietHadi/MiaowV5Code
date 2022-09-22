#ifndef VARIABLES_H
#define VARIABLES_H
#include <vex.h>

//input
extern vex::competition Competition;
extern vex::controller master;
extern vex::brain Brain;

//drive
extern vex::motor driveBackRight;
extern vex::motor driveMiddleRight;
extern vex::motor driveFrontRight;

extern vex::motor driveBackLeft;
extern vex::motor driveMiddleLeft;
extern vex::motor driveFrontLeft;

//misc
extern vex::motor intakeAndRoller;

extern vex::motor cata;

#endif