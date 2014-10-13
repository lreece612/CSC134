// Lab 6.4 - Student Generated Code Assignments
//
// Option 3: Write a program that will read in grades, the number of which is
// also input by the user. The program will find the sum of those grades and
// pass it, along with the number of grades, to a function which has a "pass
// by reference" parameter that will contain the numeric average of those
// grades as processed by the function. The main function will then deter-
// mine the letter grade of that average based on a 10-point scale.
//
//
// written by Walter B. Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College

#include <iostream>
using std::cin;
using std::cout;

void calculateGrade( double, double, double& );

// values for calculating letter grades
const double min_grades[4]  = {  90,  80,  70,  60 };
const char letter_grades[4] = { 'A', 'B', 'C', 'D' };

int main() {
	unsigned short num_grades;
	double average, sum = 0;
	char letter = 0;
	
	cout << "Enter the number of grades\n";
	cin >> num_grades;
	
	double *grade = new double;
	for ( unsigned short n = num_grades ; n > 0 ; n-- ) {
		cout << "Enter a numeric grade between 0-100\n";
		cin >> *grade;
		sum += *grade;
	}
	delete grade;

	calculateGrade( sum, num_grades, average );
	
	// give a grade, check for best applicable grade first
	for ( int i = 0 ; i < 4 ; i++ ) {
		if ( average >= min_grades[i] ) {
			letter = letter_grades[i];
			break;
		}
	}
	// if it didn't make any of those grades, then give an F.
	if ( letter == 0 ) letter = 'F';

	cout << "The grade is " << letter << '\n';

	return 0;
}

// fun fact: this function is objectively identical to the one in 6.4.mph.cpp
void calculateGrade( double pts, double n, double& avg ) {
	avg = pts / n;
}
