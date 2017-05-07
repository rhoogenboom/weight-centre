#include <SimpleTimer.h>

#include "settings.h"
#include "configuration.h"

SimpleTimer timer;


void setup() {
  Serial.begin(BaudRate);  

  Serial.println(F("Begin setup..."));
  // stop blinking all lights

  // close barriers

  // start blinking red on drivein light
}


// This procedure is called when the current event in the street takes too long/the next stage isn't triggered in time
void ResetWeightSequence() {
  //disable watchdog timer
  timer.disable(watchdogTimer);


  //print ERR on display

  //open barriers

  //start blinking lights

  //wait for period
  
  //start buzzer

  // stop blinking, beeping and close barriers
}


void loop() {
  Serial.println(F("In main loop..."));
  //check until drivein button in pressed
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

    delay(10 * oneSecond);
}


