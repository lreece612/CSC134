// This program will output the circumference and area
// of the circle with a given radius.

// Walter Vaughan

#include <iostream>
#include <cmath>
using namespace std;

#ifndef M_PI
const double M_PI = 3; // if we're using GCC, then we don't need to redefine PI.
#endif
const double PI = M_PI; 
const double RADIUS = 5.4;

int main() {
	// our unknown variables to be calculated
	double area;
	double circumference;
	
	circumference = 2 * PI * RADIUS; // formula for circumference of circle
	area = PI * RADIUS * RADIUS;     // formula for area of circle
	
	// output our calculated values to the screen
	cout << "The circumference of the circle is " << circumference << "\n";
	cout << "   The area of the circle is " << area << "\n";

	return 0;
}
