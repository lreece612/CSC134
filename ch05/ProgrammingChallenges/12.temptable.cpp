// Programming Challenge 5.12 - Celsius to Fahrenheit Table
//
// In Programming Challenge 10 of Chapter 3 you were asked to write a program
// that converts a Celsius temperature to Fahrenheit. Modify that program so it
// uses a loop to display a table of the Celsius temperatures 0-20, and their
// Fahrenheit equivalents.
//
//
// written by Walter B. Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College

#include <iostream>
#include <iomanip>
using namespace std;

/*** NOTICE *** 
  Output uses the unicode symbol for degrees (°) which may not be supported
  by your terminal. To omit the symbol, uncomment the following line.
*/
//#define NO_DEGREE_SYMBOL
	
int main() {
	unsigned short int c;  // temp in Celsius, only needs 0 through 20
	
	cout << "Celsius | Fahrenheit\n"
	        "--------------------\n";

	#ifndef NO_DEGREE_SYMBOL
		const char* DEG = "°"; 
	#else
		const char* DEG = " ";
	#endif
	
	for ( c = 0 ; c <= 20 ; c++ ) {
		cout << setw(5) << right << c << DEG << "C |"
		     << setw(5) << right << (1.8 * c + 32) << DEG << "F\n";
	}

	return 0;
}
