/*
 Exercise 3.32: Copy the array you defined in the previous exercise into
 another array. Rewrite your program to use vectors.
*/

#include<iostream>
#include<vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main() {
    int ar[10];
    for (size_t ix = 0; ix < 10; ++ix)
        ar[ix] = ix;
    int new_ar[10];
    for (size_t ix = 0; ix < 10; ++ix)
        new_ar[ix] = ar[ix];
    vector<int> v1;
    for (size_t ix = 0; ix < 10; ++ix)
        v1.push_back(ix);
    vector<int> v2 = v1;
    for(const auto &i : new_ar){
        cout<<i<<" ";
    }
    cout<<endl;
    for(const auto &i : v2){
        cout<<i<<" ";
    }
    return 0;
}