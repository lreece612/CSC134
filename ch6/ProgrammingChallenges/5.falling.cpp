// Programming Challenge 6.5 - Falling Distance
//
// When an object is falling because of gravity, the following formula can be
// used to determine the distance the object falls in a specific time period:
// 
//     d = 1/2 g t^2
//
// The variables in the formula are as follows: d is the distance in meters, g
// is 9.8, and t is the amount of time, in seconds, that the object has been
// falling.
//
// Write a function named fallingDistance that accepts an object's falling time
// (in seconds) as an argument. The function should return the distance, in
// meters, that the object has fallen during that time interval. Write a program
// that demonstrates the function by calling it in a loop that passes the values
// 1 through 10 as arguments, and displays the return value.
//
// 
// written by Walter B. Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College

#include <cstdio>

double fallingDistance( unsigned int& );

int main() {
	printf( "Time (seconds) | Distance (meters)\n" );
	printf( "---------------|------------------\n" );

	for ( unsigned int t = 1 ; t <= 10 ; t++ ) {
		printf( "%14u | %.1f\n", t, fallingDistance(t) );
	}
}

double fallingDistance( unsigned int& time ) {
	// equivalent to 1/2 * 9.8 * time^2
	return 4.9 * time * time;
}
