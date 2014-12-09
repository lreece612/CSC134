// Programming Challenge 11.11 - Monthly Budget
//
// A student has established the following monthly budget:
//
//   Housing            500.00
//   Utilities          150.00
//   Household Expenses  65.00
//   Transportation      50.00
//   Food               250.00
//   Medical             30.00
//   Insurance          100.00
//   Entertainment      150.00
//   Clothing            75.00
//   Miscellaneous       50.00
//
// Write a program that has a MonthlyBudget structure designed to hold each
// of these expense categories. The program should pass the structure to a
// function that asks the user to enter the amounts spent in each budget
// category during a month. The program should then pass the structure to
// a function that displays a report indicating the amount over or under
// budget in each category, as well as the amount over or under budget
// for the entire monthly budget.
//
//
// NOTE: My impementation allows you to enter money amounts however you like,
//   if you want to use Dollar signs or commas, go right ahead. you can even
//   throw random characters in there just because. You can even leave a field
//   blank to just record a $0.00 for that field.
//
//
// written by Walter B. Vaughan for CSC 134, section 200, Fall 2014
// at Catawba Valley Community College

#include <iostream>
#include <iomanip>
#include <cmath>     // for fabs, floor (handling doubles as money)
#include <string>
#include <sstream>   // for istringstream (in processMoney)
#include <algorithm> // for remove_if_copy (in processMoney)

struct MonthlyBudget {
    double housing,
           utilities,
           household_expenses,
           transportation,
           food,
           medical,
           insurance,
           entertainment,
           clothing,
           misc;
};

// labels for each part of the MonthlyBudget structure
const char* MonthlyBudgetLabels[] = {
    "Housing",
    "Utilities",
    "Household Expenses",
    "Transportation",
    "Food",
    "Medical",
    "Insurance",
    "Entertainment",
    "Clothing",
    "Miscellaneous"
};

// student-established budgetary goals
MonthlyBudget GOAL = {
    500.00,
    150.00,
    65.00,
    50.00,
    250.00,
    30.00,
    100.00,
    150.00,
    75.00,
    50.00
};

// adds up total money in a MonthlyBudget struct
double sum(MonthlyBudget& b) {
    double s = 0;
    for (size_t i = 0; i < 10; i++) {
        s += *((double *)(&b) + i);
    }
    return s;
}

// rounds doubles into dollars and cents
double roundToMoney(double a) {
    return floor((a * 100) + 0.5) / 100;
}

// determines whether two doubles can be considered equal amounts of money
// for our purposes, assume we don't distinguish betwen differences less than
// 1/10th of a penny. comparing to 0.01 seems to produce floating point errors.
bool eq(double a, double b) {
    return (fabs(a - b) <= 0.009);
}

// prints out information comparing e to the goal as dollars
void printCompare(double e, double goal) {
    if (eq(e, goal)) {
        std::cout << "Exactly on budget.\n";
    } else if (e > goal) {
        std::cout << "$" << (e - goal) << " over budget.\n";
    } else {
        std::cout << "$" << (goal - e) << " under budget.\n";
    }
    return;
}

void displayDiffs(MonthlyBudget b) {
    std::cout << "Budget Analysis\n"
                 "----------------------------------------------------\n";
    for (size_t i = 0; i < 10; i++) {
        std::cout << std::setw(18) << MonthlyBudgetLabels[i] << ": ";
        printCompare( *((double *)(&b) + i), *((double *)(&GOAL) + i) );
    }

    std::cout << "----------------------------------------------------\n"
                 "Overall Expenses:  ";
    printCompare( sum(b), sum(GOAL) );

    return;
}

// helper function for processMoney, determines if character is relevant to
// a number
bool isNotNumChar(char c) {
    static char number_chars[] = {'0', '1', '2', '3', '4', '5',
                                  '6', '7', '8', '9', '.'};
    return (std::count(number_chars, number_chars+11, c) == 0);
}

// takes a string supposedly containing a representation of an amount of money,
// removes all unnecessary characters, and tries to parse it as a double.
double processMoney(std::string raw) {
    // string to filled by remove_copy_if
    std::string processed (raw.size(), '\0');

    // remove non number-relavant characters
    std::remove_copy_if(raw.c_str(),
                        raw.c_str() + raw.size(),
                        processed.begin(),
                        isNotNumChar);

    // create stringstream based on processed
    std::istringstream iss (processed);

    // default value to be returned, if extraction fails (number not given)
    double money = 0.0;
    iss >> money;
    return roundToMoney(money);
}

MonthlyBudget makeMonthlyBudget() {
    MonthlyBudget b;

    std::cout << "Enter the amounts spent in each category.\n";

    for (size_t i = 0; i < 10; i++) {
        std::string unprocessed;
        std::cout << MonthlyBudgetLabels[i] << ": ";
        std::getline(std::cin, unprocessed);
        *((double *)(&b) + i) = processMoney(unprocessed);
    }

    std::cout << '\n';

    return b;
}


int main() {
    displayDiffs(makeMonthlyBudget()); // Functional Programming. Whoo.
    return 0;
}
