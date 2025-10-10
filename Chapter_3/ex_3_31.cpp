/*
Exercise 3.31: Write a program to define an array of ten ints. Give
each element the same value as its position in the array.
*/

#include<iostream>

int main() {
    int ar[10];
    for (size_t ix = 0; ix < 10; ++ix)
        ar[ix] = ix;
    for(const auto &i : ar){
        std::cout<<i<<" ";
    }
    return 0;
}