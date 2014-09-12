// Programming Challenge 4.5 - Body Mass Index
//
// Write a Program that calculates and displays a person's body mass index
// (BMI). The BMI is often used to determine whether a person with a sedentary
// lifestyle is overweight or underweight for his or her height. A person's BMI
// is calculated with the following formula:
//
//     BMI = weight x 703 / height^2
//
// where weight is measured in pounds and height is measured in inches. The
// program should display a message indicating whether the person has optimal
// weight, is under-weight, or is overweight. A sedentary person's weight is
// consiered to be optimal if his or her BMI is between 18.5 and 25. If the BMI
// is greater than 25, the person is considered to be overweight.
//
//
// written by Walter B. Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double weight, height, bmi;
	
	cout << "Enter your weight in lbs: ";
	cin >> weight;
	cout << "Enter your height in inches: ";
	cin >> height;

	bmi = weight * 703 / pow(height,2);
	
	cout << "\nBMI: " << bmi << "\n";
	
	if ( bmi < 18.5 )
		cout << "You are underweight.\n";
	else if ( bmi <= 25 )
		cout << "You are at an optimal weight.\n";
	else
		cout << "You are overweight.\n";

	return 0;
}
