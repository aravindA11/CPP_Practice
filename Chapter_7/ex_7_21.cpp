/*
Exercise 7.21: Update your Sales_data class to hide its
implementation. The programs you’ve written to use Sales_data
operations should still continue to work. Recompile those programs with
your new class definition to verify that they still work.
*/

#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

class Sales_data{
    double revenue;
    string isbn_no;
    int units_sold;
    
    public:
    Sales_data(): revenue(0), isbn_no(""), units_sold(0) {} // default constructor
    Sales_data(const string &s): isbn_no(s) {} // constructor taking string
    Sales_data(const string &s, int n, double p): 
        isbn_no(s), units_sold(n), revenue(n * p) {} // constructor taking all data members
    Sales_data(std::istream &is);
    
    Sales_data& combine(const Sales_data &rhs){
        revenue += rhs.revenue;
        units_sold += rhs.units_sold;
        return *this;
    }
    
    string isbn() const {
        return isbn_no;
    }
    friend std::ostream& print(std::ostream &os, const Sales_data &item);
    friend std::istream& read(std::istream &is, Sales_data &item);
};

Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {
    Sales_data sum = lhs; // copy data members from lhs into sum
    sum.combine(rhs);     // add data members from rhs into sum
    return sum;
}

std::istream& read(std::istream &is, Sales_data &item) {
    is >> item.isbn_no >> item.units_sold >> item.revenue;
    item.revenue *= item.units_sold;
    return is;
}

std::ostream& print(std::ostream &os, const Sales_data &item) {
    os << "ISBN: " << item.isbn_no 
       << " Units Sold: " << item.units_sold 
       << " Total Revenue: " << item.revenue;
    return os;
}