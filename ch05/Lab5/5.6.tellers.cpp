// Lab 5.6 - Student Generated Code Assignments
//
// Option 3: Write a program that prompts the user for the number of tellers at
// Nation’s Bank in Hyatesville that worked each of the last three years. For
// each worker the program should ask for the number of days out sick for
// each of the last three years. The output should provide the number of
// tellers and the total number of days missed by all the tellers over the last
// three years.
//    See the sample output below: 
//
//   How many tellers worked at Nation’s Bank during each of the last three years ?
//   2
//   How many days was teller 1 out sick during year 1 ?
//   5
//   How many days was teller 1 out sick during year 2 ?
//   8
//   How many days was teller 1 out sick during year 3 ?
//   2
//   How many days was teller 1 out sick during year 1 ?
//   1
//   How many days was teller 1 out sick during year 2 ?
//   0
//   How many days was teller 1 out sick during year 3 ?
//   3
//
//   The 2 tellers were out sick for a total of 19 days during the last 3 years.
//
//
// written by Walter B. Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College

#include <iostream>
#include <list>
using namespace std;

int main() {
	// use this for storing sick days and number of tellers, since neither
	// could possibly exceed 65355 and it's ~optimised~ (spooky noises)
	typedef unsigned short int s_int;

	int          num_tellers;
	unsigned int sick_days = 0;
	
	cout << "How many tellers worked at Nation’s Bank during each of the last"
	        " three years ?\n";
	cin >> num_tellers;
	
	// can't have 0 or a negative number of tellers. that would be spooky
	if (num_tellers < 1) {
		cerr << "That's not very many tellers. Try an input of at least 1\n";
		return 1;
	}

	for ( s_int teller = 1 ; teller <= num_tellers ; teller++ ) {
		for ( s_int year = 1 ; year < 4 ; year++ ) {
			int days = 0;
			cout << "How many days was teller " << teller
			     << " out sick during year " << year << " ?\n";
			cin >> days;
			sick_days += days; 
		}
	} 
	
	cout << "\nThe " << num_tellers << " tellers were out sick for a total of "
	     << sick_days << " days during the last 3 years.\n";
	
	return 0;
}
