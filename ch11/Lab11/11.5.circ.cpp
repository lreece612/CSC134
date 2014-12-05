// Lab 11.5 - Student Generated Code Assignments
//
// Option 1: Re-write Sample Program 11.2 so that it works for an array of
// structures. Write the program so that it compares 6 circles. You will need
// to come up with a new way of determining which circle’s center is closest
// to the origin.
//
//
// written by Walter B. Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College
#include <iostream>
#include <cmath>    // necessary for pow function
#include <iomanip>
using namespace std;

struct circle {
    float x;
    float y;
    float radius;
    float area;
    float circumference;
    float distance_from_origin;
};

const float PI = 3.14159;
const short MAX_CIRCLES = 6; // change this to modify number of circles to add
      short num_circles = 0; // global counter of how filled 'cs' is

circle cs[MAX_CIRCLES];

// returns true if circle added successfully, false otherwise.
bool addCircle() {
    // bounds checking for global array of circles
    if (num_circles >= MAX_CIRCLES) {
        cerr << "MAX_CIRCLES has been reached. (" << num_circles << ")\n";
        cout << "\n";
        return false;
    }

    circle c;

    // user input
    cout << "Please enter the radius of circle " << (num_circles + 1) << ": ";
    cin >> c.radius;
    cout << endl
         << "Please enter the x-coordinate of the center: ";
    cin >> c.x;
    cout << endl
         << "Please enter the y-coordinate of the center: ";
    cin >> c.y;
    cout << endl << endl;

    // calculations
    c.area = PI * pow(c.radius, 2.0);
    c.circumference = 2 * PI * c.radius;
    c.distance_from_origin = sqrt(pow(c.x,2.0) + pow(c.y,2.0));

    // add new circle to the global array
    cs[num_circles] = c;
    num_circles++;

    return true; // success
}

void printClosestCircle() {
    // index of the closest circle, assume first one, then update.
    short index = 0;

    for (short i = 1; i < num_circles; i++) {
        if (cs[i].distance_from_origin < cs[index].distance_from_origin) {
            index = i;
        }
    }

    cout << "Circle " << (index+1) << " is centered closest to the origin.\n\n";

    return;
}

// similar funcionality to addCircle, but only outputs data
bool printCircle() {
    static short print_cnt = 0; // keeps track of how many printed so far

    if (print_cnt >= num_circles) {
        // except this time, don't tell cerr or cout
        return false;
    }

    cout << setprecision(2) << fixed << showpoint;
    cout << "The area of circle " << (print_cnt+1) << " is: ";
    cout << cs[print_cnt].area << endl;
    cout << "The circumference of circle " << (print_cnt+1) << " is: ";
    cout << cs[print_cnt].circumference << endl << endl;

    print_cnt++; // don't forget to increment index of printed circle.

    return true;
}

int main() {
    while (addCircle());   // add circles 'til ya can't no more
    printClosestCircle();
    while (printCircle()); // print circles 'til ya can't no more
    return 0;
}
