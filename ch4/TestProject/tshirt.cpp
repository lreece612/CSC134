// Chapter 4 Test - Programming Project
//  based off of 4.5.shirts.cpp from Lab 4.5 Option 2
// 
// *** Use a Named Constant for the price of a t-shirt. ***
//
// Your screenshot(s) must show the four sample runs from the lab exercise.
// Be sure to include the Invalid Input run.
//
// written by Walter B. Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College


//* my implementation was made so that the number, amount, and applicability
//* of discounts is easily changed. Simply modify the first set of constants.


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	// this gives the discounted rates, and required quantities
	const int NUM_DISCOUNTS = 5;
	const double discount[NUM_DISCOUNTS]  = { 1.00, .90, .85, .80, .75 };
	const int min_quantity[NUM_DISCOUNTS] = {    1,   5,  11,  21,  31 };
	
	// base cost of the shirt, Named Constant
	const double baseCost = 12.00;
	
	double unitCost = 0.00;  // unit cost per shirt
	int    numShirts;        // number of t-shirts to be ordered
	double totalCost;        // total cost of the order
	
	// gather user input
	cout << "How many shirts would you like ?\n";
	cin >> numShirts;
	
	// determine discount based on order quantity. first check for negative
	// input, otherwise descend through the possible discounts, starting with the
	// best discount and applying the best discount applicable, stopping
	// once we find that discount.
	if (numShirts < 0) {
		cout << endl << "** Invalid Input: "
		     << "Please enter a non-negative integer amount. **" << endl;
		return 1;
	} else {
		for ( int i = NUM_DISCOUNTS-1 ; i >= 0 ; i-- ) {
			if (numShirts >= min_quantity[i]) {
				unitCost = baseCost * discount[i];
				break; 
			}
		}
	}
	
	// calculate totalCost
	totalCost = unitCost * numShirts;
	
	// give results
	cout << "The cost per shirt is $" << fixed << setprecision(2)
	     << unitCost
	     << " and the total cost is $" << fixed << setprecision(2)
	     << totalCost << endl;
	
	return 0;
}
