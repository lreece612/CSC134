// Lab 3.5 Student Generated Code Assignments
// Option 1: Write a program that will read in 3 grades from the keyboard and
// will print the average (to 2 decimal places) of those grades to the screen. It
// should include good prompts and labeled output. Use the examples from
// the earlier labs to help you. You will want to begin with a design. The
// Lesson Set 1 Pre-lab Reading Assignment gave an introduction for a design
// similar to this problem. Notice in the sample run that the answer is stored
// in fixed point notation with two decimal points of precision.
//
// written by Walter B. Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College

#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	float grades[3];  // stores our three grades to be averaged
	float avg;        // the average of our three grades
	
	// ask for each of the three grades individually
	cout << "Please input the first grade" << endl;
	cin >> grades[0];
	
	cout << "Please input the second grade" << endl;
	cin >> grades[1];
	
	cout << "Please input the third grade" << endl;
	cin >> grades[2];
	
	avg = (grades[0] + grades[1] + grades[2]) / 3;
	
	cout << "The average of the three grades is " // preamble
	     << fixed << showpoint << setprecision(2) // formatting
	     << avg << endl;                          // actual output
	
	return 0;
}
