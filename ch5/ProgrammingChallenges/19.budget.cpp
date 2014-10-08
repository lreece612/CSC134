// Programming Challenge 5.19 - Budget Analysis
//
// Write a program that asks the user to enter the amount that he or she has
// budgeted for a month. A loop should then prompt the user to enter each of
// his or her expenses for the month, and keep a running total. When the loop
// finishes, the program should display the amount that the user is over or
// under budget.
//
//
// written by Walter B. Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College

#include <iostream>
#include <iomanip>
#include <string>
#include <limits>    // for numeric_limits::max()
using namespace std;

struct Item {
	string description;
	double cost;
	Item*  next;
};

int main() {
	double budget = 0.00; // monthly budget amount in dollars
	
	// reusable input variables for expense descriptions and costs
	char   input_descr[64];
	double input_cost;
	
	Item* expense = 0; // pointer to first "expense"
	Item* currentItem; // pointer to the expense being input currently
	
	// opening prompt
	cout << "\n"
	        " **** Monthly Budget Analysis Tool ****\n"
	        "\n"
	        " Given a monthly budget, this tool will allow you to enter your\n"
	        " monthly expenses and calculate whether you are over or under\n"
	        " budget.\n"
	        "\n"
	        " Make sure your terminal window is at least 80 characters wide.\n"
	        "\n"
	        " Keep the descriptions of your expenses short (64 letter limit).\n"
	        " For example use, \'Car Payment\' instead of\n"
	        " \'Payment to Bob\'s Bargain Bugattis on my old 1956 Type 101\'.\n"
	        "\n"
	        " Omit commas when entering dollar amounts.\n"
	        "\n"
	        " When you are done entering expenses, enter an empty description\n"
	        " at the prompt.\n"
	        "\n";
	        

	// get user input for budget
	cout << "Enter your monthly budget: $ ";
	cin >> budget;
	cout << '\n';

	// expense input loop
	while ( true ) {	
		// prompt for a description of the expense, clearing cin
		cout << "Description of expense:\n";
		cin.clear();
		cin.ignore( numeric_limits<streamsize>::max() , '\n');
		cin.getline( input_descr, 65, '\n' );
		if ( !cin.good() ) { // if user input > 64 chars, reset stream
			cin.clear();
			cin.ignore( numeric_limits<streamsize>::max() , '\n');
		}
		
		// check to see if we're done with expenses input
		if ( !*input_descr ) {
			break;
		}
		
		// check for first expense in linked list, set up new expense
		if ( !expense ) {
			expense = new Item;
			currentItem = expense;
		} else {
			currentItem = currentItem->next;
		}
		currentItem->description = input_descr;
		
		// prompt for expense cost
		cout << "Enter the dollar amount for\n" << input_descr << ": $ ";
		cin >> input_cost;
		currentItem->cost = input_cost;
		cout << '\n';
		
		// set up the next expense
		currentItem->next = new Item;
	}
	
	if ( !expense ) return 0; // if no expenses created, just quit

/* visualization of each expense line, max 80 character width
-------------------------------- Expense Report --------------------------------
_dddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd_|_$_xxxxxx.xx_
_                                                            (64)_|_$_(9)      _
__________________________________________________________________|_____________
                                                           TOTAL  | $ 
*/	
	cout << "-------------------------------- Expense Report "
	        "--------------------------------\n"
	        << setw(68) << right << "|\n";
	
	// expense report loop
	currentItem = expense;
	double totalCost = 0.00;
	while ( currentItem->next ) {
		cout << setw(65) << right << currentItem->description
		     << " | $ " << setw(9) << left << fixed << setprecision(2)
		     << currentItem->cost << " \n"
		     << setw(68) << right << "|\n";
		totalCost += currentItem->cost;
		currentItem = currentItem->next;
	}
	
	// footer of report, total
	cout << "----------------------------------------------------------------"
	        "----------------\n"
	     << setw(68) << right << "|\n"
	     << setw(70) << right << "TOTAL EXPENSES  | $ "
	     << setw(9) << left << fixed << setprecision(2) << totalCost << "\n"
		 << setw(68) << right << "|\n"
	     << setw(70) << right << "BUDGET  | $ "
	     << setw(9) << left << fixed << setprecision(2) << budget << "\n"
	     << setw(68) << right << "|\n"
	     << setw(70) << right << "REMAINING IN BUDGET  | $ "
	     << setw(9) << left << fixed << setprecision(2) << (budget - totalCost)
	     << "\n" << setw(68) << right << "|\n"
	     << "----------------------------------------------------------------"
	        "----------------\n\n";
	
	// commentary on how well you budgeted
	if ( totalCost == budget ) {
		cout << "   Your budgeting is flawless.  :D\n\n";
	} else if ( totalCost > budget ) {
		cout << "   You were $ " << setprecision(2) << fixed
		     << (totalCost - budget) << " over-budget.  :(\n\n";
	} else {
		cout << "   You were $ " << setprecision(2) << fixed
		     << (budget - totalCost) << " under-budget.  :)\n\n";
	}

	return 0;
}
