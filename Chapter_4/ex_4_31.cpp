/*
Exercise 4.31: The program in this section used the prefix increment
and decrement operators. Explain why we used prefix and not postfix.
What changes would have to be made to use the postfix versions?
Rewrite the program using postfix operators.
*/

#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<int> ivec(10);
    vector<int>::size_type cnt = ivec.size();
    // assign values from size... 1 to the elements in ivec
    for(vector<int>::size_type ix = 0;
                ix != ivec.size(); ++ix, --cnt)
        ivec[ix] = cnt;
    for(auto i : ivec)
        cout<<i<<" ";
    cout<<endl;
    /* The only difference of using prefix and postfix operations is postfix returns the copy of its previous value
    here we are not using the results of postfix increment so there will be no difference in the results*/
    for(vector<int>::size_type ix = 0;ix != ivec.size(); ix++, cnt--)
        ivec[ix] = cnt;
    for(auto i : ivec)
        cout<<i<<" ";
    cout<<endl;

    return 0;
}