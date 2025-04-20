/**************************************************************************************************/
/** @file     main.cpp
 *  @brief    Style content inspect & validate
 *  @details  x
 *
 *  @section    Opens
 *      - Update compiler include path to relative (Gcc is absolute now; tricky!)
 *      - Source shared naming (e.g. source.c with source.cpp)
 *      - C++ integration
 */
/**************************************************************************************************/

//************************************************************************************************//
//                                            INCLUDES                                            //
//************************************************************************************************//

//Standard Library Includes
#include <iostream>
#include <cstring>

//Project Includes
#include "style.h"
#include "source.h"
#include "main.h"


//************************************************************************************************//
//                                       FUNCTION DECLARATIONS                                    //
//************************************************************************************************//
using namespace std;

/**************************************************************************************************/
/** @fcn        int main(void)
 *  @brief      x
 *  @details    x
 *
 *  @return   (int) exit status
 */
/**************************************************************************************************/
int main(void) {

    int c_var;
    int cpp_var[2];
    Source src;

    //Initialize
    c_var = 0;
    memset(&cpp_var, 0, sizeof(cpp_var));
    src = Source (1, 2, 3);


    //----------------------------------------- Style.h ------------------------------------------//
    printf("The number is: %d\n\n", EXAMPLE_DEF_ONE);


    //---------------------------------------- Source.c&h ----------------------------------------//
    c_var = source_routine();

    printf("source_routine(): %d\n\n", c_var);


    //---------------------------------------- Source.cpp ----------------------------------------//
    cpp_var[0] = src.readData();

    src.writeData(cpp_var[0]+1);

    cpp_var[1] = src.readData();

    printf("Source.cpp: We found a(%d) turned into b(%d)\n\n", cpp_var[0], cpp_var[1]);

    //---------------------------------------- Driver.c&h ----------------------------------------//
    driver_enable();


    return EXIT_SUCCESS;
}


//************************************************************************************************//
//                                    SHARED NAMESPACE ISSUE                                      //
// @issue     source.c & source.cpp name conflict                                                 //
// @error     Causing compiler to succeed including both                                          //
// @soln      Resolution for this validation routine is to reproduce source.c below               //
//************************************************************************************************//

/**
 * reproduction from source.c
 */
int source_routine(void) {
    return EXIT_SUCCESS;
}

