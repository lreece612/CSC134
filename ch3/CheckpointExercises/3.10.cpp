// Checkpoint Exercise 3.10 
//
// written by Walter Vaughan

#include <iostream>
#include <cmath>
using namespace std;

#ifndef M_PI
#define M_PI 3.14159;
#endif

int main()
{
	double volume, radius, height;
	
	cout << "This program will tell you the volume of \n";
	cout << "a cylinder-shaped fuel tank.\n";
	cout << "How tall is the tank? ";
	cin >> height;
	cout << "What is the radius of the tank? ";
	cin >> radius;
	
	// You must complete the program.
	volume = M_PI * pow( radius, 2 ) * height;
	cout << "The volume is " << volume << "\n";
	
	return 0;
}
