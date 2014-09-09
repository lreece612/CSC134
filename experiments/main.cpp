#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout << setw(9) << setprecision(2) << 34.789 << endl;
	cout << setw(5) << fixed << showpoint << setprecision(3) << 7.0 << endl;
	cout << fixed << 5.789e+12 << endl;
	cout << left << setw(7) << 67 << endl;
}
