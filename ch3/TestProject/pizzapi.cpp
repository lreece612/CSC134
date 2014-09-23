// Test Project - Pizza PI
//
// Joe’s Pizza Palace needs a program to calculate the number of pizzas to
// prepare for a party. The program should ask the user for the number of
// people who will be at the party and for the diameter of the pizzas to be
// ordered. It should then calculate and display the number
// of pizzas to purchase. 
//
// To do this calculation, make the following assumptions:
//
// - Each person attending the party is expected to eat 4 slices of pizza
// - A slice of pizza should have an area of 14.125 square inches.
//
// The output should be displayed using fixed point notation, rounding to one
// decimal place of precision. Your program should use C++ named constants for
// the math constant PI and for the area of a slice of pizza.
//
// Your screenshot must show the following test case:
//     A party of 35 people with 16 inch pizzas
//
//
//
// written by Walter B. Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College
//   on 2014 - 9 - 23
//    I hereby state that this program is entirely my own work.

#include <iostream>
#include <iomanip>
using namespace std;

const double PI = 3.14159265358979323846;
const double SLICE_AREA = 14.125; // in inches

int main() {
	int num_guests;         
	double pizza_diameter;  // in inches
	
	double num_pizzas;      // calculated output
	
	// get input data
	cout << "Joe\'s Pizza Palace(R) -- Pizza Party Calculator\n"
	        " (c)2014, Preferred Pizza Palace Programming, Inc.\n"
	        "\n"  
	        "Enter the number of guests in the pizza party: ";
	cin >> num_guests;
	cout << "What diameter pizzas do they want? (in inches): ";
	cin >> pizza_diameter;
	
	// calculation is number of slices needed (as an area) divided by
	//  area per individual pizza
	num_pizzas = (num_guests * 4 * SLICE_AREA) / 
	             ((pizza_diameter / 2) * (pizza_diameter / 2) * PI);
	             // this is basically radius * radius * PI = PI*r^2
	
	// output data
	cout << "\nYou will need to make approximately "
	     << fixed << setprecision(1) << num_pizzas
	     << " pizzas.\n";

	return 0;
}
