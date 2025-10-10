/*
Exercise 3.44: Rewrite the programs from the previous exercises using
 a type alias for the type of the loop control variables.
*/

#include <iostream>
using std::cout;
using std::endl;

int main() {
    int ia[3][4];
    using arr= int[4]; // Type alias for array of 4 integers

    for(size_t i=0;i<3;i++) { // Initializing the array
        for(size_t j=0;j<4;j++) {
            ia[i][j] = i*4 + j;
        }
    }

    for(arr &iter1 : ia) { // Range for
        for(int iter2 : iter1) {
            cout<<iter2<<" ";
        }
        cout<<endl;
    }

    for(arr *iter = ia; iter != ia + 3; ++iter) { // For loop with pointers
        for(int *iter2 = *iter; iter2 != *iter + 4; ++iter2) {
            cout<<*iter2<<" ";
        }
        cout<<endl;
    }

    for(size_t i=0;i<3;i++) { // For loop with subscripts
        for(size_t j=0;j<4;j++) {
            cout<<ia[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}