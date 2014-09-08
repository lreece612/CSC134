// Checkpoint Problem 2.20 - Write a program that defines an integer variable
// named age and a float variable named weight. Store your age and weight, as
// literals, in the variables. The program should display these values on the
// screen in a manner similar to the following:
//
// My age is 26 and my weight is 180 pounds.
//
//
// written by Walter Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College

#include <iostream>

int main() {
	int age = 21;            // my age
	float weight = 666.666;  // also definitely my real weight

	std::cout << "My age is " << age << " and my weight is "
	          << weight << " pounds.\n";

	return 0;
}
