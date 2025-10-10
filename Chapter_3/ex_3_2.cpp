/*
Exercise 3.2: Write a program to read the standard input a line at a time.
 Modify your program to read a word at a time.
*/

#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string line;
    cout << "Enter lines of text (Ctrl+D to end):" << endl;
    while (std::getline(cin, line)) { // Read a line at a time
        cout << "You entered: " << line << endl;
    }

    // Clear the EOF state to read words
    cin.clear();
//    cin.seekg(0, std::ios::beg); // Go back to the beginning of the input

    string word;
    cout << "Enter words (Ctrl+D to end):" << endl;
    while (cin >> word) { // Read a word at a time
        cout << "You entered: " << word << endl;
    }

    return 0;
}