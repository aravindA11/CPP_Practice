/*
Exercise 9.4: Write a function that takes a pair of iterators to a
vector<int> and an int value. Look for that value in the range and
return a bool indicating whether it was found.
*/

#include <iostream>
#include <vector>
using std::vector;

bool find_value(vector<int>::iterator begin, vector<int>::iterator end, int value) {
    while (begin != end) {
        if (*begin == value) {
            return true; // Return iterator to the found value
        }
        ++begin;
    }
    return false; // Return end iterator if value not found
}