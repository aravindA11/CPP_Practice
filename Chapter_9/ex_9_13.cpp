/*
Exercise 9.13: How would you initialize a vector<double> from a
list<int>? From a vector<int>? Write code to check your
answers.
*/ 

#include<iostream>
#include<vector>
#include<list>
using std::vector;
using std::list;

int main() {
    list<int> li = {1,2,3,4,5};
    vector<double> v1(li.begin(), li.end()); // Initializing vector<double> from list<int>
    vector<int> vi = {6,7,8,9,10};
    vector<double> v2(vi.begin(), vi.end()); // Initializing vector<double> from vector<int>
    return 0;
}