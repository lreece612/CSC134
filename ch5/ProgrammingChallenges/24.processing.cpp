// Programming Challenge 5.24 - Using Files --- Numeric Processing
//
// Locate the file 'random.txt'. This file contains a long list of random
// numbers. Write a program that opens the file, reads all the numbers from
// the file, and calculates the following:
//
//   A) The number of numbers in the file
//   B) The sum of all the numbers in the file (a running total)
//   C) The average of all the numbers in the file
//
// The program should display the number of numbers found in the file, the
// sum of the numbers, and the average of the numbers.
//
//
// ** Bonus ** 
// I wrote the program so that it can open a file via a
// command-line argument. Otherwise it opens the intended 'random.txt'.
//
// written by Walter B. Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]) {

	const char* FILENAME = "random.txt"; // default file to be opened

	unsigned int current_num;        // holds number being read in
	unsigned int count = 0, sum = 0; // statistics
	ifstream f;                      // will open our file

	// if a commandline argument is specified
	if ( argc > 1 ) {
		f.open( argv[1] );
	} else {
		f.open( FILENAME );
	}

	// if file isn't found or other problem occurs while opening
	if ( f.fail() ) {
		cerr << "ERROR: \'" << FILENAME << "\' was not opened.\n"
		     << "Make sure the file exists and you have read permissions.\n";
		return 1;
	}
	
	// processing loop
	while ( true ) { 
		f >> current_num;
		if ( !f.good() ) break; // don't continue gathering data on read failure
		sum += current_num;
		count++;
	}
	
	// output statistics
	cout << "Number of numbers:  " << count << '\n'
	     << "Sum of the numbers: " << sum << '\n'
	     << "Average of numbers: " << fixed
	     << ( sum / static_cast<double>(count) ) << '\n';

	return 0;
}
