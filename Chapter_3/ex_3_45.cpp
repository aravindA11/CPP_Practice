/*
Exercise 3.45: Rewrite the programs again, this time using auto.
*/


#include <iostream>
using std::cout;
using std::endl;

int main() {
    int ia[3][4];

    for(size_t i=0;i<3;i++) { // Initializing the array
        for(size_t j=0;j<4;j++) {
            ia[i][j] = i*4 + j;
        }
    }

    for(auto &iter1 : ia) { // Range for
        for(auto iter2 : iter1) {
            cout<<iter2<<" ";
        }
        cout<<endl;
    }

    for(auto *iter = ia; iter != ia + 3; ++iter) { // For loop with pointers
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