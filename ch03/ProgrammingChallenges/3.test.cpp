// Programming Challenge 3.3 - Test Average
//
// Write a program that asks for five test scores. The program should calculate
// the average test score and display it. The number displayed should be
// formatted in fixed-point notation, with one decimal point of precision.
//
//
// written by Walter Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	const int NUM_SCORES = 5;  // how many scores we're averaging
	float score;               // holds a test score
	float avg;                 // average of all scores
	
	// gather user input and accumulate the scores
	cout << "Enter " << NUM_SCORES
	     << " grades, separated by spaces, pressing enter when done.\n";
	for ( int i = 0; i < NUM_SCORES; i++ ) {
		cin >> score;  // store the value
		avg += score;  // accumulate to total scores
	}
	avg /= NUM_SCORES; // divide by number of scores to get avg
	
	// output the result
	cout << "Average: " << fixed << showpoint << setprecision(1)
	     << avg << endl;	
	return 0;
}
