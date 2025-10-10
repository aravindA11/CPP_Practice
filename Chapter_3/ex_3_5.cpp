/*
 Exercise 3.5: Write a program to read strings from the standard input,
 concatenating what is read into one large string. Print the
concatenated string. Next, change the program to separate adjacent
 input strings by a space
*/

#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string result, word;
    cout << "Enter strings (Ctrl+D to end):" << endl;
    bool first = true; // Flag to check if it's the first word
    while (cin >> word) { // Read a word at a time
        if (!first) {
            result += " "; // Add a space before appending the next word
        }
        result += word; // Concatenate the word to the result
    }

    cout << "Concatenated string: " << result << endl;

    return 0;
}