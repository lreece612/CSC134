// Checkpoint Exercise 2.17 - Write a program that stores your name, address,
// and phone number in three separate string objects. Display the contents
// of the string objects on the screen.
//
// written by Walter Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College

#include <iostream>
using namespace std;

int main() {
	// information declarations
	string name = "Walter Vaughan";
	string address = "1600 Pennsylvania Avenue, Washington, DC 20500";
	string number = "555-867-5309";

	// send them to stdout in a pretty format.
	cout << "         Name: " << name << endl;
	cout << "      Address: " << address << endl;
	cout << " Phone Number: " << number << endl;

	return 0;
}
