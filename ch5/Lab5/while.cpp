// Walter B. Vaughan

#include <iostream>
using namespace std;

int main()
{
	char letter = 'a';

	
	do {
		cout << "Please enter a letter. Entering 'x' will end the program."
		     << endl;
		cin >> letter;
		cout << "The letter you entered is " << letter << endl;
	} while (letter != 'x');

	return 0;	
}
