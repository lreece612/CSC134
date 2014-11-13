// Lab 7.4 - Student Generated Code Assignments
//
// Option 1: Write the complete age population program given in the Pre-lab
// Reading Assignment; given a list of ages (1 to 100) from the keyboard, the
// program will tally how many people are in each age group.
//
//
// written by Walter B. Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College

#include <iostream>

const int TOTALYEARS = 100;

int main() {
    int ageFrequency[TOTALYEARS] = {}; // initialize to all zeroes
    int currentAge = -99;              // initialize to sentinel value

    while ( true ) {
        std::cout << "Please input an age from one to 100, put -99 to stop\n";
        std::cin >> currentAge;

        if ( currentAge == -99 ) {
            break;
        }

        // bounds checking
        if ( currentAge > 0 and currentAge < (TOTALYEARS+1) ) {
            ageFrequency[currentAge-1] += 1;
        } else {
            std::cerr << "** Note: invalid age (" << currentAge
                      << ") discarded **\n";
        }
    }

    for ( int age = 0 ; age < TOTALYEARS ; age++ ) {
        if ( ageFrequency[age] > 0 ) {
            std::cout << "The number of people " << (age+1) << " years old is "
                      << ageFrequency[age] << '\n';
        }
    }

    return 0;
}
