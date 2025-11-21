/*
 Exercise 7.1: Write a version of the transaction-processing program
 from § 1.6 (p. 24) using the Sales_data class you defined for the
 exercises in § 2.6.1 (p. 72).
*/

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Sales_data {
    double revenue = 0.0;
    unsigned units_sold = 0;
    string isbn_no;
};

int main() {
    Sales_data total;

    if (cin >> total.isbn_no >> total.units_sold >> total.revenue) {
        total.revenue *= total.units_sold;
        Sales_data trans;
        while (cin >> trans.isbn_no >> trans.units_sold >> trans.revenue) {
            if(total.isbn_no == trans.isbn_no) {
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue * trans.units_sold;
            } else {
                cout << "ISBN: " << total.isbn_no 
                     << " Units Sold: " << total.units_sold 
                     << " Total Revenue: " << total.revenue << endl;
                total.isbn_no = trans.isbn_no;
                total.units_sold = trans.units_sold;
                total.revenue = trans.revenue * trans.units_sold;
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