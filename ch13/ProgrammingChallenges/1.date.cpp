// Programming Challenge 13.1 - Date
//
// Design a class called Date. The class should store a date in three integers:
// month, day, and year. There should be member functions to print the date in
// the following forms:
//
//   12/25/2012
//   December 25, 2012
//   25 December 2012
//
// Demonstrate the class by writing a complete program implementing it.
//
// Input Validation: Do not accept values for the day greater than 31 or less
// than 1. Do not accept values for the month greater than 12 or less than 1.
//
//
// Note: The specification and implementation are contained in 1.date.hpp. This
//   file merely contains a demonstration of the class.
//
//
// written by Walter B. Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College

#include "1.date.hpp"
#include <iostream>

int main() {
    Date now;
    Date xmas = Date(2012, 12, 25);
    Date nine_eleven (2001, 9, 11);
    Date invalid (1900, 0, -666); // will revert to 1900, 1, 1

    std::cout << now.formatShort() << '\n';
    std::cout << now.formatLong() << '\n';
    std::cout << now.formatOrdered() << "\n";

    std::cout << '\n';

    std::cout << xmas.formatShort() << '\n';
    std::cout << xmas.formatLong() << '\n';
    std::cout << xmas.formatOrdered() << '\n';

    std::cout << '\n';

    std::cout << nine_eleven.formatShort() << '\n';
    std::cout << nine_eleven.formatLong() << '\n';
    std::cout << nine_eleven.formatOrdered() << '\n';

    std::cout << '\n';

    std::cout << invalid.formatShort() << '\n';
    std::cout << invalid.formatLong() << '\n';
    std::cout << invalid.formatOrdered() << '\n';

    std::cout << '\n';

    return 0;
}
