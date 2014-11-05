// Programming Challenge 7.2 - Rainfall Statistics
//
// Write a program that lets the user enter the total rainfall for each of 12
// months into an array of doubles. The program should calculate and display the
// total rainfall for the year, the average monthly rainfall, and the months
// with the highest and lowest amounts.
//
// **Input Validation**
// Do not accept negative numbers for monthly rainfall figures.
//
// written by Walter B. Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College

#include <iostream>
#include <deque>

const char* m_names[] = { "January",
                          "February",
                          "March",
                          "April",
                          "May",
                          "June",
                          "July",
                          "August",
                          "September",
                          "October",
                          "November",
                          "December" };

int main() {
    double rainfall[12];

    // first rainfall amt entered will be initial max and min
    std::deque<int> maxs (1,0), mins (1,0);

    double total = 0.0;

    std::cout << "Enter the rainfall amount for each month.\n";
    std::cout << " Note: Do not enter a negative amount.\n\n";

    for ( int m = 0 ; m < 12 ; m++ ) {
        std::cout << "Enter rainfall amount for " << m_names[m]
                  << ": ";
        std::cin >> rainfall[m];

        // input validation
        if ( rainfall[m] < 0 ) {
            std::cerr << "**Invalid input** Recieved: " << rainfall[m] << '\n';
            m--; // make sure we try this month again
            continue;
        }

        // if a month is the same as a max/min, add it to the deque
        // if it's more extreme, then replace the deque with it
        // the part after the 'and' keeps the first month from being added twice
        if ( rainfall[m] == rainfall[maxs.front()] and m != maxs.front() ) {
            maxs.push_back(m);
        } else if ( rainfall[m] > rainfall[maxs.front()] ) {
            maxs = std::deque<int>(1,m);
        }

        if ( rainfall[m] == rainfall[mins.front()] and m != mins.front() ) {
            mins.push_back(m);
        } else if ( rainfall[m] < rainfall[mins.front()] ) {
            mins = std::deque<int>(1,m);
        }

        total += rainfall[m];
    }

    std::cout << "\nTotal Rainfall for the Year: " << total << '\n';
    std::cout << "Average Monthly Rainfall: " << (total / 12.0) << '\n';

    std::cout << "Highest: " << m_names[maxs.front()];
    double max_amt = rainfall[maxs.front()];
    maxs.pop_front();
    while ( maxs.size() > 0 ) {
        std::cout << ", " << m_names[maxs.front()];
        maxs.pop_front();
    }
    std::cout << " = " << max_amt << '\n';

    std::cout << "Lowest: " << m_names[mins.front()];
    double min_amt = rainfall[mins.front()];
    mins.pop_front();
    while ( mins.size() > 0 ) {
        std::cout << ", " << m_names[mins.front()];
        mins.pop_front();
    }
    std::cout << " = " << min_amt << '\n';

    return 0;
}
