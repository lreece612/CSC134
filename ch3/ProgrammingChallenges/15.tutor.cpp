// Programming Challenge 3.15 - Math Tutor
// 
// Write a program that can be used as a math tutor for a young student. The
// program should display two random numbers to be added, such as
//
//   247
// + 129
// -----
//
// The program should then pause while the student works on the problem. When
// the student is ready to check the answer, he or she can press a key and the
// program will display the correct solution.
//
//   247
// + 129
// -----
//   376
//
//
// written by Walter Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College

// For fun, I did this using C libraries, instead of C++ ones

#include <cstdio>   // using this instead of iostream
#include <cstdlib>  // for rand(), srand()
#include <ctime>    // for time()
using namespace std;

int main() {
	int a, b;  // numbers that the student will be adding

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
	printf( " ------" );
	getchar();                 // wait for input
	printf( "%7d\n\n", a+b );  // show the answer
	
	return 0;
}
