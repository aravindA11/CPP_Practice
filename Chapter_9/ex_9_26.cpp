/*
Exercise 9.26: Using the following definition of ia, copy ia into a
vector and into a list. Use the single-iterator form of erase to
remove the elements with odd values from your list and the even
values from your vector.
int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
*/

#include <iostream>
#include <vector>
#include <list>
using std::list;
using std::vector;
using std::cout;
using std::endl;

int main() {
    int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
    vector<int> vec(std::begin(ia), std::end(ia));
    list<int> lst(std::begin(ia), std::end(ia));

    // Remove even values from vector
    for (auto it = vec.begin(); it != vec.end(); ) {
        if (*it % 2 ) {
            ++it;
        } else {
            it = vec.erase(it); // erase returns the next iterator
        }
    }

    // Remove odd values from list
    for (auto it = lst.begin(); it != lst.end(); ) {
        if ( *it % 2 ) {
            ++it;
        } else {
            it = lst.erase(it); // erase returns the next iterator
        }
    }
    return 0;
}