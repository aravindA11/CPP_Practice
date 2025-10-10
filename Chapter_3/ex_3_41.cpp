/*
 Exercise 3.41: Write a program to initialize a vector from an array of
 ints.
*/

#include<iostream>
#include<vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main() {
    int arr[] = {1,2,3,4,5};
    vector<int> v1(std::begin(arr), std::end(arr));
    for(const auto &i : v1){
        cout<<i<<" ";
    }
    return 0;
}