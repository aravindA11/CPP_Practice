//  Exercise 10.6: Using fill_n, write a program to set a sequence of int
//  values to 0.

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using std::vector;
using std::cout;
using std::endl;
using std::fill_n;
using std::back_inserter;

int main() {
    vector<int> vec;
    int n;

    cout << "Enter the number of integers to set to 0: ";
    std::cin >> n;

    fill_n(back_inserter(vec), n, 0);

    cout << "The vector elements are: ";
    for (const auto& val : vec) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}