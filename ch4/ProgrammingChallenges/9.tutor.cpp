// Programming Challenge 4.9 - Math Tutor
//
// This is a modification of Programming Challenge 15 from Chapter 3. Write a
// program that can be used as a math tutor for a young student. The program
// should display two random numbers that are to be added, such as:
//
//      247
//    + 129
//   ------
//
// The program should wait for the student to enter the answer. If the answer
// is correct, a message of congratulations should be printed. If the answer is
// incorrect, a message should be printed showing the correct answer.
//
//
// written by Walter B. Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College

// based off ch3/ProgrammingChallenges/15.tutor.cpp

#include <cstdio>   // using this instead of iostream
#include <cstdlib>  // for rand(), srand()
#include <ctime>    // for time()
using namespace std;

int main() {
	int a, b;   // numbers that the student will be adding
	int guess;  // student's guess to the answer

	srand(time(NULL)); // initialize the random number generator for rand()
	
	// generate two random numbers with 3 or fewer digits
	a = rand() % 1000;
	b = rand() % 1000;
	
	// make sure a is greater than b, because children are accustomed
	// to the larger number being on top.
	if ( b > a ) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	
	printf( "\n%7d\n", a );    // print formatted math question
	printf( " + %4d\n", b );
	printf( " -------\n" );
	
	// put the cursor at the correct spot to input the answer
	// NOTE: this does tell the student how many digits the answer is, but this
	// seems like a small tradeoff for making the input line up correctly.
	if ( a+b >= 1000 ) {       // 4 digit answer, max possible a+b is 1998
		printf( "   " );
	} else if ( a+b >= 100 ) { // 3 digit answer
		printf( "    " );
	} else if ( a+b >= 10 ) {  // 2 digit answer, rare but possible
		printf( "     " );
	} else {                   // 1 digit answer, extremely unlikely
		printf( "      " );
	}
	
	scanf( "%d", &guess);      // wait for student to answer
	
	// correct answer given
	if ( guess == a + b ) {
		printf( "\n Correct! \n\n" );
	}
	// incorrect answer given
	else { 
		printf( "\n Sorry, the correct answer is %d \n\n", a+b );
	}
	
	return 0;
}
