/*
 Exercise 3.10: Write a program that reads a string of characters
 including punctuation and writes what was read but with the punctuation
 removed.
*/

#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::string;

int main() {
    string s1;
    getline(cin, s1);
    for(char& c : s1) {
        if(!ispunct(c)) {
            cout << c;
        }
    }
    return 0;
}