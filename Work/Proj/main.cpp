/**************************************************************************************************/
/** @file     main.cpp
 *  @brief    Style content inspection & validation
 *  @details  x
 *
 *  @section    Opens
 * 		main.c tests & validates content from Gcc\
 * 		- having issues with source includes from both C & C++
 */
/**************************************************************************************************/

//************************************************************************************************//
//                                            INCLUDES                                            //
//************************************************************************************************//

//Standard Library Includes
#include <iostream>


/**************************************************************************************************/
/** @fcn        int main(void)
 *  @brief      x
 *  @details    x
 *
 *  @return   (int) descrip
 */
/**************************************************************************************************/
int main(void) {

	int number = 10;

	std::string text = "Hello, world!";

	// Outputting an integer
	std::cout << "The number is: " << number << std::endl;

	// Outputting a string
	std::cout << text << std::endl;

	// Outputting multiple values in one line
	std::cout << "Number: " << number << ", Text: " << text << std::endl;

	return 0;
}

