// Programming Challenge 6.21 - isPrime Function
// ** DEMONSTRATION PROGRAM **
//
// See 21.isprime.h for complete documentation.
//
//
// This program prints all the prime numbers from 2 through 100.
//
//
// written by Walter B. Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College

#include <iostream>

#include "21.isprime.hpp" // for isPrime()

int main() {
	for ( int i = 2 ; i < 101 ; i++ ) {
		if ( isPrime(i) ) std::cout << i << " is a prime number.\n";
	} 
}
