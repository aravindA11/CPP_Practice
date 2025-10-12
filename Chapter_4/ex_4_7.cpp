/*
Exercise 4.7: What does overflow mean? Show three expressions that
 will overflow.
*/
#include <iostream>
#include <limits>
using std::cout;
using std::endl;

int main() {
    int max = std::numeric_limits<int>::max();
    int min = std::numeric_limits<int>::min();
    cout<<"Min int: "<<min<<endl;
    cout<<"Max int: "<<max<<endl;
    cout<<"Max int + 1: "<<max + 1<<endl; // Overflow
    cout<<"Max int * 2: "<<max * 2<<endl; // Overflow
    cout<<"Max int + Max int: "<<min - 1<<endl; // Overflow
    return 0;
}