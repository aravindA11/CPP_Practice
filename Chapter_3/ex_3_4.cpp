 /*
 Exercise 3.4: Write a program to read two strings and report whether
 the strings are equal. If not, report which of the two is larger. Now,
 change the program to report whether the strings have the same
 length, and if not, report which is longer.
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
        if (str1 > str2) {
            cout << "\"" << str1 << "\" is larger than \"" << str2 << "\"." << endl;
        } else {
            cout << "\"" << str2 << "\" is larger than \"" << str1 << "\"." << endl;
        }
    }

    // Now check for length
    if (str1.size() == str2.size()) {
        cout << "The strings have the same length." << endl;
    } else {
        cout << "The strings do not have the same length." << endl;
        if (str1.size() > str2.size()) {
            cout << "\"" << str1 << "\" is longer than \"" << str2 << "\"." << endl;
        } else {
            cout << "\"" << str2 << "\" is longer than \"" << str1 << "\"." << endl;
        }
    }

    return 0;
}