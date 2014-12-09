// Programming Challenge 11.1 - Movie Data
//
// Write a program that uses a structure named MovieData to store the following
// information about a movie:
//
// - Title
// - Director
// - Year Released
// - Running Time (in minutes)
//
// The program should create two MovieData variables, store values in their
// members, and pass each one, in turn, to a function that displays the
// information about the movie in a clearly formatted manner.
//
//
// *** NOTE: I am approaching this problem differently. Instead of a function
// *** that is passed a struct, I am using a toString method in a class.
//
// written by Walter B. Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College

#include <iostream>
#include <string>
#include <sstream> // for numeric -> string conversions

using std::string;

class Movie {
    string title;
    string director;
    short  year;
    short  duration;
public:
    Movie(string _title, string _director, short _year, float _duration)
    {
        title    = _title;
        director = _director;
        year     = _year;
        duration = _duration;
    }
    string toString()
    {
        std::ostringstream y, d;
        y << year;
        d << duration;
        return   "        Title: " + title + "\n"
               + "  Directed By: " + director + "\n"
               + "Year Released: " + y.str() + "\n"
               + " Running Time: " + d.str() + " minutes\n";
    }
};

int main()
{
    Movie one ("Pulp Fiction", "Quentin Tarantino", 1994, 154);
    Movie two ("The Wolf of Wall Street", "Martin Scorsese", 2013, 180);

    std::cout << '\n';
    std::cout << one.toString();
    std::cout << '\n';
    std::cout << two.toString();
    std::cout << '\n';

    return 0;
}
