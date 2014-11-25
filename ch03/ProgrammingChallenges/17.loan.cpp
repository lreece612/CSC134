// Programming Challenge 3.17 - Monthly Payments
//
// The monthly payment on a loan may be calculated by the following formula:
//
//            Rate * (1 + Rate)^N
// Payment = --------------------- * L
//             ((1 + Rate)^N - 1)
//
// Rate is the monthly interest rate, which is the annual interest rate divided
// by 12. (12% annual interest would be 1 percent monthly interest.) N is the
// number of payments and L is the amount of the loan. Write a program that asks
// for these values and displays a report similar to:
//
// Loan Amount:            $ 10000.00
// Monthly Interest Rate:          1%
// Number of Payments:             36
// Monthly Payment:        $   332.14
// Amount Paid Back:       $ 11957.15
// Interest Paid:          $  1957.15
//
// written by Walter Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	double loanAmt, rate;    // input variables 
	int    numPayments;
	
	double monthlyPayment;   // output variable
	
	// gather input
	cout << "Enter the Loan Amount: ";
	cin >> loanAmt;
	cout << "Enter the Monthly Interest Rate (as a decimal): ";
	cin >> rate;
	cout << "Enter the desired number of payments: ";
	cin >> numPayments;
	
	// generate the exact amount
	monthlyPayment = (rate * pow(1+rate, numPayments))
	                 / (pow(1+rate, numPayments) - 1)
	                 * loanAmt;
	
	// we need to round up the amount (in cents) because financial companies
	// like to pull that shit. If we round down the amount, we could end up 
	// paying too little to match the total interest amount, and if we don't 
	// round at all, our payments will not sum to the calculated interest rate.
	monthlyPayment = ceil( monthlyPayment * 100.0 ) / 100.0;
	
	// output the financial data
	cout << "Loan Amount:            $" 
	     << setw(9) << fixed << setprecision(2) // formatting
	     << loanAmt << endl;
	cout << "Monthly Interest Rate: "
	     << setw(9) << fixed << setprecision(2)
	     << rate * 100 << " %" << endl;
	cout << "Number of Payments:      "
	     << setw(9) << numPayments << endl;
	cout << "Monthly Payment:        $"
	     << setw(9) << fixed << setprecision(2) 
	     << monthlyPayment << endl;
	cout << "Amount Paid Back:       $"
	     << setw(9) << fixed << setprecision(2)
	     << monthlyPayment * numPayments << endl;
	cout << "Interest Paid:          $"
	     << setw(9) << fixed << setprecision(2)
	     << ( monthlyPayment * numPayments ) - loanAmt << endl;

	return 0;
}
