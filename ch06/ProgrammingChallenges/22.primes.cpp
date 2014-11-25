// Programming Challenge 6.22 - Prime Number List
//
// Use the isPrime function that you wrote in Programming Challenge 21 in a
// program that stores a list of all the prime numbers from 1 through 100 in
// a file.
//
// NOTE: Programming Challenge 21 is contained in '21.isprime.hpp'
//
//
// written by Walter B. Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College

#include <iostream>
#include <fstream>
#include <cstdlib> // for atoi
#include <cstring> // for strcmp, strlen

#include "21.isprime.hpp"

const char* DEFAULT_FILENAME = "primes1to100.txt";

int main( int argc, char* argv[] ) {
	std::ofstream f;
	char* filename;
	
	bool sendToCout = false; // initially assume sending to file
	
	// check for too many arguments
	if ( argc > 4 ) {
		std::cerr << "Usage: " << argv[0] << " [FILE [[START] END]]\n"
		             "  Prints prime numbers from START to END to FILE,\n"
		             "  where START defaults to 1 and END defaults to 100.\n"
		             "  FILE must be specified in order to change numeric"
		             " parameters\n\n"
		             "  Using \'-\' for FILE prints to stdout\n";
		return 1;
	} 
	
	// Check for FILE (send output) commandline argument
	if ( argc < 2 ) {
		std::cout << "Notice: no file specified, defaulting to \'"
		          << DEFAULT_FILENAME << "\'...\n";
		filename = new char[ strlen( DEFAULT_FILENAME ) ];
		strcpy( filename, DEFAULT_FILENAME );
	} else {
		if ( !strcmp( argv[1], "-" ) ) {
			filename = new char[0];
			sendToCout = true;
		} else {
			filename = new char[ strlen( argv[1] ) ];
			strcpy( filename, argv[1] );
		}
	}
	
	// try to open file if not sending to stdout
	if ( !sendToCout ) {
		f.open( filename );
		if ( !f.good() ) {
			std::cerr << "Error: An error occured while opening \'" << filename << 
			             "\'.\nMake sure you have write permissions to the"
			             " existing file\nor, if creating a new file,"
       	              " the new file\'s directory.\n";
			return 1;
		}
	}
	
	unsigned int low  = 1;
	unsigned int high = 100;
	
	// if high number specified
	if ( argc == 3) {
		if ( atoi( argv[2] ) < 1 ) {
			std::cerr << "Error: END must be greater than zero.\n"
			             "Recieved: " << argv[2] << '\n';
			return 1;
		} else {
			high = atoi( argv[2] );
		}
	// if low AND high number specified
	} else if ( argc == 4) {
		if ( atoi( argv[3] ) < 1 || atoi( argv[2] ) < 1 ) {
			std::cerr << "Error: START and END must be greater than zero.\n"
			             "Recieved: " << argv[2] << " -> " << argv[3] << '\n';
			return 1;
		} else {
			low = atoi( argv[2] );
			high = atoi( argv[3] );
		}
	}
	
	// output to file
	if ( !sendToCout ) {
		std::cout << "Saving prime numbers from " << low << " thru " << high
		          << " to \'" << filename << "\'...\n";
		
		for ( unsigned int num = low ; num <= high ; num++ ) {
			if ( isPrime(num) ) f << num << "\n";
		}
	
		std::cout << "...Done.\n";
	// or send to stdout
	} else {
		for ( unsigned int num = low ; num <= high ; num++ ) {
			if ( isPrime(num) ) std::cout << num << "\n";
		}
	}
	
	return 0;
}
