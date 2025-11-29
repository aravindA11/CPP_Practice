//  Exercise 9.50: Write a program to process a vector<string>s whose
//  elements represent integral values. Produce the sum of all the elements
//  in that vector. Change the program so that it sums of strings that
//  represent floating-point values.

#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::endl;

int sumIntegers(const vector<string> &strs) {
    int sum = 0;
    for (const auto &s : strs) {
        sum += std::stoi(s);
    }
    return sum;
}

double sumFloats(const vector<string> &strs) {
    double sum = 0.0;
    for (const auto &s : strs) {
        sum += std::stod(s);
    }
    return sum;
}

int main() {
    vector<string> intStrings = {"10", "20", "30", "40", "50"};
    vector<string> floatStrings = {"10.5", "20.5", "30.5", "40.5", "50.5"};

    int intSum = sumIntegers(intStrings);
    double floatSum = sumFloats(floatStrings);

    cout << "Sum of integer strings: " << intSum << endl;
    cout << "Sum of floating-point strings: " << floatSum << endl;

    return 0;
}