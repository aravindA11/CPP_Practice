// Exercise 9.41: Write a program that initializes a string from a
//  vector<char>.

#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::string;
using std::cout;
using std::endl;

int main() {
    vector<char> charVec = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd', '!'};
    
    // Initialize string from vector<char>
    string str(charVec.begin(), charVec.end());
    
    cout << "The initialized string is: " << str << endl;

    return 0;
}