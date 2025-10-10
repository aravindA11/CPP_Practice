/*
 Exercise 3.43: Write three different versions of a program to print the
 elements of ia. One version should use a range for to manage the
 iteration, the other two should use an ordinary for loop in one case
 using subscripts and in the other using pointers. In all three programs
 write all the types directly. That is, do not use a type alias, auto, or
 decltype to simplify the code.
*/

#include<iostream>
using namespace std;

int main() {
    int ia[3][4];
    for(int i=0;i<3;i++) { // Initializing the array
        for(int j=0;j<4;j++) {
            ia[i][j] = i*4 + j;
        }
    }
    for(int (&i)[4] : ia) { // Range for
        for(int j : i) {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    for(size_t i=0;i<3;i++) { // For loop with subscripts
        for(size_t j=0;j<4;j++) {
            cout<<ia[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int (*p)[4] = ia; p != ia + 3; ++p) { // For loop with pointers
        for(int *q = *p; q != *p + 4; ++q) {
            cout<<*q<<" ";
        }
        cout<<endl;
    }

    return 0;
}