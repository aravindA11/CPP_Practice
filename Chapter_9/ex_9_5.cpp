/*
Exercise 9.5: Rewrite the previous program to return an iterator to the
requested element. Note that the program must handle the case where
the element is not found.
*/

#include <iostream>
#include <vector>
using std::vector;

vector<int>::iterator find_value(vector<int>::iterator begin, vector<int>::iterator end, int value) {
    while (begin != end) {
        if (*begin == value) {
            return begin; // Return iterator to the found value
        }
        ++begin;
    }
    return end; // Return end iterator if value not found
}