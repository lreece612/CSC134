// Fizzbuzz example, since it's so time-trusted
//
// written by Walter B Vaughan, on 2014 - 9 - 4

#include <iostream>

int main() {
	int i;
	
	for ( i = 1; i < 50; i++ ) {
		if ( i % 15 == 0 ) {
			std::cout << "Fizz Buzz\n";
		} else if ( i % 3 == 0 ) {
			std::cout << "Fizz\n";
		} else if ( i % 5 == 0 ) {
			std::cout << "Buzz\n";
		} else {
			std::cout << i << "\n";
		}
	}
}
