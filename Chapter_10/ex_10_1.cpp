// Exercise 10.1: The algorithm header defines a function named
//  count that, like find, takes a pair of iterators and a value. count
//  returns a count of how often that value appears. Read a sequence of
//  ints into a vector and print the count of how many elements have a
//  given value.

#include <iostream>
#include <vector>
#include <algorithm>
using std::vector;
using std::cout;
using std::endl;
using std::cin;

int main() {
    vector<int> vec;
    int value, num;

    cout << "Enter a value to count: ";
    cin >> value;

    cout << "Enter integers (non-integer to stop): " << endl;
    while (cin >> num) {
        vec.push_back(num);
    }

    // cin.clear(); // clear the fail state
    // cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard invalid input

    auto count = std::count(vec.begin(), vec.end(), value);
    cout << "The value " << value << " appears " << count << " times." << endl;

    return 0;
}