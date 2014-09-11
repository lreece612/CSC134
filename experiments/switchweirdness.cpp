#include <iostream>
using namespace std;

int main() {
	const int temp = 3;
	
	switch (1) {
/*		case (temp < 0) : cout << "temp is negative.\n";
		                  break;
*/		case (temp == 0): cout << "temp is zero.\n";
		                  break;
		case (temp > 0) : cout << "temp is positive.\n";
		                  break;	
	}
	
	
}
