// Programming Challenge 2.10. Miles per Gallon
//
// A car holds 12 gallons of gasoline and can travel 350 miles before
// refueling. Write a program that calculates the number of miles per gallon
// the car gets. Display the result on the screen.
//
//
// written by Walter Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College

#include <iostream>

int main() {
	double miles = 350;   // miles the car can travel
	double gallons = 12;  // gallons of gas the car holds

	// the calculation
	double mpg = miles / gallons;

	// there is no observable linear progression in difficulty of
	// these challenges...
	std::cout << "Miles per Gallon = " << miles << " mi / " << gallons
	     << " gal = " << mpg << " mpg.\n";
	return 0;
}
