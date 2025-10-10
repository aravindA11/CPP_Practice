/*
Exercise 3.17: Read a sequence of words from cin and store the
 values a vector. After you’ve read all the words, process the vector
 and change each word to uppercase. Print the transformed elements,
 eight words to a line.
*/

#include<iostream>
#include<string>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int main() {
    vector<string> v1;
    string val;
    while(cin>>val){
        v1.push_back(val);
    }
    int count =0;
    for(auto &i : v1){
        for(auto &c : i) {
            c = toupper(c);
        }
        cout<<i<<" ";
        if(++count % 8 ==0){
            cout<<endl;
        }
    }
    return 0;
}