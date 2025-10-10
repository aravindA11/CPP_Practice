/*
Exercise 3.42: Write a program to copy a vector of ints into an array
of ints.
*/

#include<iostream>
#include<vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main() {
    vector<int> v1 = {1,2,3,4,5};
    int arr[5];
    if(v1.size() <= 5) {
        for(size_t i=0;i<v1.size();i++){
            arr[i] = v1[i];
        }
        for(const auto &i : arr){
            cout<<i<<" ";
        }
    } else {
        cout<<"Vector size is greater than array size"<<endl;
    }
    return 0;
}