// RetailItem class for Programming Challenge 13.5
//
// written by Walter B. Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College

#ifndef __5_RETAILITEM_HPP__
#define __5_RETAILITEM_HPP__

#include <string>

class RetailItem {
private:
    // member variables have their names slightly obfuscated so they don't
    // conflict with the mutator and acessor functions.
    std::string description_;
    int         unitsOnHand_;
    double      price_;

public:
    RetailItem( std::string _descr = "Untitled Item",
                int         _units = 0,
                double      _price = 0.0 )
    {
        description_ = _descr;
        unitsOnHand_ = _units;
        price_       = _price;
    }

    // member mutator-accessor combination overloaded functions
    std::string description(std::string _d) { return description_ = _d; }
    std::string description()               { return description_; }

    int unitsOnHand(int _u) { return unitsOnHand_ = _u; }
    int unitsOnHand()       { return unitsOnHand_; }

    double price(double _p) { return price_ = _p; }
    double price()          { return price_; }

};

#endif
