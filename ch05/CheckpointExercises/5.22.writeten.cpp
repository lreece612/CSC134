// Checkpoint Exercise 5.22
// Use a for-loop to write the numbers 1 through 10 to a file

#include <fstream>
#include <iostream> // need this for cerr
using namespace std;

int main( int argc, char* argv[] ) {
	const char* DEFAULT_FILE = "ten.txt";
	ofstream f;
	
	if ( argc > 1 ) {
		f.open( argv[1] );
	} else {
		f.open( DEFAULT_FILE );
	}
	
	if ( !f.good() ) { // if we encounter an error opening the file
		cerr << "Error opening \'" << ((argc > 1)? argv[1] : DEFAULT_FILE)
		     << "\'.\nMake sure the file doesn't already exist"
		        " or is write-accessible.";
		return 1;
	}
	
	// use short counter variable
	for ( unsigned short int n = 1 ; n <= 10 ; n++ ) { 
		f << n << ' ';
	}

	return 0;
}
