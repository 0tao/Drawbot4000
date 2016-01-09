#include <AFMotor.h>
int upperLimit = 1;
int lowerLimit = 400;
int L = 150; //initial left motor cord length
int R = 150; //initial right motor cord length
int stepSizeLimit = 30; //this is for the MediumStep function
int randoLength = 80; // this is the length of the long lateral lines when going up or down

// Stepper 200 steps per revolution (or change to 400 for interleave)
AF_Stepper LM(400, 2),RM(400,1);

void setup() {
  Serial.begin(38400);
  randomSeed(analogRead(0));// set up Serial library at 9600 bps
  delay(2000);
  LM.setSpeed(12);
  RM.setSpeed(12);
  delay(2000);
}

void loop() {
 //testBox();
/*
 int x = int(random(30000));  //rough and dirty way to get some very low percent chance of enacting the following code - nesting the chance within a chance
 if(x<4){
   int y = int(random(30000));
   if (y<4){
 MediumStep();
  LeftSideUpLineShapes();
 RightSideDownLineShapes();
 LeftSideDownLineShapes();
 RightSideUpLineShapes();
 DefaultSmallStep();
// DefaultSmallStep();
 testBoundaries();
 }
 }
*/
 //int c2 = int(random(100));
 //if (c2<4){
//LeftSideUpLineShapes();
// RightSideDownLineShapes();
//LeftSideDownLineShapes();
// RightSideUpLineShapes();
// } else {
 //DefaultSmallStep();
 //}
 //DefaultSmallStep();
// testBoundaries();
}


