// This program will write the name, address and telephone 
// number of the programmer.

// Walter Vaughan

#include <iostream>
using namespace std;

int main() {
	const char* CONTACT_INFO = "************\n"
	                            "      Programmer: Walter Vaughan\n"
	                            "                  1600 Pennsylvania Avenue NW\n"
	                            "                  Washington, DC 20500\n"
	                            "\n"
	                            "       Telephone: (828)464-5241\n"
	                            "\n"
	                            "************\n";
	cout << CONTACT_INFO; 
	return 0;
}
