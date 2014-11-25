// This program will take a number and divide it by 2.
//
// Walter Vaughan

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	float number;
	int divider;
	
	divider = 2;
	
	cout << "Hi there" << endl;
	cout << "Please input a number and then hit return" << endl;
	cin  >> number;
	
	number = number / divider;
	
	cout << "Half of your number is " << number << endl;

	return 0;
}
