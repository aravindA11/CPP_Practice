/*
Exercise 9.16: Repeat the previous program, but compare elements in a
list<int> to a vector<int>.
*/

#include <iostream>
#include <vector>
#include <list>
using std::cout;
using std::endl;
using std::vector;
using std::list;

bool operator<(const list<int> &lhs, const vector<int> &rhs) {
    auto lit = lhs.begin();
    auto vit = rhs.begin();

    for ( ; lit != lhs.end() && vit != rhs.end(); ++lit, ++vit) {
        if (*lit < *vit) return true;
        else return false;
    }
    return lhs.size() < rhs.size();
}

int main()
{
    list<int> lst = {1, 2, 3, 4, 5};
    vector<int> vec = {1, 2, 3, 4, 6};

    if (lst < vec) {
        cout << "list is less than vector." << endl;
    } else {
        cout << "list is not less than vector." << endl;
    }

    return 0;
}