/*
Exercise 8.1: Write a function that takes and returns an istream&. The
function should read the stream until it hits end-of-file. The function
should print what it reads to the standard output. Reset the stream so
that it is valid before returning the stream.
*/


#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::istream;

istream& readAndPrint(istream &is) {
    std::string line;
    while (std::getline(is, line)) {
        cout << line << endl;
    }
    is.clear(); // Reset the stream state
    return is;
}

int main() {
    cout << "Please enter text (Ctrl+D to end input on Unix/Linux or Ctrl+Z on Windows):" << endl;
    readAndPrint(cin);
    readAndPrint(cin); // Demonstrating that the stream is reset
    return 0;
}