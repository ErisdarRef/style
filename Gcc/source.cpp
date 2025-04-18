/**************************************************************************************************/
/** @file       source.cpp
 *  @brief      x
 *  @details    x
 *
 *  @author     Justin Reina, Firmware Engineer
 *  @created    4/6/25
 *  @last rev   4/13/25
 *
 *  @note   Private functions & variables are declared static
 *
 *  @section    Opens
 *      validate with test content
 *
 *  @section    Legal Disclaimer
 *      �2025 Justin Reina. All rights reserved. All contents of this source file and/or any other
 *      related source files are the explicit property of Justin Reina. Do not distribute.
 *      Do not copy.
 */
/**************************************************************************************************/

//************************************************************************************************//
//                                            INCLUDES                                            //
//************************************************************************************************//

//Standard Library Includes
#include <cstdlib>
#include <iostream>

//Library Includes

//BSP Includes

//Project Includes


//************************************************************************************************//
//                                        DEFINITIONS & TYPES                                     //
//************************************************************************************************//

//-----------------------------------------  Definitions -----------------------------------------//


//-------------------------------------------- Macros --------------------------------------------//


//----------------------------------------- Enumerations -----------------------------------------//


//------------------------------------------- Typedefs -------------------------------------------//


//************************************************************************************************//
//                                            VARIABLES                                           //
//************************************************************************************************//


//************************************************************************************************//
//                                       FUNCTION DECLARATIONS                                    //
//************************************************************************************************//
using namespace std;

/**************************************************************************************************/
/** @fcn        class MyPeripheral
 *  @brief      x
 *  @details    x
 *
 *  @section    Opens
 *      Expand header with further sections
 */
/**************************************************************************************************/
class MyPeripheral {

//************************************************************************************************//
//                                        PUBLIC COMPONENTS                                       //
//************************************************************************************************//
public:
	int width;
	int length;
	int height;


    /**********************************************************************************************/
    /** @fcn        MyPeripheral(void)
     *  @brief      Default constructor
     *  @details    x
     */
    /**********************************************************************************************/
	MyPeripheral(void) {

		this->width  = 0;
		this->length = 0;
		this->height = 0;

		return;
	}

    /**********************************************************************************************/
    /** @fcn        MyPeripheral(void)
     *  @brief      Custom constructor
     *  @details    x
     */
    /**********************************************************************************************/
	// Initialize a Box with custom dimensions
	MyPeripheral(int width, int length, int height) {

		this->width  = width;
		this->length = length;
		this->height = height;

		return;
	}

    /**********************************************************************************************/
    /** @fcn        void init(void)
     *  @brief      x
     *  @details    x
     *
     *  @param    [in]  name    descrip
     *
     *  @return   (type) descrip
     *
     *  @pre    x
     *  @post   x
     */
    /**********************************************************************************************/
    void init(void) {


        //Notify
        printf("Initializing peripheral...\n");

        return;
    }


    /**********************************************************************************************/
    /** @fcn        void init(void)
     *  @brief      x
     *  @details    x
     *
     *  @param    [in]  name    descrip
     *
     *  @return   (type) descrip
     *
     *  @pre    x
     *  @post   x
     */
    /**********************************************************************************************/
    int readData(void) {

        // Read data from the peripheral

        // Demo
        printf("Reading data from peripheral...");

        return 42;                                  /* Example data                               */
    }


    /**********************************************************************************************/
    /** @fcn        void init(void)
     *  @brief      x
     *  @details    x
     *
     *  @param    [in]  name    descrip
     *
     *  @return   (type) descrip
     *
     *  @pre    x
     *  @post   x
     */
    /**********************************************************************************************/
    void writeData(int data) {

        // Write data to the peripheral

        // Replace this with actual hardware write
        printf("Writing data to peripheral: %d\n", data);

        return;
    }

//************************************************************************************************//
//                                        PRIVATE COMPONENTS                                      //
//************************************************************************************************//
private:

    /**********************************************************************************************/
    /** @fcn        static void source_log(char *msg, int val)
     *  @brief      Record content to source log utilities
     *  @details    x
     *
     *  @param    [in] (char *) msg - x
     *  @param    [in] (int) val - x
     *
     *  @pre   	System.initialize()
     *  @post   x
     */
    /**********************************************************************************************/
    static void source_log(char *msg, int val) {

        // Write data to the peripheral

        // Replace this with actual hardware write
        printf("Writing data to peripheral: %d\n", val);

        return;
    }
};

