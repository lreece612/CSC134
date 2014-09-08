// Programming Challenge 2.12. Land Calculation
//
// One acre of land is equivalent to 43,560 square feet. Write a program that
// calculates the number of acres in a tract of land with 389,767 square feet.
// 
//
// written by Walter Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College

#include <iostream>

int main() {
	// amount of square feet in an acre of land
	const int ACRE = 43560;
	double land = 389767;

	// convert this number of square feet into acres.
	double acres = land / ACRE;
	
	std::cout << land << " square feet = " << acres << " acres.\n";

	return 0;
}
