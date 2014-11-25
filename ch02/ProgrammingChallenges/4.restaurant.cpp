// Programming Challenge 2.4. Restaurant Bill
//
// Write a program that computes the tax and tip on a restaurant bill for a
// patron with a $44.50 meal charge. The tax should be 6.75 percent of the meal
// cost. The tip should be 15 percent of the total after adding the tax.
// Display the meal cost, tax amount, tip amount, and total bill on the screen.
//
//
// written by Walter Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double meal = 44.50;        // meal cost before tax/tips
	double const TAX = 0.0675;  // percentage coefficient added for tax
	double const TIP = 0.15;    // percentage coefficient you tip
	double subtotal, total;     // resulting bill totals, in cents
	
	// our 'reciept' of output values
	cout << " Meal Cost: $"
	     << fixed << showpoint << setprecision(2) // formatting
	     << setw(7) << meal << endl;
	cout << "Tax Amount: $" << setw(7) << meal * TAX << endl;

	subtotal =  meal * TAX + meal; // do the tax calculation

	cout << "--------------------" << endl;
	cout << "  Subtotal: $" << setw(7) << subtotal << endl;
	cout << "Tip Amount: $" << setw(7) << subtotal * TIP << endl;

	total = subtotal * TIP + subtotal; // do the same for tips

	cout << "--------------------" << endl;
	cout << " Total Due: $" << setw(7) << total << endl;

	return 0;
}
