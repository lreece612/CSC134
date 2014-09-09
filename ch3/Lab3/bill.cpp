// This program will read in the quantity of a particular item and its price.
// It will then print out the total price.
// The input will come from the keyboard and the output will go to
// the screen.
//
// Walter Vaughan

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int   quantity;   // contains the amount of items purchased
	float itemPrice;  // contains the price of each item
	float totalBill;  // contains the total bill.  
	
	char item[128];   // added for exercise 4, contains item name

	cout << setprecision(2) << fixed << showpoint;  // formatted output

	// for exercise 4
	// NOTE: item name will be truncated at 128 characters.
	cout << "Please input the name of the item" << endl;
	cin.getline( item, 128, '\n' );

	cout << "Please input the number of items bought" << endl;   

	// Fill in the input statement to bring in the quantity. 
	cin >> quantity;

	// Fill in the prompt to ask for the price.
	cout << "Please input the price of the item" << endl;
	
	// Fill in the input statement to bring in the price of each item.
	cin >> itemPrice;

	// Fill in the assignment statement to determine the total bill.
	totalBill = quantity * itemPrice;

	// for exercise 4
	cout << "The item that you bought is " << item << endl;
	
	// Fill in the output statement to print total bill,
	// with a label to the screen.
	cout << "The total bill is $" << totalBill << endl;

	return 0;
}
