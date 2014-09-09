// Checkpoint Exercise 3.6
//
// written by Walter Vaughan

#include <iostream>
using namespace std;

int main()
{
	double pounds, kilograms;
	
	// Write code here that prompts the user
	// to enter his or her weight and reads
	// the input into the pounds variable.
	cout << "Enter your weight, in lbs (leaving out 'lbs' at the end): ";
	cin >> pounds;
	
	// The following line does the conversion.
	kilograms = pounds / 2.2;
	
	// Write code here that displays the user's weight
	// in kilograms.
	cout << pounds << " lbs = " << kilograms << "kg.\n";
	return 0;
}
