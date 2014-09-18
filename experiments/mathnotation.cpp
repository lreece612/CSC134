#include <iostream>

int main() {
	int n = 5;
	int m = 2;
	
	if ( 6 <= m <= n ) {
		std::cout << "did this work?\n"; // always seems to jump to this one...
	} else {
		std::cout << "idunno.jpg\n";
	}
	
	return 0;
}
