// Walter B. Vaughan wrote this.

#include <iostream>
using namespace std;

// Write your function prototype here
double avgArray( int[], int );

int main()
{
    const int SIZE = 10;
    int userNums[SIZE];

    cout << "Enter 10 numbers: ";
    for (int count = 0; count < SIZE; count++)
    {
        cout << "#" << (count + 1) << " ";
        cin >> userNums[count];
    }
    cout << "The average of those numbers is ";
    cout << avgArray(userNums, SIZE) << endl;
    return 0;
}

//
// Write the function avgArray here.
//
double avgArray( int nums[], int n ) {
    double acc = 0;
    for ( int i = 0 ; i < n ; i++ ) {
        acc += nums[i];
    }
    return ( acc / n );
}
