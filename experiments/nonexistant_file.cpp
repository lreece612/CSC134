// testing whether or not you can read from a file that doesn't exist

#include <fstream>
#include <iostream>
using namespace std;

int main( int argc, char* argv[] ) {
	ifstream f;

	if ( argc > 1 ) {
		f.open(argv[1]);
	} else {
		cerr << "Error: missing argument for file to read.\n"
		        "\n"
		        "  usage: " << argv[0] << " [file] \n";
		return 1;
	}
	
	cout << "Did it open successfully? f.good() = "
	     << static_cast<bool>( f.good() ) << '\n';
	     
	cout << "Trying to read the first byte of the file...\n";
	char input_byte;
	f >> input_byte;
	cout << "input_byte = " << static_cast<int>(input_byte) << " ... "
	     << "f.good() = " << static_cast<bool>( f.good() ) << '\n';

	return 0;
}
