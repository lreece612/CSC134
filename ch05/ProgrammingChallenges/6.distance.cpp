// Programming Challenge 5.6 - Distance Traveled
//
// The distance a vehicle travels can be calculated as follows:
//
//     distance = speed * time
//
// For example, if a train travels 40 miles per hour for 3 hours, the distance
// traveled is 120 miles.
//
// Write a program that asks the user for the speed of a vehicle (in miles per
// hour) and how many hours it has traveled. The program should then use a loop
// to display the distance the vehicle has traveled for each hour of that time
// period. Here is an example of the output:
//
//     What is the speed of the vehicle in mph? 40
//     How many hours has it traveled? 3
//     Hour   Distance Traveled
//     --------------------------------
//      1            40
//      2            80
//      3           120
//
// Input Validation: Do not accept a negative number for speed and do not accept
// any value less than 1 for time traveled.
//
//
// written by Walter B. Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	// input variables
	double speed    = 0;
	int    duration = 0;
	
	// calculation variable
	int elapsed_time = 0;

	// gather input and validate it.
	cout << "What is the speed of the vehicle in mph? ";
	cin >> speed;
	if ( speed < 0.0 ) {
		cerr << "** Invalid Input: speed must be positive. **\n";
		return 1;
	}
	cout << "How many hours has it traveled? ";
	cin >> duration;
	if ( duration < 1 ) {
		cerr << "** Invalid Input: hours traveled must be"
		        " greated than one. **\n";
		return 1;
	}
	
	// if everything looks good, output table of travel
	cout << "Hour   Distance Traveled\n"
	        "--------------------------------\n";
	while ( elapsed_time < duration ) {
		cout << " " << setw(4) << left << ++elapsed_time << " ";
		cout << setw(10) << right << ( speed * elapsed_time ) << '\n';
	}

	return 0;
}
