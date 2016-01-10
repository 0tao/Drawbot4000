#include <AFMotor.h>
int upperLimit = 1;
int lowerLimit = 2500;
int L = 2499; //initial left motor cord length
int R = 2499; //initial right motor cord length
int stepSizeLimit = 30; //this is for the MediumStep function
int randoLength = 30; // this is the length of the long lateral lines when going up or down
int lineGap = 20; //small gap separating the longer lines
// Stepper 200 steps per revolution (or change to 400 for interleave)
AF_Stepper LM(400, 2),RM(400,1);

void setup() {
  Serial.begin(38400);
  randomSeed(analogRead(0));// set up Serial library at 9600 bps
  delay(2000);
  LM.setSpeed(6);
  RM.setSpeed(6);
  delay(2000);
  RM.step(1, BACKWARD, INTERLEAVE);
  LM.step(1, BACKWARD, INTERLEAVE);
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
  int randoChoice = int(random(100));
  if (randoChoice<4){
    randoLength = 500;
  }
  else{
    randoLength = 50;
  }
  
  
  int lineGapChoice = int(random(100));
  if (lineGapChoice<12){
  lineGap = int(random(70,150));
  
 // } else if (lineGapChoice <25){
  //  lineGap = ;
 } else {
    lineGap = 5;
  }

  //int c2 = int(random(10000));
  //if (c2<4){
  LeftSideUpLineShapes();
 testBoundaries();
  RightSideDownLineShapes();
  testBoundaries();
  LeftSideDownLineShapes();
  testBoundaries();
  RightSideUpLineShapes();
  testBoundaries();
  // } else {
  // DefaultSmallStep();
  // }
  //DefaultSmallStep();
  // testBoundaries();
}



