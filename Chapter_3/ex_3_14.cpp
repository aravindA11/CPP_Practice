/*
Exercise 3.14: Write a program to read a sequence of ints from cin
 and store those values in a vector.
*/

#include<iostream>
#include<vector>
using std::vector;
using std::cin;
using std::cout;
int main() {
    vector<int> v1;
    int val;
    while(cin>>val){
        v1.push_back(val);
    }
    for(const auto &i : v1){
        cout<<i<<" ";
    }
    return 0;
}