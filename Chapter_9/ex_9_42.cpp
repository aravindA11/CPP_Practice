//  Exercise 9.42: Given that you want to read a character at a time into a
//  string, and you know that you need to read at least 100 characters,
//  how might you improve the performance of your program?

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

int main() {
    // Preallocate space for at least 100 characters to improve performance
    string str;
    str.reserve(100); // Reserve space for 100 characters

    cout << "Enter characters (Ctrl+D to end input on Unix, Ctrl+Z on Windows):" << endl;
    char ch;
    while (std::cin.get(ch)) {
        str += ch; // Append character to string
    }

    cout << "You entered:" << endl;
    cout << str << endl;

    return 0;
}