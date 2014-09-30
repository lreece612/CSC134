// This program finds the average time spent programming and studying
// biology by a student each day over a given n-day period.
//
// Walter B. Vaughan

#include <iostream>
using namespace std;

int main()
{
	int numStudents;
	float p_numHours, p_total, p_average; // values for programming
	float b_numHours, b_total, b_average; // values for biology
    int student,day = 0;     // these are the counters for the loops
    
    int n; // number of days in the long weekend, added for Exercise 1.

	cout << "This program will find the average number of hours a day" 
            " that a student spent programming and studying biology over a"
            " long weekend\n\n";
    cout << "How many students are there ?" << endl;
    cin >> numStudents; 
    // added for Exercise 1
    cout << "Enter the number of days in the long weekend" << endl;
    cin >> n;
       
    for( student = 1; student <= numStudents; student++)
    {
		p_total = b_total = 0;
		for(day = 1; day <= n; day++)
		{
			cout << "Please enter the number of hours spent programming by "
			        "student " << student <<" on day " << day << "." << endl;
            cin >> p_numHours;
            cout << "Please enter the number of hours spent studying biology "
			        "by student " << student <<" on day " << day << "." << endl;
            cin >> b_numHours;

            p_total = p_total + p_numHours;
            b_total = b_total + b_numHours;
		}

		p_average = p_total / n;
		b_average = b_total / n;

		cout << endl;
		cout << "The average number of hours per day spent programming by "
		     << "student " << student << " is " << p_average
		     << endl
		     << "The average number of hours per day spent studying biology "
		     << "student " << student << " is " << b_average
		     << endl;
		
		if ( p_average > b_average ) {
			cout << "The student spent more time programming than studying"
			        " biology."
			     << endl << endl << endl;
		} else {
			cout << "The student spent more time studying biology than"
			        " programming."
			     << endl << endl << endl;
		}
	}

	return 0;	
}
