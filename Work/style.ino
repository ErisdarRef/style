/*****************************************************************************/
/** @file       x
 *  @brief      x
 *  @details    x
 *
 *  @section    Purpose
 *      x
 *
 *  @author     Justin Reina, Firmware Engineer
 *  @created    4/19/25
 *  @last rev   4/19/25
 *
 *  @section    Hardware Description
 *		x
 *
 *  @section    Opens
 *      none current
 *
 *  @section    Legal Disclaimer
 *      ©2025 Justin Reina, All rights reserved. All contents of this source 
 *      file and/or any other related source files are the explicit property 
 *      of Justin Reina. Do not distribute. Do not copy.
 *
 *  @note   Sharing style in style observed at arduino.cc
 */
/*****************************************************************************/

//***************************************************************************//
//                                  INCLUDES                                 //
//***************************************************************************//

//Standard Library Includes

//Library Includes

//BSP Includes

//Project Includes


//***************************************************************************//
//                              DEFINITIONS & TYPES                          //
//***************************************************************************//

//-------------------------------  Definitions ------------------------------//


//---------------------------------- Macros ---------------------------------//


//------------------------------- Enumerations ------------------------------//


//--------------------------------- Typedefs --------------------------------//


//***************************************************************************//
//                                  VARIABLES                                //
//***************************************************************************//

//Pins
const int ledPin = LED_BUILTIN;     /* the number of the LED pin			 */

//State
int ledState = LOW;                 /* ledState used to set the LED			 */

//TIme
unsigned long previousMillis = 0;   /* will store last time LED was updated  */

//Duration
const long interval = 1000;         /* interval at which to blink (ms)		 */


//***************************************************************************//
//                             FUNCTION DECLARATIONS                         //
//***************************************************************************//


//***************************************************************************//
//                                PUBLIC FUNCTIONS                           //
//***************************************************************************//




/*****************************************************************************/
/** @fcn        void setup(void)
 *  @brief      Initialize the Arduino board for loop() operations
 *  @details    x
 *
 *  @pre    Called at start of program execution after power-up or reset
 *  @post   Main program begins
 */
/*****************************************************************************/
void setup(void) {

  //Locals
  
  
  //------------------------------- Initialize ------------------------------//


  //--------------------------------- Operate -------------------------------//

  // set the digital pin as output:
  pinMode(ledPin, OUTPUT);

  return;
}


/*****************************************************************************/
/** @fcn        void loop(void)
 *  @brief      Repeatedly executing code within a program
 *  @details    Responding to changes that  actively control the board
 */
/*****************************************************************************/
void loop(void) {

  //Locals
  unsigned long currentMillis = millis();     /* current time stamp          */


  //------------------------------- Initialize ------------------------------//
  
  
  //--------------------------------- Operate -------------------------------//

  // check to see if it's time to blink the LED;
  if(currentMillis - previousMillis >= interval) {
    
    // save the last time you blinked the LED
    previousMillis = currentMillis;

    // if the LED is off turn it on and vice-versa:
    ledState = (ledState == LOW) ? HIGH:LOW;

    // set the LED with the ledState of the variable:
    digitalWrite(ledPin, ledState);

    return;
  }
  
  return;
}


//***************************************************************************//
//                               PRIVATE FUNCTIONS                           //
//***************************************************************************//


