// This program has the user input a positive lower bound and upper bound and
// calculates the mean of the n positive integers between the two.
//
// Walter B. Vaughan

#include <iostream>
using namespace std;

int main()
{
	int n;          // lower boundary
	int total = 0;  // total holds the sum of numbers n through m
	int m;          // upper boundary
	float mean;     // the average of the first n positive numbers

	cout << "Please a lower boundary as a positive integer" << endl;
	cin >> n;
	cout << "Please an upper boundary, greater-than or equal to the"
	        " lower boundary" << endl;
	cin >> m;

	if ( n > 0 and m >= n ) {
		for( int step = n ; step <= m ; step++ ) {
			total += step;
		}

		mean = static_cast<float>(total) / (m - n + 1);
		// the divisor (m - n + 1) is the number of integers added

		cout << "The mean average of the integers from " << n 
		     << " to " << m << " is " << mean << endl;
	} else {
		cout << "Invalid input - lower boundary must be positive and m must"
		        " not be below upper boundary." << endl;
	}
	
	return 0;	
}
