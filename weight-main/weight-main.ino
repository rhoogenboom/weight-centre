#include <SimpleTimer.h>
#include "settings.h"
#include <Servo.h>

Servo servo1; Servo servo2; 


SimpleTimer timer;

// time-out IDs
int watchdogTimer; //id of timer used to check if sequence is going forward
int truckDetectedSensor; //truck is present at the entrance

bool inWeightSequence; //indicator to know when a weighting sequence is running

void setup() {
  //setup debugging
  Serial.begin(BaudRate);  
  Serial.println(F("Begin setup..."));

  
  // initialize truck arriving sensor:
  pinMode(truckArrivePin, INPUT);

  //setup truck arriving lights
  // initialize the LED pin as an output:
  pinMode(truckArriveRed, OUTPUT);
  // initialize the LED pin as an output:
  pinMode(truckArriveGreen, OUTPUT);


  // initialize truck in weight area sensor:



  // initialize barriers

  pinMode(1,OUTPUT);
  servo1.attach(14); //analog pin 0
//  servo1.setMaximumPulse(2000);
//  servo1.setMinimumPulse(700);

  servo2.attach(15); //analog pin 1
//  servo2.setMaximumPulse(2000);
//  servo2.setMinimumPulse(700);
  

  //setup truck weighting lights


  // stop blinking all lights

  // close barriers

  // start blinking red on drivein light
}


// This procedure is called when the current event in the street takes too long/the next stage isn't triggered in time
void ResetWeightSequence() {
  Serial.println(F("Timeout - Weight sequence aborted..."));

  inWeightSequence = false;
  //print ERR on display

  //open barriers

  //start blinking lights
  
  //start buzzer

  //start StartupTimer(resetTimeout) - start a timeout after which we assume the track is cleared again

  initialLights();
}

void initializeAll() {
  //set entrance lights
  initialLights();

  //set weight lights


  //set LCD


  //set barriers


  //set variables
  
}

void loop() {
  timer.run();
  initialLights();
  // read the state of truck arrving sensor:
  truckDetectedSensor = digitalRead(truckArrivePin);

  if (truckDetectedSensor == HIGH) {
    inWeightSequence = true;
  }

  //check until drivein button in pressed
  if (inWeightSequence) {
    
    truckArrivedBarrierUp(); 
    //initialize weigh sequence timeout
    watchdogTimer = timer.setTimeout(weightSequenceTimeout, ResetWeightSequence);

    Serial.println(F("Truck detected..."));
    
    //start new weight sequence
    while (inWeightSequence) {
      timer.run();
      Serial.print(F("Weight sequence running... timeout after (sec)"));
      Serial.println(weightSequenceTimeout);
    
      //reset scale
      
      //start watchdog timer to reset street when next event doesnt start.

      //stop blinking red drivein light

      //open barrier

      //start green drivein light

      //check until weightin button in pressed
          //stop green drivin light
          
          //start blinking red drivein light

          //start average measurement

          //display weight on LED

          //open weightin barrier

          //start green drivein light

          //check untill driveout button in pressed
              //start timer for closing barrier

              //close weightin barrier

              //start blinking red drivein light

              //disable watchdog timer

      delay(2 * oneSecond);
    }
  }

  Serial.println(F("No truck present (main loop)"));
  delay(2 * oneSecond);
}


