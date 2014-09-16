// Programming Challenge 4.21 - Geometry Calculator
//
// Write a program that displays the following menu:
//
//     Geometry Calculator
//
//        1. Calculate the Area of a Circle
//        2. Calculate the Area of a Rectangle
//        3. Calculate the Area of a Triangle
//        4. Quit
//
//        Enter your choice (1-4):
//
// If the user enters 1, the program should ask for the radius of the circle
// and then display its area. Use the following formula:
//
//     area = pi * r^2
//
// Use 3.14159 for pi and the radius of the circle for r. If the user enters 2,
// the program should ask for the length and width of the rectangle and then
// display the rectangle's area. Use the formula:
//
//     area = length * width
//
// If the user enters 3 the program should ask for the length of the triangle's
// base and its height, and then display its area. Use the following formula:
// 
//     area = base * height * .5
//
// If the user enters 4, the program should end.
//
// Input Validation: Display an error message if the user enters a number
// outside the range of 1 through 4 when selecting an item from the menu. Do not
// accept negative values for the circle's radius, the rectangle's length or
// width, or the triangle's base or height.
//
//
// written by Walter B. Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College

#include <iostream>
#include <limits>    // for numeric_limits, for clearing cin
#include <cmath>     // for pow()
#include <string>    // for function argument
using namespace std;


// error-proof way of extracting postive number of type double from cin.
// it extracts the number into the variable passed by the first argument.
// returns 0 on fail, returns 1 if successful.
int cinNumber( double &num, string label) {
	if ( !(cin >> num) ) { // check that the input here is valid.
		cout << "You didn't give me a valid number for " << label << ".\n";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		num = 0; // make sure that we don't have some weird value for num
		return 0;
	} else if (num < 0) {  // make sure input is positive, otherwise complain
		cout << "The " << label << " is a magnitude, it can't be negative.\n";
		return 0;
	}
	
	return 1; // success
}

// formulas for each shape
////////////////////////////////////////////////////////////////////////////////
void Circle() {
	double radius;
	const double PI = 3.14159;
	
	// prompt for inputs
	cout << "1. Calculate the Area of a Circle\n"
	        "What is the Radius of the circle? ";
	if ( !(cinNumber(radius, "Radius")) ) return;
	cout << '\n';

	// return the formula, step by step
	cout << "Area = PI * Radius ^ 2\n"
	        "Area = " << PI << " * " << radius << " ^ 2\n"
	        "Area = " << PI << " * " << pow( radius, 2 ) << "\n"
	        "Area = " << PI * pow( radius, 2 ) << "\n\n";
	
	return;
}

void Rectangle() {
	double length, width;
		
	// prompt for inputs
	cout << "2. Calculate the Area of a Rectangle\n"
	        "What is the Length of the rectangle? ";
	if ( !(cinNumber(length, "Length")) ) return;
	cout << "What is the Width of the rectangle? ";
	if ( !(cinNumber(width , "Width" )) ) return;
	cout << '\n';
	
	// return the formula, step by step
	cout << "Area = Length * Width\n"
	        "Area = " << length << " * " << width << "\n"
	        "Area = " << length * width << "\n\n";
	return;
}

void Triangle() {
	double base, height;
		
	// prompt for inputs
	cout << "3. Calculate the Area of a Triangle\n"
	        "What is the length of the Base of the triangle? ";
	if ( !(cinNumber(base  , "Base"  )) ) return;
	cout << "What is the Height of the triangle? ";
	if ( !(cinNumber(height, "Height")) ) return;
	cout << '\n';
	
	// return the formula, step by step
	cout << "Area = 1/2 * Base * Height\n"
	        "Area = 1/2 * " << base << " * " << height << "\n"
	        "Area = 1/2 * " << base * height << "\n"
	        "Area = " << 0.5 * base * height << "\n\n";
	return;
}

////////////////////////////////////////////////////////////////////////////////
int main() {
	char selection; // which option we select
	const char* prompt = "\n"
	                     "    Geometry Calculator\n"
	                     "\n"
	                     "    1. Calculate the Area of a Circle\n"
	                     "    2. Calculate the Area of a Rectangle\n"
	                     "    3. Calculate the Area of a Triangle\n"
	                     "    4. Quit\n"
	                     "\n"
	                     "    Enter your choice (1-4): ";
	
	// main loop
	do {
		// input which function we'll use
		cout << prompt;
		cin >> selection;
		cout << '\n';
		
		// run the relavant function
		switch (selection) {
			case '1': Circle();    break;
			case '2': Rectangle(); break;
			case '3': Triangle();  break;
			case '4':              break; // do nothing, wait 'til end of loop.
			default: cout << "Invalid Selection, try again.";
			         cin.clear();
			         cin.ignore(numeric_limits<streamsize>::max(), '\n');
			         break;
		}
	} while ( selection != '4' );
	
	return 0;
}
