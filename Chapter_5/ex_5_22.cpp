/*
 Exercise 5.22: The last example in this section that jumped back to
 begin could be better written using a loop. Rewrite the code to eliminate
 the goto.
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int get_size() {
    int sz;
    cout<<"Enter a positive size: ";
    cin>>sz;
    return sz;
}

int main() {
    int sz = get_size();
    while (sz <= 0)
    {
        sz = get_size();
        /* code */
    }
    return 0;
}