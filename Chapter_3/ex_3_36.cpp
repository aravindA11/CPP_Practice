/*
Exercise 3.36: Write a program to compare two arrays for equality. Write
 a similar program to compare two vectors.
*/

#include<iostream>
#include<vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;
int main() {
    int ar1[5] = {1,2,3,4,5};
    int ar2[5] = {1,2,3,4,5};
    bool equal = true;
    for(size_t i=0;i<5;i++){
        if(ar1[i] != ar2[i]){
            equal = false;
            break;
        }
    }
    if(equal){
        cout<<"Arrays are equal"<<endl;
    } else {
        cout<<"Arrays are not equal"<<endl;
    }

    vector<int> v1 = {1,2,3,4,5};
    vector<int> v2 = {1,2,3,4,5};
    if(v1 == v2){
        cout<<"Vectors are equal"<<endl;
    } else {
        cout<<"Vectors are not equal"<<endl;
    }
    return 0;
}