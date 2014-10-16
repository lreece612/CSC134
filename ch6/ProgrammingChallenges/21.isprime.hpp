// Programming Challenge 6.21 - isPrime Function
//
// A prime number is a number that is only evenly divisible by itself and 1.
// For example, the number 5 is prime because it can only be evenly divided by
// 1 and 5. The number 6, however, is not prime because it can be divided evenly
// by 1, 2, 3, and 6.
//
// Write a function named isPrime, which takes an integer as an argument and
// returns true if the argument is a prime number, or false otherwise.
// Demonstrate the function in a complete program.
//
//
// written by Walter B. Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College
#ifndef CH6_PROGRAMMING_CHALLENGES_21_ISPRIME_H_
#define CH6_PROGRAMMING_CHALLENGES_21_ISPRIME_H_

bool isPrime( int num ) {
	for ( int divisor = 2 ; divisor < num ; divisor++ ) {
		if ( num % divisor == 0 ) return false;
	}
	
	return true;
}

#endif
