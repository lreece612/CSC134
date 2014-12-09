#include <iostream>
#include <string>   // added
using namespace std;

// write the struct declaration here to hold the movie data
struct Movie {
    string   name;
    string   director;
    string   producer;
    unsigned year;
};

int main()
{
    // define the structure variable here
    Movie m;

    cout << "Enter the following data about your\n";
    cout << "favorite movie.\n";
    cout << "name: ";
    // Write a statement here that lets the user enter the
    // name of a favorite movie. Store the name in the
    // structure variable.
    getline(cin, m.name);

    cout << "Director: ";
    // Write a statement here that lets the user enter the
    // name of the movie's director. Store the name in the
    // structure variable.
    getline(cin, m.director);

    cout << "Producer: ";
    // Write a statement here that lets the user enter the
    // name of the movie's producer. Store the name in the
    // structure variable.
    getline(cin, m.producer);

    cout << "Year of release: ";
    // Write a statement here that lets the user enter the
    // year the movie was released. Store the year in the
    // structure variable.
    cin >> m.year;

    cout << "Here is the data on your favorite movie:\n";
    // Write statements here that display the data.
    // just entered into the structure variable.
    cout << "\n          Name: " << m.name
         << "\n      Director: " << m.director
         << "\n      Producer: " << m.producer
         << "\n Year Released: " << m.year
         << "\n\n";

    return 0;
}
