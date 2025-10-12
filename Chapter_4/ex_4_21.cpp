/*
Exercise 4.21: Write a program to use a conditional operator to find the
elements in a vector<int> that have odd value and double the value
of each such element.
*/

#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for(auto &i : vec) {
        i = (i % 2) ? i : i * 2; // Double if odd
    }
    for(const auto &i : vec) {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}