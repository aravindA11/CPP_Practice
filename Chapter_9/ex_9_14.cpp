/*
Exercise 9.14: Write a program to assign the elements from a list of
char* pointers to C-style character strings to a vector of strings.
*/

#include <iostream>
#include <vector>
#include <list>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::list;
using std::string;

int main()
{
    list<const char*> cstr_list = {"Hello", "World", "from", "C-Style", "Strings"};
    vector<string> str_vector;

    // Assign elements from list of char* to vector of strings
    str_vector.assign(cstr_list.begin(), cstr_list.end());

    for (const auto &str : str_vector) {
        cout << str << " ";
    }

    return 0;
}