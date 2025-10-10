/*
 Exercise 3.6: Use a range for to change all the characters in a string
 to X.
*/

#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::string;

int main() {
    string str;
    getline(cin, str); // Read a line of input
    for (char &c : str) { // Use a reference to modify the original string
        c = 'X';
    }
    cout << "Modified string: ";
    return 0;
}