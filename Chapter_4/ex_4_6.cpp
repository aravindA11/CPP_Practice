/*
Exercise 4.6: Write an expression to determine whether an int value is
 even or odd.
*/
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
    int num;
    cout<<"Enter an integer: ";
    cin>>num;
    if(num % 2 == 0)
        cout<<num<<" is even."<<endl;
    else
        cout<<num<<" is odd."<<endl;
    return 0;
}