/*
Exercise 7.13: Rewrite the program from page 
255 to use the istream
 constructor.
*/


#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

struct Sales_data;
std::istream& read(std::istream &is, Sales_data &item);

struct Sales_data {
    double revenue = 0;
    string isbn_no;
    int units_sold;
    Sales_data() = default; // default constructor
    Sales_data(const string &s): isbn_no(s) {} // constructor taking string
    Sales_data(const string &s, int n, double p): 
        isbn_no(s), units_sold(n), revenue(n * p) {} // constructor taking all data members
    Sales_data(std::istream &is) {
        read(is, *this);
    }
    Sales_data& combine(const Sales_data &rhs){
        revenue += rhs.revenue;
        units_sold += rhs.units_sold;
        return *this;
    }
    string isbn() const {
        return isbn_no;
    }
};

Sales_data add(const Sales_data &lhs, const Sales_data &rhs){
    Sales_data sum = lhs; // copy data members from lhs into sum
    sum.combine(rhs);     // add data members from rhs into sum
    return sum;
}

std::istream& read(std::istream &is, Sales_data &item){
    is >> item.isbn_no >> item.units_sold >> item.revenue;
    item.revenue *= item.units_sold;
    return is;
}

std::ostream& print(std::ostream &os, const Sales_data &item){
    os << "ISBN: " << item.isbn_no 
       << " Units Sold: " << item.units_sold 
       << " Total Revenue: " << item.revenue;
    return os;
}


int main() {
    Sales_data total(cin);

    if (cin) {
        Sales_data trans(cin);
        while (cin) {
            if(total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {
                print(cout,total) << endl;
                total = trans;
            }
            read(cin, trans);
        }
        print(cout, total) << endl;
    } else {
        cout << "No data?!" << endl;
    }
    return 0;
}