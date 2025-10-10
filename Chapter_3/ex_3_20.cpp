/*
Exercise 3.20: Read a set of integers into a vector. Print the sum of
 each pair of adjacent elements. Change your program so that it prints the
 sum of the first and last elements, followed by the sum of the second and
 second-to-last, and so on.
*/
#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main() {
    vector<int> v1;
    int val;
    cout<<"Enter integers (Ctrl+D to end): "<<endl;
    while(cin>>val){
        v1.push_back(val);
    }
    for(vector<int>::size_type i=1;i<v1.size();i++){
        cout<<v1[i-1]+v1[i]<<" ";
    }
    int size = v1.size();
    for(int i=0,j=size-1;i<j;i++,j--) {
        cout<<v1[i]+v1[j]<<" ";
    }
    if(size % 2) {
        cout<<v1[size/2];
    }
    return 0;
}