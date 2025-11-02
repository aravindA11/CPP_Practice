/*
Exercise 6.27: Write a function that takes an
initializer_list<int> and produces the sum of the elements in
the list.
*/

#include <iostream>
#include <initializer_list>
using std::cout;
using std::endl;
int sum(std::initializer_list<int> il) {
    int total = 0;
    for (const int &val : il) {
        total += val;
    }
    return total;
}

int main() {
    cout << "Sum of {1, 2, 3, 4, 5}: " << sum({1, 2, 3, 4, 5}) << endl;
    cout << "Sum of {10, 20, 30}: " << sum({10, 20, 30}) << endl;
    cout << "Sum of {}: " << sum({}) << endl; // Sum of empty list
    return 0;
}