// kilotomiles.cpp
//
// This program takes a number representing kilometers
// and writes the conversion of the number to miles.
// 
// written by Walter Vaughan for CSC 134 section 200, Fall 2014

#include <iostream>
using namespace std; 

int main()
{
	float km;                 // stores the input number of kilometers
	const float c = 0.621371; // conversion factor for km -> mi 
	
	// get the number to be converted from the user
	cout << "Enter a distance in kilometers then hit return..." << endl;
	cin  >> km;
	
	// send that back to them multiplied by the conversion factor
	cout << km << " km = " << km * c << " mi. " << endl;

	// exit successfully
	return 0;
}
