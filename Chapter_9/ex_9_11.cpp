/*
Exercise 9.11: Show an example of each of the six ways to create and
initialize a vector. Explain what values each vector contains.
*/

#include<iostream>
#include<vector>
using std:: vector;
int main() {
    
    vector<int> v1; // 1. Default initialization: creates an empty vector.
    vector<int> v2(5); // 2. Size initialization: creates a vector of size 5 with default-initialized elements (0 for int).
    vector<int> v3(5, 10); // 3. Size and value initialization: creates a vector of size 5 with all elements initialized to 10.
    vector<int> v4{1, 2, 3, 4, 5}; // 4. List initialization: creates a vector with elements 1, 2, 3, 4, 5.
    vector<int> v5 = {6, 7, 8, 9, 10}; // 5. Copy list initialization: creates a vector with elements 6, 7, 8, 9, 10.
    vector<int> v6(v4); // 6. Copy initialization: creates a vector that is a copy of v4.

    return 0;
}