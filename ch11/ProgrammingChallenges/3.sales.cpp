// Programming Challenge 11.3 - Corporate Sales Data
// Write a program that uses a structure to store the following data on a
// company division:
//
//   - Division Name (such as East, West, North, or South)
//   - First-Quarter Sales
//   - Second-Quarter Sales
//   - Third-Quarter Sales
//   - Fourth-Quarter Sales
//   - Total Annual Sales
//   - Average Quarterly Sales
//
// The program should use four variables of this structure. Each variable
// should represent one of the following corporate divisions: East, West,
// North, and South. The user should be asked for the four quarters' sales
// figures for each division. Each division's total and average sales
// should be calculated and stored in the appropriate member of each
// structure variable. These figures should then be displayed on the screen.
//
// **Input validation: Do not accept negative numbers for any sales figures**
//
//
// written by Walter B. Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College

#include <iostream>
#include <cstring>
using std::cout;
using std::cin;

struct CompanyDivision {
    char name[6];
    double qtr_sales[4];
    double annual_sales;
    double avg_qtr_sales;
public:
    CompanyDivision(const char* _name)
    {
        strncpy(name, _name, 5);
        name[5] = '\0'; // strncpy doesn't include null byte

        for (short i = 0; i < 4; i++ ) {
            cout << name << " Q" << (i+1) << " Sales: ";
            do {
                cin >> qtr_sales[i];
            } while (qtr_sales[i] < 0);
            annual_sales += qtr_sales[i];
        }
        avg_qtr_sales = annual_sales / 4;
    }

    //TODO: finish print() Method
    void print()
    {
        ;
    }
};

int main()
{
    CompanyDivision n ( "North" );
    CompanyDivision s ( "South" );
    CompanyDivision e ( "East" );
    CompanyDivision w ( "West" );


    return 0;
}
