// Lab 4.5 - Student Generated Code Assignments
// 
// Option 1: Write a program that prompts the user for their quarterly water
// bill for the last four quarters. The program should find and output their
// average monthly water bill. If the average bill exceeds $75, the output
// should include a message indicating that too much water is being used. If
// the average bill is at least $25 but no more than $75, the output should
// indicate that a typical amount of water is being used. Finally, if the
// average bill is less than $25, the output should contain a message praising
// the user for conserving water.
//
//
// written by Walter B. Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double bills[4];  // the water bills for the previous 4 quarters
	double avg;       // average monthly bill
	
	for ( int i = 0 ; i < 4 ; i++ ) {
		cout << "\nPlease input your water bill for quarter " << i+1 << ":\n";
		cin >> bills[i];
		avg += bills[i];
	}
	avg /= 12.0;
	
	cout << "\nYour average monthly bill is $"
	     << setprecision(2) << fixed << avg
	     << ". ";
	if (avg > 75.00)
		cout << "You are using excessive amounts of water.\n";
	else if (avg > 25.00)
		cout << "You are using a typical amount of water.\n";
	else
		cout << "Thanks for conserving water!\n";
	
	return 0;
}
