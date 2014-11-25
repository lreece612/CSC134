// Programming Challenge 2.1. Sum of Two Numbers
//
// Write a program that stores the integers 62 and 99 in variables,
// and stores the sum of these two in a variable named 'total'
//
//
// written by Walter Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College

#include <iostream>

int main() {
	// two numbers to be summed
	int one = 62;
	int two = 99;

	// the summing
	int total = one + two;

	std::cout << "one: " << one << "  two: " << two << "\n"
	          << "total = one + two\n"
	          << "total: " << total << "\n";

	// wow that was some hard programming there
	return 0;
}
