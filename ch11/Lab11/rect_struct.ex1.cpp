// This program uses a structure to hold data about a rectangle
// Walter B. Vaughan

#include <iostream>
#include <iomanip>
using namespace std;

// FILL IN CODE TO define a structure named rectangle which has
// members length, width, area, and perimeter all of which are floats
struct Rectangle {
    float length;
    float width;
    float area;
    float perimeter;
};

int main()
{
    // Fill IN CODE to declare a rectangle variable named box
    Rectangle box;

    cout << "Enter the length of a rectangle: ";

	// FILL IN CODE to read in the length member of box
    cin >> box.length;

	cout << "Enter the width of a rectangle: ";

	// FILL IN CODE to read in the width member of box
    cin >> box.width;

	cout << endl << endl;

	// FILL IN CODE to compute the area member of box
    box.area = box.width * box.length;
	// FILL IN CODE to compute the perimeter member of box
    box.perimeter = box.width + box.width + box.length + box.length;

	cout << fixed << showpoint << setprecision(2);

    // FILL IN CODE to output the area with an appropriate message
    cout << "The area of the rectangle is " << box.area << '\n';
	// FILL IN CODE to output the perimeter with an appropriate message

    cout << "The perimeter of the rectangle is " << box.perimeter << '\n';

	return 0;
}
