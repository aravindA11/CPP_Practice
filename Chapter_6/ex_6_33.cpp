/*
 Exercise 6.33: Write a recursive function to print the contents of a
 vector.
*/

#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

void printVectorRecursive(const vector<int>& vec, size_t index = 0) {
    if (index >= vec.size()) {
        return; // Base case: end of vector
    }
    cout << vec[index] << endl; // Print current element
    printVectorRecursive(vec, index + 1); // Recursive call for next element
}

int main() {
    vector<int> myVec = {1, 2, 3, 4, 5};
    cout << "Vector contents:" << endl;
    printVectorRecursive(myVec);
    return 0;
}