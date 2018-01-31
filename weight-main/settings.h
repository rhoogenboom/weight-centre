// SERIAL
// ------------------------------------------------------------------------------------------------------------------------------------------------>
    #define BaudRate                 38400          // Set baud rate here if you know what you're doing and don't like the default value



// DEBUGGING
// ------------------------------------------------------------------------------------------------------------------------------------------------>
    #define DEBUG                     true         // Set this to true to receive debugging messages out the serial port. NOTE: This will make the program less responsive, 
                                                    // so turn it off when you are done troubleshooting. 

// TIMEOUTs

const int oneSecond = 1000;
const long oneMinute = (60 * oneSecond);

const long intWatchdogTimeout = (30 * oneSecond);

const int truckArrivePin = 2;      // the number of the pushbutton pin for trucks arriving

const int truckArriveRed =  3;  // RED LED at entrance 
const int truckArriveGreen = 4;  // GREEN LED at entrance 


const int truckWeightWaitingRed = 5; // RED LED at weighting platform
const int truckWeightWaitingGreen = 6; // GREEN LED at weighting platform

const int weightSequenceTimeout = (10 * oneSecond);


