// Exercise 9.47: Write a program that finds each numeric character and
//  then each alphabetic character in the string "ab2c3d7R4E6". Write
//  two versions of the program. The first should use find_first_of, and
//  the second find_first_not_of.


#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

int main() {
    string s = "ab2c3d7R4E6";
    
    cout << "Using find_first_of to find numeric characters:" << endl;
    std::string::size_type pos = 0;
    while((pos = s.find_first_of("0123456789", pos)) != string::npos) {
        cout << "Found numeric character: " << s[pos] << " at position " << pos << endl;
        ++pos; // Move to the next position
    }

    cout << "\nUsing find_first_not_of to find alphabetic characters:" << endl;
    pos = 0;
    while((pos = s.find_first_not_of("0123456789", pos)) != string::npos) {
        cout << "Found alphabetic character: " << s[pos] << " at position " << pos << endl;
        ++pos; // Move to the next position
    }

    return 0;
}