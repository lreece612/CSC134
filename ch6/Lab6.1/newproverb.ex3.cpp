// This program will allow the user to input from the keyboard
// how the following proverb should end:
// "Now is the time for all good men to come to the aid of their _______"
// Only the first word will be used.
//
// Walter B. Vaughan

#include <iostream>
#include <string>
using namespace std;

// Fill in the prototype of the function writeProverb.
void writeProverb( string );

int main ()
{	
	string word;

	cout << "Given the phrase:" << endl;
	cout << "Now is the time for all good men to come to the aid of their ___" << endl;
	cout << "Please input the word you would like to have finish the proverb" << endl;
	cin  >> word;
	cout << endl;
	writeProverb(word);

	return 0;
}


//  ******************************************************************************
//                            writeProverb
//   
//   task:      This function prints a proverb. The function prints "Now is the time 
//              for all good men to come men to come to the aid of their " and then
//              prints the ending of the phrase given as an argument.
//   data in:   the ending word of the proverb. (string)
//   data out:  none
//
//   *****************************************************************************
void writeProverb (string ending)
{
	// Fill in the body of the function to accomplish what is described above
	cout << "Now is the time for all good men"
	        " to come to the aid of their " << ending << "\n";
}


