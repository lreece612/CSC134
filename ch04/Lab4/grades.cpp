// This program prints "You Pass" if a student's average is 
// 60 or higher and prints "You Fail" otherwise
//
// Walter B. Vaughan

#include <iostream>
using namespace std;

int main()
{
	float average;  // holds the grade average

	cout << "Input your average:" << endl;
	cin >> average;

	if (average > 100)
		cout << "Invalid data." << endl;
	else if (average >= 90)
		cout << "You get an A." << endl;
	else if (average > 80)
		cout << "You get a B." << endl;
	else if (average >= 60)
		cout << "You Pass" << endl;
	else if (average >= 0)
		cout << "You Fail" << endl;

    return 0;
}
