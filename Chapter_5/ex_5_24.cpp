/*
Exercise 5.24: Revise your program to throw an exception if the second
 number is zero. Test your program with a zero input to see what happens
 on your system if you don’t catch an exception.
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
    int num1, num2;
    cout<<"Enter two integers (num1 num2): ";
    cin>>num1>>num2;
    try{
        if(num2 != 0) {
            cout<<"Result of "<<num1<<" / "<<num2<<" = "<<(num1 / num2)<<endl;
        } else {
            throw std::runtime_error("Division by zero is not allowed.");
        }
    } catch(std::runtime_error &e) {
        cout<<e.what()<<endl;
    }
    return 0;
}