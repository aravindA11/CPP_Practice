/*
Exercise 3.19: List three ways to define a vector and give it ten
elements, each with the value 42. Indicate whether there is a preferred
way to do so and why.
*/

#include<iostream>
#include<vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main() {
    vector<int> v1(10, 42); // preferred way
    vector<int> v2;
    for(int i=0;i<10;i++){
        v2.push_back(42);
    }
    vector<int> v3;
    v3.assign(10,42);
    for(const auto &i : v1){
        cout<<i<<" ";
    }
    cout<<endl;
    for(const auto &i : v2){
        cout<<i<<" ";
    }
    cout<<endl;
    for(const auto &i : v3){
        cout<<i<<" ";
    }
    return 0;
}