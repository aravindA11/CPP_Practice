/*
Exercise 6.7: Write a function that returns 0 when it is first called and
 then generates numbers in sequence each time it is called again
Ans: there are 2 possible solutions 1. static local variable 2. global variable

Solution for static variable:
 */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int generateNumber() {
    static int num = 0; // static local variable to retain value between calls
    return num++;
}

int main() {
    cout<<"First call: "<<generateNumber()<<endl; // Output: 0
    cout<<"Second call: "<<generateNumber()<<endl; // Output: 1
    cout<<"Third call: "<<generateNumber()<<endl; // Output: 2
    cout<<"Fourth call: "<<generateNumber()<<endl; // Output: 3
    return 0;
}


