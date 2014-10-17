// Midterm Exam Project 1 - How Many Calories?
//
// written by Walter B. Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College
#include <iostream>

// required nutritional constants
const int COOKIES_PER_BAG = 40;
const int SERVINGS_PER_BAG = 10;
const int CALORIES_PER_SERVING = 300;

// simplified nutritional coefficient
const double CALORIES_PER_COOKIE = ( CALORIES_PER_SERVING * SERVINGS_PER_BAG ) /
                                static_cast<double>( COOKIES_PER_BAG );

int main() {
	int cookies_consumed;

	std::cout << "How many cookies did you eat? ";
	std::cin >> cookies_consumed;
	
	if ( cookies_consumed < 0 ) {
		std::cerr << "Sorry, but " << cookies_consumed 
		          << " is an Invalid number of cookies.\n";
		return 1;
	}
	
	double calories_consumed = cookies_consumed * CALORIES_PER_COOKIE;
	
	std::cout << cookies_consumed << " cookies, at " << CALORIES_PER_COOKIE
	          << " calories per cookie == " << calories_consumed
	          << " total calories.\n";
	
	return 0;
}
