/*
Exercise 4.10: Write the condition for a while loop that would read
 ints from the standard input and stop when the value read is equal to
 42.
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
    int num;
    cout<<"Enter integers (enter 42 to stop): "<<endl;
    while(cin>>num && num != 42) {
        cout<<"You entered: "<<num<<endl;
    }
    cout<<"Stopped as you entered 42."<<endl;
    return 0;
}