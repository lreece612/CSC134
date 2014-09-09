// Lab 3.5 Student Generated Code Assignments
// Option 3: Write a program that will input total sales (sales plus tax) that a
// business generates for a particular month. The program will also input the
// state and local sales tax percentage. It will output the total sales plus the
// state tax and local tax to be paid. The output should be in fixed notation
// with 2 decimal places.
//
// written by Walter B. Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College

#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	float sales;                 // amount to be taxed
	float state_tax, local_tax;  // tax rates
	
	// gather our input information
	cout << "Please input the total sales for the month" << endl;
	cin >> sales;
	cout << "Please input the state tax percentage" 
	     << "in decimal form (.02 for 2%)" << endl;
	cin >> state_tax;
	cout << "Please input the local tax percentage" 
	     << "in decimal form (.02 for 2%)" << endl;
	cin >> local_tax;
	
	// output the tax amounts
	cout << fixed << showpoint << setprecision(2)
	     << "The total sales for the month is $" << sales << endl;
	cout << "The state tax for the month is $" << sales * state_tax << endl;
	cout << "The local tax for the month is $" << sales * local_tax << endl;
	
	return 0;
}
