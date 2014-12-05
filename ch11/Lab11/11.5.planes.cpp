// Lab 11.5 - Student Generated Code Assignments
//
// Option 2: Write a program that uses a structure to store the following
// information for a particular month at the local airport:
//
//   - Total number of planes that landed
//   - Total number of planes that departed
//   - Greatest number of planes that landed in a given day that month
//   - Least number of planes that landed in a given day that month
//
// The program should have an array of twelve structures to hold travel
// information for the entire year. The program should prompt the user to enter
// data for each month. Once all data is entered, the program should calculate
// and output the average monthly number of landing planes, the average monthly
// number of departing planes, the total number of landing and departing planes
// for the year, and the greatest and least number of planes that landed on any
// one day (and which month it occurred in).
//
//
//     Note: I really don't like the style I did this in, but I am blaming
//   it on the eye-clawingly boring and redundant problems this book's author
//   picks. It feels like I have literally answered the same shitty problem 100
//   different times, occasionally using different names for what I'm summing,
//   averaging, or performing the same thinly-veiled operation upon again.
//
// written by Walter B. Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College
#include <iostream>
#include <iomanip>  // for setprecision

struct MonthData {
    unsigned long landed;
    unsigned long departed;
    unsigned long maxDailyLanded;
    unsigned long minDailyLanded;
};

const unsigned NUM_MONTHS = 12;

MonthData getMonthData(unsigned month) {
    MonthData d;

    std::cout << "Enter the total number of planes that landed in month "
              << month << ": ";
    std::cin >> d.landed;
    std::cout << "Enter the total number of planes that departed in month "
              << month << ": ";
    std::cin >> d.departed;
    std::cout << "Enter the greatest number of planes"
              << " to land in a day during month " << month << ": ";
    std::cin >> d.maxDailyLanded;
    std::cout << "Enter the least number of planes"
              << " to land in a day during month " << month << ": ";
    std::cin >> d.minDailyLanded;
    std::cout << '\n';

    return d;
}

int main() {
    // declare data
    MonthData data[NUM_MONTHS];

    // get data
    for (unsigned m = 0; m < NUM_MONTHS; m++) {
        data[m] = getMonthData(m+1);
    }

    // calculate data
    unsigned long totalLanded = 0;
    unsigned long totalDeparted = 0;
    unsigned maxLandedMonth = 0;
    unsigned minLandedMonth = 0;
    for (unsigned m = 0; m < NUM_MONTHS; m++) {
         totalLanded   += data[m].landed;
         totalDeparted += data[m].departed;
         if (m != 0) { // don't do unnecessary comparison on first month
             if (data[m].maxDailyLanded > data[maxLandedMonth].maxDailyLanded) {
                 maxLandedMonth = m;
             }
             if (data[m].minDailyLanded < data[minLandedMonth].minDailyLanded) {
                 minLandedMonth = m;
             }
         }
    }

    // regurgitate data
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Average number of planes landed per month: "
              << (static_cast<float>(totalLanded) / NUM_MONTHS) << '\n';
    std::cout << "Average number of planes departed per month: "
              << (static_cast<float>(totalDeparted) / NUM_MONTHS) << '\n';
    std::cout << "Total number of planes landed: " << totalLanded << '\n';
    std::cout << "Total number of planes departed: " << totalDeparted << '\n';
    std::cout << "Greatest number of planes landed on one day: "
              << data[maxLandedMonth].maxDailyLanded
              << " (Month " << maxLandedMonth << ")\n";
    std::cout << "Least number of planes landed on one day: "
              << data[minLandedMonth].minDailyLanded
              << " (Month " << minLandedMonth << ")\n";

    // cry a little on the inside at how monotonous this class turned out to be
    return 0;
}
