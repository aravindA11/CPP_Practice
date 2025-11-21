/*
Exercise 7.2: Add the combine and isbn members to the
Sales_data class you wrote for the exercises in § 2.6.2 (p. 76).
*/

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Sales_data{
    double revenue = 0;
    string isbn_no;
    int units_sold;
    Sales_data& combine(const Sales_data &rhs){
        revenue += rhs.revenue;
        units_sold += rhs.units_sold;
        return *this;
    }
    string isbn() const {
        return isbn_no;
    }
};
