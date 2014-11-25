// Lab 6.4 - Student Generated Code Assignments
//
// Option 2: Write a program that will input miles traveled and hours spent in
// travel. The program will determine miles per hour. This calculation must
// be done in a function other than main; however, main will print the
// calculation. The function will thus have 3 parameters: miles, hours, and
// milesPerHour. Output is fixed with 2 decimal point precision.
//
//
// written by Walter B. Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College

#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::fixed;
using std::setprecision;

void calculateMPH( double miles, double hours, double& milesPerHour );

int main() {
	double mi, hr, speed;
	
	cout << "Please input the miles traveled\n";
	cin >> mi;
	cout << "Please input the hours traveled\n";
	cin >> hr;
	
	calculateMPH( mi, hr, speed );
	
	cout << "Your speed is " << fixed << setprecision(2) << speed
	     << " miles per hour\n";

	return 0;
}

// radically pointless function that calculates miles per hour when given 
// miles and hours, and a reference to the speed variable.
void calculateMPH( double miles, double hours, double& milesPerHour) {
	milesPerHour = miles / hours;
}
