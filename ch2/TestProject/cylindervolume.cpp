// Test Project - Cylinder Volume Calculator
//
// Write a C++ program that calculates the volume of a cylinder. Define
// appropriate variables for the diameter and the height of the cylinder.
// Assuming the units of these variables are in inches, display the computed
// volume in U.S. fluid ounces. Use the following formula to compute the volume.
//
//     1
//    --- × height × π × diameter ^ 2
//     4
//
// Your screenshot must show the following test case.
//
//     diameter of 2.5 inches and height of 4.8 inches
//
// Note: these are approximately the dimensions of a standard 12 ounce can.
//
//
// written by Walter B. Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College
//   on 2014 - 9 - 18


#include <iostream>

#define PI 3.14159265358979323846
#define FL_OZ_PER_IN 0.554113

int main() {
	double height, diameter; // dimensions of the cylinder, in inches
	double volume;              // computer volume of cylinder, in fluid ounces
	
	// input
	std::cout << "-- Cylinder Volume Calculator --\n"
	             "Enter the height of the cylinder in inches:   ";
	std::cin >> height;
	std::cout << "Enter the diameter of the cylinder in inches: ";
	std::cin >> diameter;
	
	// processing
	volume = 0.25 * height * PI * diameter * diameter * FL_OZ_PER_IN;
	
	// output
	std::cout << "\n"
	          << "The volume of the cylinder is " << volume
	          << " fluid ounces.\n";
	
	return 0;
}
