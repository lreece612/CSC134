// Programming Challenge 3.10 - Celsius to Fahrenheit
// 
// Write a program that converts Celsius temperatures to Fahrenheit
// temperatures. The formula is
//
// F = (9/5)C + 32
//
// F is the Fahrenheit temperature and C is the Celsius temperature.
//
//
// written by Walter Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College

#include <iostream>
using namespace std;

int main() {
	double f, c; // f = temp in Fahrenheit, c = temp in Celsius
	
	cout << "Enter a temperature in degrees Celsius, omitting units: ";
	cin >> c;
	
	f = 1.8 * c + 32; // the calculation
	
	// I use the ° symbol, but that may not work on some console fonts...
	cout << c << " °C = " << f << " °F\n";
	
	return 0;
}
