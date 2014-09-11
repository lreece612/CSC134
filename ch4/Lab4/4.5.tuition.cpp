// Lab 4.5 - Student Generated Code Assignments
// 
// Option 3: The University of Guiness charges $3000 per semester for in-state
// tuition and $4500 per semester for out-of-state tuition. In addition, room
// and board is $2500 per semester for in-state students and $3500 per semester
// for out-of-state students. Write a program that prompts the user for their
// residential status (i.e., in-state or out-of-state) and whether they
// require room and board (Y or N). The program should then compute and
// output their bill for that semester.
//
//
// written by Walter B. Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College

#include <iostream>
using namespace std;

int main() {
	char state, housing;  // tuition classification and housing requirements
	int cost = 3000;      // baseline cost of college

	cout << "Please input \"I\" if you are in-state"
	     << " or \"O\" if you are out-of-state:\n";
	cin >> state;
	
	cout << "\nPlease input \"Y\" if you require room and board"
	     << " and \"N\" if you do not:\n";
	cin >> housing;
	
	if ( state == 'O' ) {
		cost += 1500;
		if ( housing == 'Y' ) cost += 3500;
	} else {
		if ( housing == 'Y' ) cost += 2500;
	}
	
	cout << "\nYour total bill for this semester is $" << cost << '\n';
	
	return 0;
}
