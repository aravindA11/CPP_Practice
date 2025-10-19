/*
Exercise 5.23: Write a program that reads two integers from the
 standard input and prints the result of dividing the first number by the
 second.
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
    int num1, num2;
    cout<<"Enter two integers (num1 num2): ";
    cin>>num1>>num2;
    if(num2 != 0) {
        cout<<"Result of "<<num1<<" / "<<num2<<" = "<<(num1 / num2)<<endl;
    } else {
        cout<<"Error: Division by zero is not allowed."<<endl;
    }
    return 0;
}