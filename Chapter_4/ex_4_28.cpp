/*
Exercise 4.28: Write a program to print the size of each of the built-in
types.
*/

#include <iostream>
using std::cout;
using std::endl;
int main() {
    cout<<"Size of char: "<<sizeof(char)<<" byte(s)"<<endl;
    cout<<"Size of short: "<<sizeof(short)<<" byte(s)"<<endl;
    cout<<"Size of int: "<<sizeof(int)<<" byte(s)"<<endl;
    cout<<"Size of long: "<<sizeof(long)<<" byte(s)"<<endl;
    cout<<"Size of long long: "<<sizeof(long long)<<" byte(s)"<<endl;
    cout<<"Size of float: "<<sizeof(float)<<" byte(s)"<<endl;
    cout<<"Size of double: "<<sizeof(double)<<" byte(s)"<<endl;
    cout<<"Size of long double: "<<sizeof(long double)<<" byte(s)"<<endl;
    cout<<"Size of bool: "<<sizeof(bool)<<" byte(s)"<<endl;
    return 0;
}
