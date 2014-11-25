// Lab 6.8 - Student Generated Code Assignments
//
// Option 3: Write a program that outputs a dentist bill. For members of a
// dental plan, the bill consists of the service charge (for the particular
// procedure performed) and test fees, input to the program by the user. To
// non-members the charges consist of the above services plus medicine (also
// input by the user). The program first asks if the patient is a member of the
// dental plan. The program uses two overloaded functions to calculate the
// total bill. Both are value returning functions that return the total charge.
//
//
// written by Walter B. Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College

#include <iostream>
#include <iomanip>
#include <limits>

double total( double, double );
double total( double, double, double );

int main() {
    // assume non-member, can always just put 0 for medicine charges
    char plan_member = 'N';

    double service_charges, test_charges, medicine_charges = 0.00;
    double total_charges;

    std::cout << "Are you a member of the dental plan? [y/N] ";
    std::cin.get(plan_member);

    // only clear the buffer if a character was successfully extracted
    if ( static_cast<int>(plan_member) != 10) { // 10 = \n char
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    std::cout << "Please input the service charge: ";
    std::cin >> service_charges;

    std::cout << "Please input the test charges: ";
    std::cin >> test_charges;

    // assume anything but y is "no"
    if ( plan_member != 'Y' and plan_member != 'y' ) {
        std::cout << "Please input the medicine charges: ";
        std::cin >> medicine_charges;
        total_charges = total(service_charges, test_charges, medicine_charges);
    } else {
        total_charges = total(service_charges, test_charges);
    }

    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "The total bill is $" << total_charges << '\n';
}

double total( double s, double t ) {
    return s + t;
}

double total( double s, double t, double m ) {
    return s + t + m;
}
