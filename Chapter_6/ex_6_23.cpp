/*
 Exercise 6.23: Write your own versions of each of the print functions
 presented in this section. Call each of these functions to print i and j
 defined as follows:
 int i = 0, j[2] = {0, 1};
*/

#include <iostream>
using std::cout;
using std::endl;

void print(int *ptr,int n) {
    for(int i =0; i < n; ++i) {
        cout << ptr[i] << endl;
    }
}

void print(int *begin, int *end) {
    while(begin != end) {
        cout << *begin << endl;
        ++begin;
    }
}

int main() {
    int i = 0, j[2] = {0, 1};

    cout << "Using print with pointer and size:" << endl;
    print(&i, 1); // Print single int
    print(j, 2);  // Print array j

    cout << "Using print with begin and end pointers:" << endl;
    print(&i, &i + 1); // Print single int
    print(std::begin(j), std::end(j));   // Print array j

    return 0;
}