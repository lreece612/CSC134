// Programming Challenge 7.1 - Largest/Smallest Array Values
//
// Write a program that lets the user enter 10 values into an array. The program
// should then display the largest and smallest values stored in the array.
//
// written by Walter B. Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College

#include <iostream>
#include <limits>

#define ARRAY_SIZE 10

int main() {
    double array[ARRAY_SIZE];

    // start with largest double for minimum, smallest for max,
    // that way first value will always be stored as new min/max
    double min = std::numeric_limits<double>::max();
    double max = min * (-1.0);

    std::cout << "Enter " << ARRAY_SIZE << " numbers, separated by spaces...\n";

    for ( int i = 0 ; i < ARRAY_SIZE ; i++ ) {
        std::cin >> array[i];
        if ( array[i] < min )
            min = array[i];
        if ( array[i] > max )
            max = array[i];
    }

    std::cout << "\nLargest Value: " << max << '\n';
    std::cout << "Smallest Value: " << min << '\n';

    return 0;
}
