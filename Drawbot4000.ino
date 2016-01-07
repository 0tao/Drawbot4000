#include <AFMotor.h>
int upperLimit = 1;
int lowerLimit = 2500;
int L = lowerLimit; //initial left motor cord length
int R = lowerLimit; //initial right motor cord length
int stepSizeLimit = 500;

// Stepper 200 steps per revolution (or change to 400 for interleave)
AF_Stepper LM(400, 2),RM(400,1);

void setup() {
  Serial.begin(38400);
  randomSeed(analogRead(0));// set up Serial library at 9600 bps
  delay(2000);
  LM.setSpeed(5);
  RM.setSpeed(5);
  delay(2000);
}

void loop() {
 //testBox();

 int x = int(random(30000));
 if(x<4){
 MediumStep();
 DefaultSmallStep();
 DefaultSmallStep();
 DefaultSmallStep();
 DefaultSmallStep();
 DefaultSmallStep();
 DefaultSmallStep();
 DefaultSmallStep();
 DefaultSmallStep();
 DefaultSmallStep();
 DefaultSmallStep();
 testBoundaries();
 MediumStep();
 DefaultSmallStep();
 testBoundaries();
 MediumStep();
 DefaultSmallStep();
 testBoundaries();
 }
 
 DefaultSmallStep();
 testBoundaries();
}


