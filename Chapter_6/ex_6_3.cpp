/*
Exercise 6.3: Write and test your own version of fact.
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int fact(int val) {
    int res =1;
    if(val<=0)
        return 0;
    while(val > 1) {
        res *= val;
        --val;
    }
    return res;
}

int main() {
    int num;
    cout<<"Enter a number to calculate factorial: ";
    cin>>num;
    int result = fact(num);
    if(result != 0)
        cout<<"Factorial of "<<num<<" is "<<result<<endl;
    else
        cout<<"Factorial is not defined for non-positive integers."<<endl;
    return 0;
}