// Midterm Exam Project 2 - Pizza PI
//
// written by Walter B. Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College

#include <iostream>
#include <iomanip>
#include <string>

// types of pizza
enum Shape {
	CIRCULAR,
	RECTANGULAR,
	INVALID      // invalid shape, defined for consistency
};

const double SLICE_AREA = 14.125;
const double PI = 3.14159;

double compute_area( double diameter );
double compute_area( double length, double width );

int main() {
	std::string pizza_shape_description;
	Shape pizza_shape;

	// get pizza shape from user
	std::cout << "What is the shape of the pizza, circular or rectangular? ";
	std::cin >> pizza_shape_description;
	
	// determine shape of the pizza
	if ( pizza_shape_description == "circular" ) {
		pizza_shape = CIRCULAR;
	} else if ( pizza_shape_description == "rectangular" ) {
		pizza_shape = RECTANGULAR;
	} else {
		pizza_shape = INVALID;
	}
	
	double pizza_area;
	// compute the area of the pizza and output shape-specific information
	if ( pizza_shape == CIRCULAR ) {
		double diameter;
		std::cout << "Enter the diameter of the pizza, in inches: ";
		std::cin >> diameter;
		pizza_area = compute_area( diameter );
		std::cout << "One " << diameter << " inch circular pizza will have ";
	} else if ( pizza_shape == RECTANGULAR ) {
		double length, width;
		std::cout << "Enter the length of the pizza, in inches: ";
		std::cin >> length;
		std::cout << "Enter the width of the pizza, in inches: ";
		std::cin >> width;
		pizza_area = compute_area( length, width );
		std::cout << "One " << length << " by " << width
		          << " inch rectangular pizza will have ";
	} else {
		std::cerr << "Sorry, but " << pizza_shape_description
		          << " is an invalid pizza shape.\n";
		pizza_area = 0.0;
		return 1;
	}
	
	// output general information about pizza.
	std::cout << std::fixed << std::setprecision(2)
	          << (pizza_area / SLICE_AREA) << " slices of pizza.\n"
	             "The total area of the pizza is "
	          << std::fixed << std::setprecision(2)
	          << pizza_area << " square inches.\n";

	return 0;
}

// computes area of a circle
double compute_area( double diameter ) {
	return PI * diameter * diameter / 4.0;
}

// computes area of a rectangle
double compute_area( double length, double width ) {
	return length * width;
}
