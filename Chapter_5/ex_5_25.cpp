/*
Exercise 5.25: Revise your program from the previous exercise to use a
try block to catch the exception. The catch clause should print a
message to the user and ask them to supply a new number and repeat
the code inside the try
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
    int num1, num2;
    bool success = false;
    while(!success) {
        cout<<"Enter two integers (num1 num2): ";
        cin>>num1>>num2;
        try{
            if(num2 != 0) {
                cout<<"Result of "<<num1<<" / "<<num2<<" = "<<(num1 / num2)<<endl;
                success = true; // exit loop on success
            } else {
                throw std::runtime_error("Division by zero is not allowed.");
            }
        } catch(std::runtime_error &e) {
            cout<<e.what()<<endl;
            cout<<"Please enter the numbers again."<<endl;
        }
    }
    return 0;
}