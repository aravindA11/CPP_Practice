/*
Exercise 4.11: Write an expression that tests four values, a, b, c, and d,
and ensures that a is greater than b, which is greater than c, which is
greater than d.
*/

#include <iostream>
using std::cout;
using std::endl;
int main() {
    int a, b, c, d;
    cout<<"Enter four integers: ";
    std::cin>>a>>b>>c>>d;
    if(a > b && b > c && c > d)
        cout<<"a is greater than b, which is greater than c, which is greater than d."<<endl;
    else
        cout<<"Condition not met."<<endl;
    return 0;
}