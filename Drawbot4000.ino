#include <AFMotor.h>
#include <NewPing.h>

#define TRIGGER_PIN  A4  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN     A5  // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE 300 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.

int ledPin = 14;  //define the pin that the LED is on
int motorSpeed = 4;  //the speed of the motors  (6-7 is about the max speed with a weight  - 2-3 max without weight)
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // NewPing setup of pins and maximum distance.

int upperLimit = 1;  //the top of the drawing space
int lowerLimit = 1300; //the bottom centre of the drawing space
int L = 1299; // Left motor string length - within the defined space above
int R = 1299; // Right Motor string length - within the defined space above


///////// the variables beow control how the lines are drawn

int stepSizeLimit = 30; //this is for the MediumStep function - currently not used
int randoLength; // this is the max length of the long lateral lines when going up or down
int lineGap; // max 'large gap' between dense lines
// Stepper 200 steps per revolution (or change to 400 for interleave)
AF_Stepper LM(400, 2),RM(400,1);



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void setup() {
  Serial.begin(38400);
  randomSeed(analogRead(0));// set up Serial library at 9600 bps
  delay(2000);
  LM.setSpeed(motorSpeed); //initiate left motor speed
  RM.setSpeed(motorSpeed); //initiate right motor speed
  delay(2000);
  RM.step(1, BACKWARD, INTERLEAVE); //engage right motor
  LM.step(1, BACKWARD, INTERLEAVE); //engage left motor
  pinMode(ledPin, OUTPUT);  
  delay(4000);  //wait 4 seconds, then start the bot going
}



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void loop() {
  
  
  /*
  ////////////////////////////////////////////SENSOR INPUT//////////////////////////////////////////////////////////////////////////////////////
  delay(50);                     // Wait 50ms between pings (about 20 pings/sec). 29ms should be the shortest delay between pings.
  Serial.print("Ping: ");
  Serial.print(sonar.ping_cm()); // Send ping, get distance in cm and print result (0 = outside set distance range)
  Serial.println("cm");
  while(sonar.ping_cm() <10){  //while the sensor is reading 'not much' set the motor speed to 0 and the LED to off.
    digitalWrite(ledPin, LOW); 
    LM.setSpeed(0);
    RM.setSpeed(0);

  }
  while(sonar.ping_cm() >10){ //while the sensor is reading HIGH, set motors moving and turn on the LED
    digitalWrite(ledPin, HIGH); 
    LM.setSpeed(4);
    RM.setSpeed(4);
  }

  */
  


/////////////////////////////////////////////////////CHOOSE DRAWING STYLE BASED ON LINE LENGTH AND LINE GAP VARIABLES //////////////////////////////////////////////////////////////////////////////////////////
  int randoChoice = int(random(100));  // this defines how long the long back and forth lines are
  if (randoChoice<4){
    randoLength = 500;
  }
  else{
    randoLength = 30;
  }


  int lineGapChoice = int(random(100));  // this defines the amound of gap separating the long back and forth lines
  if (lineGapChoice<6){
    lineGap = int(random(100));
  } 
  else {
    lineGap = 5;
  }
  
  ////////////////////////////////////////////////////////////MOVE THE BOT WHILE TESTING BOUNDARIES////////////////////////////////////////////////////////////////////////////////// 
  LeftSideUpLineShapes();
  RightSideDownLineShapes();
  LeftSideDownLineShapes();
  RightSideUpLineShapes();
  
 
  //testBoundaries();
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
}




