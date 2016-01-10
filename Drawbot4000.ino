#include <AFMotor.h>
#include <NewPing.h>

#define TRIGGER_PIN  A4  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN     A5  // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE 200 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.

int ledPin = 14;  

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // NewPing setup of pins and maximum distance.

int upperLimit = 1;
int lowerLimit = 2000;
int L = 1000; //initial left motor cord length
int R = 1000; //initial right motor cord length
int stepSizeLimit = 30; //this is for the MediumStep function
int randoLength = 30; // this is the length of the long lateral lines when going up or down
int lineGap = 20; //small gap separating the longer lines
// Stepper 200 steps per revolution (or change to 400 for interleave)
AF_Stepper LM(400, 2),RM(400,1);

void setup() {
  Serial.begin(38400);
  randomSeed(analogRead(0));// set up Serial library at 9600 bps
  delay(2000);
  LM.setSpeed(3);
  RM.setSpeed(3);
  delay(2000);
  RM.step(1, BACKWARD, INTERLEAVE);
  LM.step(1, BACKWARD, INTERLEAVE);
  
pinMode(ledPin, OUTPUT);  
}

void loop() {
   delay(50);                     // Wait 50ms between pings (about 20 pings/sec). 29ms should be the shortest delay between pings.
  Serial.print("Ping: ");
  Serial.print(sonar.ping_cm()); // Send ping, get distance in cm and print result (0 = outside set distance range)
  Serial.println("cm");
  while(sonar.ping_cm() < 10){
    digitalWrite(ledPin, LOW); 
    LM.setSpeed(0);
  RM.setSpeed(0);
  
  }
  while(sonar.ping_cm() >10){
    digitalWrite(ledPin, HIGH); 
 LM.setSpeed(4);
  RM.setSpeed(4);
  }
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
  
  //testBoundaries();
  
}



