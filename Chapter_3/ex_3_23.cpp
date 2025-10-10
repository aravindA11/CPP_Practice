/*
Exercise 3.23: Write a program to create a vector with ten int
elements. Using an iterator, assign each element a value that is twice its
current value. Test your program by printing the vector.
*/
#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<int> v1(10);
    for(int i=0;i<10;i++){
        cin>>v1[i];
    }
    for(vector<int>::iterator iter = v1.begin(); iter!=v1.end(); iter++){
        *iter = (*iter)*2;
    }
    for(const auto &i : v1){
        cout<<i<<" ";
    }
    return 0;
}