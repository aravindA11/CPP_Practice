/*
 Exercise 3.24: Redo the last exercise from § 
3.3.3 (p. 105) using iterators.
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

    for(vector<int>::iterator iter = v1.begin()+1; iter!=v1.end(); iter++){
        cout<<*(iter-1) + *iter<<" ";
    }
    
    int size = v1.size();
    for(auto biter = v1.begin(), eiter = v1.end()-1; biter<eiter; biter++, eiter--){
            cout<<*biter + *eiter<<" ";
    }
    if(size % 2) {
        cout<<v1[size/2];
    }
    return 0;
}