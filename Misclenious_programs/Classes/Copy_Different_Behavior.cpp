#include <iostream>
#include <string>
using namespace std;
/*
Why this code is valid?
This code works fine after c++17 because The compiler performs copy elision (guaranteed since C++17), 
which means it can optimize away the copy/move operations in certain situations, such as when returning a local object
from a function or when initializing an object with a temporary. In this case, the compiler can construct the Sales_data object
directly in the memory allocated for s2 and s3, avoiding the need for a copy or move constructor.
*/
struct Sales_data{
    double revenue=0;
    string isbn_no;
    int units_sold;
    public:
    Sales_data() = default;
    Sales_data(string isbn,int usold, int price): isbn_no(isbn), units_sold(usold), revenue(price *usold){}
    Sales_data(Sales_data& ) =delete;
    Sales_data(const Sales_data&) = delete;
    Sales_data& operator=(const Sales_data& ) = delete;
    Sales_data(Sales_data&&) = delete;
    Sales_data& operator=(Sales_data&& ) = delete;
};

int main()
{
    Sales_data s1;
    Sales_data s2 = Sales_data("asdf",23,46);
    Sales_data s3{Sales_data()};
    return 0;
}