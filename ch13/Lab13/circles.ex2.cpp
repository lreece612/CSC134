// Walter B. Vaughan
#include <iostream>
using namespace std;
//_________________________________________________________________________
// This program declares a class for a circle that will have
// member functions that set the center, find the area, find
// the circumference and display these attributes.
// The program as written does not allow the user to input data, but
// rather has the radii and center coordinates of the circles (spheres in the
// program) initialized at declaration or set by a function.

//class declaration section   (header file)

class Circles
{
public:
    double findArea();
    double findCircumference();
    void printCircleStats(); // outputs the radius and center of the circle
    Circles();
    Circles(float r);
    Circles(float r, int x, int y);
private:
    float  radius;
    int    center_x;
    int    center_y;
};


const double PI = 3.14;

//Client section

int main()
{
    Circles sphere (8, 9, 10);
    sphere.printCircleStats();

    cout << "The area of the circle is " << sphere.findArea() << endl;
    cout << "The circumference of the circle is "
         << sphere.findCircumference() << endl << endl;

    // Exercise 2
    Circles sphere1 = Circles(2);
    Circles sphere2;

    sphere1.printCircleStats();
    cout << "The area of the circle is " << sphere1.findArea() << endl;
    cout << "The circumference of the circle is "
         << sphere1.findCircumference() << endl << endl;

    sphere2.printCircleStats();
    cout << "The area of the circle is " << sphere2.findArea() << endl;
    cout << "The circumference of the circle is "
         << sphere2.findCircumference() << endl << endl;

    return 0;
}

//___________________________________________________________________________
//Implementation section     Member function implementation

Circles::Circles() {
    radius = 1;
    center_x = 0;
    center_y = 0;
}

// Fill in the code to implement the non-default constructor
Circles::Circles(float r = 1)
{
    radius = r;
    center_x = 0;
    center_y = 0;
}

// Exercise 2 constructor
Circles::Circles(float r, int x, int y)
{
    radius = 4;
    center_x = x;
    center_y = y;
}

// Fill in the code to implement the findArea member function
double Circles::findArea()
{
    return PI * radius * radius;
}

// Fill in the code to implement the findCircumference member function
double Circles::findCircumference()
{
    return PI * radius * 2;
}

// This procedure prints out the radius and center coordinates of the circle
// object that calls it.
void Circles::printCircleStats()
{
    cout << "The radius of the circle is " << radius << endl;
    cout << "The center of the circle is (" << center_x
         << ", " << center_y << ")" << endl;
}
