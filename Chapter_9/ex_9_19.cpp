/*
Exercise 9.19: Rewrite the program from the previous exercise to use a
list. List the changes you needed to make.
*/

#include <iostream>
#include <string>
#include <list>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::list;

int main() {
    list<string> str_list;
    string input;

    cout << "Enter strings (type 'exit' to finish):" << endl;
    while (cin >> input && input != "exit") {
        str_list.push_back(input);
    }

    cout << "You entered:" << endl;
    for (auto it = str_list.cbegin(); it != str_list.cend(); ++it) {
        cout << *it << endl;
    }

    return 0;
}