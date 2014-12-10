// Date class for Programming Challenge 13.1
//
// written by Walter B. Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College

#ifndef __1_DATE_HPP__
#define __1_DATE_HPP__

#include <ctime>
#include <string>
#include <sstream>

const std::string MONTH_NAME[13] = {
    "ERROR_ZERO_MONTH",
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"
};

const unsigned short MONTH_LENGTH[13] = {
    0, // ZERO_MONTH, placeholder
    31,
    28,
    31,
    30,
    31,
    30,
    30,
    31,
    30,
    31,
    30,
    31
};

class Date {
private:
    int   year;
    short month;
    short day;
public:
    // by default, get the current time and use that
    Date() {
        time_t current_time = time(NULL);
        tm* current = localtime(&current_time);

        year  = current->tm_year + 1900;
        month = current->tm_mon + 1;
        day   = current->tm_mday;
    }
    // otherwise, specify YEAR, MONTH, DATE (in order)
    Date(int _year, short _month, short _day) {
        setYear(_year);

        month = 1; // fallback to January if invalid month given
        setMonth(_month);

        day = 1; // fallback to 1st day of month if invalid day given
        setDay(_day);
    }

    // member accessors + mutators
    // *mutators return true upon successfully updating their value
    //  and return false if invalid range (value not updated).
    int getYear() { return year; }
    bool setYear(int _y) { year = _y; return true; }

    short getMonth() { return month; }
    bool setMonth( short _m) {
        if (_m < 1 or _m > 12) {
            return false;
        } else {
            month = _m;
            return true;
        }
    }

    short getDay() { return day; }
    bool setDay( short _d) {
        if (month == 2 and year % 4 == 0
            and (year % 100 != 0 or year % 400 == 0))
        {
            if (_d < 1 or _d > 29) {
                return false;
            } else {
                day = _d;
                return true;
            }
        } else if (_d < 1 or _d > MONTH_LENGTH[month]) {
            return false;
        } else {
            day = _d;
            return true;
        }
    }


    // format 3 different ways
    std::string formatShort() {   // 12/25/2012
        std::ostringstream s;
        s << month << '/' << day << '/' << year;
        return s.str();
    }
    std::string formatLong() {    // Decmber 25, 2012
        std::ostringstream s;
        s << MONTH_NAME[month] << ' ' << day << ", " << year;
        return s.str();
    }
    std::string formatOrdered() { // 25 December 2012
        std::ostringstream s;
        s << day << ' ' << MONTH_NAME[month] << ' ' << year;
        return s.str();
    }
};

#endif
