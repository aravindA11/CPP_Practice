//  Exercise 9.27: Write a program to find and remove the odd-valued
//  elements in a forward_list<int>.

#include <iostream>
#include <forward_list>
using std::forward_list;
using std::cout;
using std::endl;

int main() {
    forward_list<int> flst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Remove odd-valued elements
    for (auto prev = flst.before_begin(), curr = flst.begin(); curr != flst.end(); ) {
        if (*curr % 2 != 0) { // If the current element is odd
            curr = flst.erase_after(prev); // Erase and update curr
        } else {
            prev = curr; // Move prev to curr
            ++curr;      // Move curr to the next element
        }
    }

    for (const auto &elem : flst) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}