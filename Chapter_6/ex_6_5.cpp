/*
Exercise 6.5: Write a function to return the absolute value of its
argument.
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

unsigned absVal(int val) {
    return (val < 0) ? -val : val;
}
int main() {
    int num;
    cout<<"Enter a number to find its absolute value: ";
    cin>>num;
    cout<<"Absolute value of "<<num<<" is "<<absVal(num)<<endl;
    return 0;
}