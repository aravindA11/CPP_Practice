/*
Exercise 6.47: Revise the program you wrote in the exercises in § 
(p.6.3.2 228) that used recursion to print the contents of a vector to
conditionally print information about its execution. For example, you
might print the size of the vector on each call. Compile and run the
program with debugging turned on and again with it turned off.
*/

#include <iostream>
#include <vector>
using std::cout;
using std::endl;

void printVector(const std::vector<int> &vec, size_t index = 0)
{
    #ifndef NDEBUG
     cout << "Debug: Entering printVector with index " << index << endl;
    #endif
    cout << "Current vector size: " << vec.size() - index << endl;
    if (index >= vec.size()) {
        return; // Base case: end of vector
    }
    cout << vec[index] << endl; // Print current element
    printVector(vec, index + 1); // Recursive call for next element
}