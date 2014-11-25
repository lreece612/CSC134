// This program tests whether or not an initialized value
// is equal to a value input by the user 
//
// Walter B. Vaughan

#include <iostream>
using namespace std;

int main( )
{
	int num1, num2;  // integers that will be input by the user

	cout << "Please enter two integers separated by a space or newline" << endl;
	cin >> num1 >> num2;

	cout << "num1 = " << num1 << " and num2 = " << num2 << endl;

	if (num1 == num2)
		cout << "The values are the same." << endl
		     << "Hey that's a coincidence!" << endl; 	
	else
		cout << "The values are not the same" << endl;
	
    return 0;
}
