// Programming Challenge 7.6 - Number Analysis Program
//
// Write a program that asks the user for a file name. Assume the file contains
// a series of numbers, each written on a separate line. The program should read
// the contents of the file into an array and then display the following data:
//
//   - The lowest number in the array
//   - The highest number in the array
//   - The total of the numbers in the array
//   - The average of the numbers in the array
//
//
// written by Walter B. Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College

#include <iostream>
#include <fstream>
#include <string>
#include <limits>

int main() {
    std::string  filename = "INVALID_INPUT_FILE";
    std::fstream fs; // main file reader

    // statistical variables, initialized to defaults guaranteed to change
    // or still be correct
    double low = std::numeric_limits<double>::max();
    double high = std::numeric_limits<double>::min();
    double total = 0;
    unsigned number_cnt;

    std::cout << "Enter the name of the file to be analyzed: ";
    std::cin >> filename;

    fs.open(filename.c_str(), std::fstream::in);

    if (!fs.good()) {
        std::cerr << "\n** Error encountered opening \'" << filename
                  << "\' **\n";
        return 1;
    }

    std::cout << "\nReading \'" << filename << "\'...";

    double number = 0; // individual datum read from file
    for (number_cnt = 0; fs.good(); number_cnt++ ) {
        fs >> number;
        if (number < low)  low  = number;
        if (number > high) high = number;
        total += number;
    }

    if (fs.bad()) {
        std::cerr << "\n** Error occured while reading \'" << filename
                  << "\' **\n";
        return 2;
    } else {
        std::cout << "done.\n\n";
    }

    std::cout << "--Numerical Analysis of " << filename << "--\n";
    std::cout << "Lowest:  " << low << "\n";
    std::cout << "Highest: " << high << "\n";
    std::cout << "Total:   " << total << "\n";
    std::cout << "Average: " << (total / number_cnt) << "\n\n";

    return 0;
}
