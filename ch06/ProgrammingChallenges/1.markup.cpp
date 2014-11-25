// Programming Challenge 6.1 - Markup
//
// Write a program that asks the user to enter an item's wholesale cost and its
// markup percentage. It should then display the item's retail price. Example:
//
//   - If an item's wholesale cost is 5.00 and its markup percentage is 100%,
//     then the item's retail price is 10.00.
//
//   - If an item's wholesale cost is 5.00 and its markup percentage is 50%,
//     then the item's retail price is 7.50.
//
// The program should have a function named calculateRetail that recieves the
// wholesale cost and the markup percentage as arguments, and returns the
// retail price of the item.
//
// Input Validation: Do not accept negative values for either the wholesale
//   cost of the item or the markup percentage.
//
//
// written by Walter B. Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College

#include <iostream>
#include <iomanip>

double calculateRetail( double&, double& );

int main() {
	// initialize to arbitrary negative numbers so they fail validation
	// until a valid input is recieved
	double wholesale_cost = -1.00;
	double markup_coefficient = -100.0;
	
	do {
		std::cout << "Enter the wholesale cost of an item: ";
		std::cin >> wholesale_cost;
	} while ( wholesale_cost < 0 );
	
	do {
		std::cout << "Enter that item's markup rate as a percentage (omit %): ";
		std::cin >> markup_coefficient;
	} while ( markup_coefficient < 0 );
	
	markup_coefficient /= 100; // convert from percent to decimal coefficient
	
	std::cout << "Retail Price: $ " << std::setprecision(2) << std::fixed
	          << calculateRetail( wholesale_cost, markup_coefficient ) << '\n';
	
	return 0;
}

double calculateRetail( double& price, double& markup ) {
	return price + price * markup;
}
