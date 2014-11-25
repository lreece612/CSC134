// Lab 3.5 Student Generated Code Assignments
// Option 2: The Woody furniture company sells the following three
// styles of chairs:
//
//             Style  Price Per Chair
// American Colonial  $ 85.00
//            Modern  $ 57.50
//  French Classical  $127.75
//
// Write a program that will input the amount of chairs sold for each style. It
// will print the total dollar sales of each style as well as the total sales 
// of all chairs in fixed point notation with two decimal places.
//
// written by Walter B. Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College

#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	const float chairPrices[3] = {85.00, 57.50, 127.75}; 
	int   chairsSold[3];   // number of each chair sold
	float orderPrices[3];  // cost of each part of the order
	float orderTotal;      // cost of entire order
	
	// get the ordered amounts
	cout << "Please input the number of American Colonial chairs sold" << endl;
	cin >> chairsSold[0];
	cout << "Please input the number of Modern chairs sold" << endl;
	cin >> chairsSold[1];
	cout << "Please input the number of French Classical chairs sold" << endl;
	cin >> chairsSold[2];
	
	// compute the cost of each part of the order
	for ( int i = 0; i < 3; i++ ) {
		orderPrices[i] = chairPrices[i] * chairsSold[i];
		orderTotal += orderPrices[i];
	}
	
	// print the 'sales receipt'
	cout << showpoint << fixed << setprecision(2) << right << setw(50)
	     << "The total sales of American Colonial chairs $" << orderPrices[0]
	     << endl << setw(50)
	     << "The total sales of Modern chairs $" << orderPrices[1]
	     << endl << setw(50)
	     << "The total sales of French Classical chairs $" << orderPrices[2]
	     << endl << setw(50)
	     << "The total sales of all chairs $" << orderTotal << endl;
	     
	return 0;
}
