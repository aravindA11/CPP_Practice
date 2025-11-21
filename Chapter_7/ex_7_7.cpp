/*
Exercise 7.7: Rewrite the transaction-processing program you wrote for
the exercises in § 7.1.2 (p. 260) to use these new functions.
*/

#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

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
    Sales_data total;

    if (read(cin, total)) {
        Sales_data trans;
        while (read(cin, trans)) {
            if(total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {
                print(cout,total) << endl;
                total = trans;
            }
        }
        print(cout, total) << endl;
    } else {
        cout << "No data?!" << endl;
    }
    return 0;
}