/*
 Exercise 3.25: Rewrite the grade clustering program from § 
104) using iterators instead of subscripts
*/

#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<unsigned> scores(11,0);
    unsigned grade;
    while(cin>>grade){
        if(grade<=100){
            ++*(scores.begin() + grade/10);
        }
    }
    for(vector<unsigned>::const_iterator iter = scores.begin(); iter!=scores.end(); iter++){
        cout<<*iter<<" ";
    }
    return 0;
}