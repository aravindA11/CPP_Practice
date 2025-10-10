/*
Exercise 3.35: Using pointers, write a program to set the elements in an
 array to zero.
*/ 

#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int main() {
    int ar[10];
    for (size_t ix = 0; ix < 10; ++ix)
        ar[ix] = ix;
    for(int *p = ar; p != ar + 10; ++p){
        *p = 0;
    }
    for(const auto &i : ar){
        cout<<i<<" ";
    }
    return 0;
}