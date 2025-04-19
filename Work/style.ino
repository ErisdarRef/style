/*****************************************************************************/
/** @file       b;ink.ino
 *  @brief      Blink without Delay
 *  @details    Turns on/off the LED connected to a digital pin
 *
 *  @section    Purpose
 *      Without using the delay() function. This means that other code can 
 *      run at the same time without being interrupted by the LED code.
 *
 *  @author     Justin Reina, Firmware Engineer
 *  @created    4/19/25
 *  @last rev   4/19/25
 *
 *  @section    Opens
 *      none current
 *
 *  @section    The circuit
 *       - Use the onboard LED.
 *       - Note: Most Arduinos have an on-board LED you can control. On the
 *         UNO, MEGA and ZERO it is attached to digital pin 13, on MKR1000 on
 *         pin 6. LED_BUILTIN is set to the correct LED pin independent of 
 *         which board is used. If you want to know what pin the on-board LED
 *         is connected to on your Arduino model, check the Technical Specs of 
 *         your board at: https://www.arduino.cc/en/Main/Products
 *
 *  @note     Generally, you should use "unsigned long" for variables that 
 *            hold time
 *
 *  @section    Legal Disclaimer
 *      ©2025 Justin Reina, All rights reserved. All contents of this source 
 *      file and/or any other related source files are the explicit property 
 *      of Justin Reina. Do not distribute. Do not copy.
 *
 *  @section    Source
 *      This example code is in the public domain.
 *      https://www.arduino.cc/en/Tutorial/BuiltInExamples/BlinkWithoutDelay
 *
 *      created 2005
 *      by David A. Mellis
 *      modified 8 Feb 2010
 *      by Paul Stoffregen
 *      modified 11 Nov 2013
 *      by Scott Fitzgerald
 *      modified 9 Jan 2017
 *      by Arturo Guadalupi
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

// constants won't change. Used here to set a pin number:
const int ledPin = LED_BUILTIN;     // the number of the LED pin

// variables will change:
int ledState = LOW;                 // ledState used to set the LED

// the value will quickly become too large for an int to store
unsigned long previousMillis = 0;   // will store last time LED was updated

// constants won't change:
const long interval = 1000;         // interval at which to blink (ms)


//***************************************************************************//
//                             FUNCTION DECLARATIONS                         //
//***************************************************************************//


//***************************************************************************//
//                                PUBLIC FUNCTIONS                           //
//***************************************************************************//




/*****************************************************************************/
/** @fcn        void setup(void)
 *  @brief      Initialize the Arduino board for the loop() operations
 *  @details    x
 *
 *  @pre    Called once at start of program execution after power-up or reset
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
 *
 *  @section    Purpose
 *      Here is where you'd put code that needs to be running all the time
 *
 *  @section    Opens
 *      Update syntax & style
 *
 *  @section    Timing
 *      'Time to Blink' - that is, if the difference between the current 
 *                        and last time you blinked the LED is bigger than
 *                        the interval at which you want to blink the LED.
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
}


//***************************************************************************//
//                               PRIVATE FUNCTIONS                           //
//***************************************************************************//


