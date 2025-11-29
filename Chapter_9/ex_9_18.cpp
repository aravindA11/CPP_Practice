/*
Exercise 9.18: Write a program to read a sequence of strings from
the standard input into a deque. Use iterators to write a loop to print the
elements in the deque.
*/

#include <iostream>
#include <string>
#include <deque>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::deque;

int main() {
    deque<string> str_deque;
    string input;

    cout << "Enter strings (type 'exit' to finish):" << endl;
    while (cin >> input && input != "exit") {
        str_deque.push_back(input);
    }

    cout << "You entered:" << endl;
    for (auto it = str_deque.cbegin(); it != str_deque.cend(); ++it) {
        cout << *it << endl;
    }

    return 0;
}