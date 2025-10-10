/*
Exercise 3.15: Repeat the previous program but read strings this
time.
*/

#include<iostream>
#include<vector>
#include<string>
using std::string;
using std::vector;
using std::cin;
using std::cout;
int main() {
    vector<string> v1;
    string val;
    while(cin>>val){
        v1.push_back(val);
    }
    for(const auto &i : v1){
        cout<<i<<" ";
    }
    return 0;
}