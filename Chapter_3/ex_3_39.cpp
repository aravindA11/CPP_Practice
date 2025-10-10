/*
 Exercise 3.39: Write a program to compare two strings. Now write a
 program to compare the values of two C-style character strings.
*/

#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main() {
    string str1, str2;
    cout << "Enter two strings: ";
    getline(cin, str1);
    getline(cin, str2);

    if (str1 == str2) {
        cout << "The strings are equal." << endl;
    } else {
        cout << "The strings are not equal." << endl;
    }

    char cstr1[100], cstr2[100];
    cout << "Enter two C-style strings: ";
    cin >> cstr1 >> cstr2;
    if(strcmp(cstr1, cstr2) == 0) {
        cout << "C-style strings are equal." << endl;
    } else {
        cout << "C-style strings are not equal." << endl;
    }

    return 0;
}