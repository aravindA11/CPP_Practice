/*
Exercise 7.3: Revise your transaction-processing program from § 
7.1.1 (p. 256) to use these members.
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

int main() {
    Sales_data total;

    if (cin >> total.isbn_no >> total.units_sold >> total.revenue) {
        total.revenue *= total.units_sold;
        Sales_data trans;
        while (cin >> trans.isbn_no >> trans.units_sold >> trans.revenue) {
            if(total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {
                cout << "ISBN: " << total.isbn_no 
                     << " Units Sold: " << total.units_sold 
                     << " Total Revenue: " << total.revenue << endl;
                total = trans;
                total.revenue *= total.units_sold;
            }
        }
        cout << "ISBN: " << total.isbn_no 
             << " Units Sold: " << total.units_sold 
             << " Total Revenue: " << total.revenue << endl;
    } else {
        cout << "No data?!" << endl;
    }
    return 0;
}