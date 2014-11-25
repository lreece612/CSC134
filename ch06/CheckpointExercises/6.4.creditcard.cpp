// Checkpoint Exercise 6.4 - Credit Card Qualification Questionnaire

#include <iostream>
using namespace std;

// You must write definitions for the two functions qualify
// and noQualify.
void qualify() {
	cout << "You qualify for a new credit card with an annual interest rate"
	        " of only 12% !\n";
} void noQualify() {
	cout << "Sorry, you do not meet the credit requirements. Your salary is\n"
	        "too low, or you have not been working long enough.\n";
}

int main() {
	double salary;
	int years;
	
	cout << "This program will determine if you qualify\n";
	cout << "for our credit card.\n";
	cout << "What is your annual salary? ";
	cin >> salary;
	cout << "How many years have you worked at your ";
	cout << "current job? ";
	cin >> years;
	if (salary >= 17000.0 && years >= 2)
		qualify();
	else
		noQualify();
	return 0;
}
