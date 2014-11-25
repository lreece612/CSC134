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
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

// toDollars turns an integer cent amount into a pretty little string
// that takes up exactly 7 characters, assuming you give it less than $1000.00
// If the amount is >$1000,00 then you'll just have a wider number.
string toDollars( int cents ) {
	string dollars;           // what we're going to return
	string prefix;            // a the amount of padding for proper format
	ostringstream converter;  // intermediate variable for conversion

	// convert amount to stream using sstream library
	converter << cents;

	// then convert that stream to the string we need
	dollars = converter.str();

	// this structure handles padding in front of the number
	if ( cents < 0 ) {
		// this is not designed to handle negatives. this problem
		// would be better addressed by changing types to unsigned
		// but this program is already needlessly complicated.
		return " Nope! ";
	} else if ( cents < 10 ) {
		prefix = "$  0";          // same prefix as <100
		dollars = "0" + dollars;  // but we also need that leading zero
	} else if ( cents < 100 ) {
		prefix = "$  0";          // need a 0 before the decimal
	} else if ( cents < 1000 ) {
		prefix = "$  ";           // need two spaces
	} else if ( cents < 10000 ) {
		prefix = "$ ";            // only need one
	} else {
		prefix = "$";             // this catches everything else
	}

	// now, modify dollars to be printed correctly by squeezing a . before
	// the last two characters in the string and adding the prefix
	dollars = prefix + dollars.substr( 0 , dollars.size() - 2 ) + '.'
	           + dollars.substr( dollars.size() - 2 , dollars.size() );

	return dollars;
}

int main() {
	int meal = 4450;           // meal cost before tax/tips, in cents
	double const TAX = 0.0675; // percentage coefficient added for tax
	double const TIP = 0.15;   // percentage coefficient you tip
	int subtotal, total;       // resulting bill totals, in cents
	
	// our 'reciept' of output values
	cout << " Meal Cost: " << toDollars( meal ) << endl;
	cout << "Tax Amount: " << toDollars( round( meal * TAX ) ) << endl;

	subtotal = round( meal * TAX + meal ); // do the tax calculation

	cout << "-------------------" << endl;
	cout << "  Subtotal: " << toDollars( subtotal ) << endl;
	cout << "Tip Amount: " << toDollars( round( subtotal * TIP ) ) << endl;

	total = round( subtotal * TIP + subtotal ); // do the same for tips

	cout << "-------------------" << endl;
	cout << " Total Due: " << toDollars( total ) << endl;

	return 0;
}
