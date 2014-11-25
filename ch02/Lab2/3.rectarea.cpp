// This program will calculate the area and perimeter
// of a specific rectangle.
//
// written by Walter Vaughan for CSC 134, section 200, Fall 2014,
//  at Catawba Valley Community College

#include <iostream>
using namespace std;

const int LENGTH = 8;
const int WIDTH = 3;

int main() {
	// these are the unknown quantities we're going to compute.
	int area, perimeter;

	area = LENGTH * WIDTH;                       // formula for area
	perimeter = LENGTH + WIDTH + LENGTH + WIDTH; // (verbose) formula for perimeter

	// output our computed quantities
	cout << "The area of the rectangle is " << area << "\n";
	cout << " The perimeter of the rectangle is " << perimeter << "\n";

	return 0;
}
