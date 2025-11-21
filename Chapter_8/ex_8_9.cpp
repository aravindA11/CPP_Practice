/*
Exercise 8.9: Use the function you wrote for the first exercise in § 
8.1.2  (p. 314) to print the contents of an istringstream object.
*/

#include <iostream>
#include <string>
#include <sstream>
using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::string;
using std::istringstream;

istream& readAndPrint(istream &is) {
    std::string line;
    while (is >> line) {
        cout << line << endl;
    }
    is.clear(); // Reset the stream state
    return is;
}

int main() {
    cout << "Please enter text (Ctrl+D to end input on Unix/Linux or Ctrl+Z on Windows):" << endl;
    string str;
    std::getline(cin, str);
    istringstream iss(str);
    readAndPrint(iss);
    return 0;
}