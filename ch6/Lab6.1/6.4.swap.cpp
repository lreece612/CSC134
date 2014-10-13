// Lab 6.4 - Student Generated Code Assignments
//
// Option 1: Write a program that will read two floating point numbers (the
// first read into a variable called first and the second read into a variable
// called second ) and then calls the function swap with the actual parameters
// first and second. The swap function having formal parameters number1 and
// number2 should swap the value of the two variables. Note: This is similar
// to a program you did in Lesson Set 1; however, now you are required to
// use a function. You may want to look at logicprob.cpp from Lesson Set 1.
//
//
// written by Walter B. Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College

#include <iostream>
using std::cin;
using std::cout;

// template function for swapping two variables of the same type
template <typename T> void swap_values( T&, T& );

int main() {
	double first, second;
	
	cout << "Enter the first number\nThen hit enter\n";
	cin >> first;
	cout << "Enter the second number\nThen hit enter\n";
	cin >> second;
	
	double init_f = first, init_s = second;
	
	swap_values( first, second );
	
	cout << "You input the numbers as " << init_f << " and " << init_s << ".\n"
	     << "After swapping, the first number has the value of " << first
	     << "\n which was the value of the second number\n"
	        "The second number has the value of " << second 
	     << "\n which was the value of the first number\n";

	return 0;
}

// definition of the template function: 
//   takes references to two variables and swaps their values.
template <typename T>
void swap_values( T& f, T& s ) {
	T tmp = f;
	    f = s;
	    s = tmp;
}

