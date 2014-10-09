// Checkpoint Exercise 5.23
// Read the numbers in from file generated in exercise 5.22 and
// output those numbers to the screen.

#include <fstream>
#include <iostream> // need this for cerr and cout
using namespace std;

int main( int argc, char* argv[] ) {
	const char* DEFAULT_FILE = "ten.txt";
	ifstream f;
	
	if ( argc > 1 ) {
		f.open( argv[1] );
	} else {
		f.open( DEFAULT_FILE );
	}
	
	if ( !f.good() ) { // if we encounter an error opening the file
		cerr << "Error opening \'" << ((argc > 1)? argv[1] : DEFAULT_FILE)
		     << "\'.\nMake sure the exists and is read-accessible.";
		return 1;
	}
	
	int num_in;  // variable that holds each character read-in.
	while ( f.good() ) {
		f >> num_in;
		if ( f.good() ) {
			cout << num_in << '\n';
		}
	}

	return 0;
}
