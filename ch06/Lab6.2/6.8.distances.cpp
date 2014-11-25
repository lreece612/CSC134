// Lab 6.8 - Student Generated Code Assignments
//
// Option 1: Write a program that will convert miles to kilometers and
// kilometers to miles. The user will indicate both a number (representing a
// distance) and a choice of whether that number is in miles to be converted to
// kilometers or kilometers to be converted to miles. Each conversion is done
// with a value returning function. You may use the following conversions.
//
//     1 kilometer = .621 miles
//     1 mile = 1.61 kilometers
//
//
// written by Walter B. Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College

#include <iostream>
#include <string>
#include <limits> // for numeric_limits::max()
#include <sstream> // for ostringstream

enum ConversionType {
    mi_to_km,
    km_to_mi
};

const double MI_PER_KM = 0.621;
const double KM_PER_MI = 1.61;

std::string convert(ConversionType t) {
    double distance, factor;
    std::string from, to;

    if ( t == mi_to_km ) {
        from = "miles", to = "kilometers", factor = KM_PER_MI;
    } else {
        from = "kilometers", to = "miles", factor = MI_PER_KM;
    }

    std::cout << "Please input the " << from << " to be converted\n";
    std::cin >> distance;

    // throw everything into an ostringstream to make number conversion easy
    std::ostringstream oss;
    oss << "\n" << distance << " " << from << " = " << (distance*factor)
        << " " << to << "\n\n";

    return oss.str();
}

int main() {
    char selection = '4';

    while (true) {
        std::cout << "Please input\n"
                     "  1  Convert miles to kilometers\n"
                     "  2  Convert kilometers to miles\n"
                     "  3  Quit\n\n";

        do {
            std::cin >> selection;
        } while( !std::cin.good() );

        switch ( selection ) {
            case '1':
                std::cout << convert(mi_to_km);
                break;
            case '2':
                std::cout << convert(km_to_mi);
                break;
            case '3':
                return 0;
            default:
                std::cerr << "**Invalid input. Please try again.**\n\n";
        }
    }


    return 0;
}
