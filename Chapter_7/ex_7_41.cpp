/*
Exercise 7.41: Rewrite your own version of the Sales_data class to
use delegating constructors. Add a statement to the body of each of the
constructors that prints a message whenever it is executed. Write
declarations to construct a Sales_data object in every way possible.
Study the output until you are certain you understand the order of
execution among delegating constructors.
*/

#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

class Sales_data{
    double revenue;
    string isbn_no;
    int units_sold;
    
    public:
    Sales_data(): Sales_data("", 0, 0) {} // default constructor
    Sales_data(const string &s): Sales_data(s, 0, 0) {} // constructor taking string
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
    inline double avg_price() const; // Declaration of inline function
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

inline double Sales_data::avg_price() const { // Definition of inline function
    if (units_sold == 0) {
        return 0;
    } else {
        return revenue / units_sold;
    }
}