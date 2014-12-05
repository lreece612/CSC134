// This program uses a structure to hold data about a rectangle
// It calculates the area and perimeter of a box
//
// Walter B. Vaughan

#include <iostream>
#include <iomanip>
using namespace std;

// Fill in code to define a structure named dimensions that
// contains 2 float members, length and width
struct dimensions {
    float length;
    float width;
};

// ADDED FOR EXERCISE 2
struct results {
    float area;
    float perimeter;
};

// Fill in code to define a structure named rectangle that contains
// 3 members, area, perimeter, and sizes.  area and perimeter should be
// floats, whereas sizes should be a dimensions structure variable
// MODIFIED FOR EXERCISE 2
struct rectangle {
    dimensions sizes;
    results    computed;
};

// ADDED FOR EXERCISE 3
void computeArea(rectangle *r)
{
    r->computed.area = r->sizes.length * r->sizes.width;
}
void computePerimeter(rectangle *r)
{
    r->computed.perimeter = (r->sizes.length * 2) + (r->sizes.width * 2);
}

int main()
{
    // Fill in code to declare a rectangle structure variable named box.
    rectangle box;

    cout << "Enter the length of a rectangle: ";

    // Fill in code to read in the length to the appropriate location
    cin >> box.sizes.length;

    cout << "Enter the width of a rectangle: ";

    // Fill in code to read in the width to the appropriate location
    cin >> box.sizes.width;

    cout << endl << endl;

    // Fill in code to compute the area and store it in the appropriate
    // location
    // MODIFIED FOR EXERCISE 3
    computeArea(&box);
    // Fill in code to compute the perimeter and store it in the
    // appropriate location
    // MODIFIED FOR EXERCISE 3
    computePerimeter(&box);

    cout << fixed << showpoint << setprecision(2);
    cout << "The area of the rectangle is " << box.computed.area << endl;
    cout << "The perimeter of the recangle is " <<  box.computed.perimeter
         << endl;

    return 0;
}
