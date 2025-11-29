/*
Exercise 9.15: Write a program to determine whether two
vector<int>s are equal.
*/

#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> vec1 = {1, 2, 3, 4, 5};
    vector<int> vec2 = {1, 2, 3, 4, 5};

    if (vec1 == vec2) {
        cout << "vec1 and vec2 are equal." << endl;
    } else {
        cout << "vec1 and vec2 are not equal." << endl;
    }

    return 0;
}