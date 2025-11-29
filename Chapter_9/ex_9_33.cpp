//  Exercise 9.33: In the final example in this section what would happen if
//  we did not assign the result of insert to begin? Write a program that
//  omits this assignment to see if your expectation was correct.

// Ans: insert might invalidate the iterator, so to keep the iterator valid we need to assign the result of insert to begin.

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;


int main() {
    vector<int> v1;
    vector<int>::iterator iter;
    while(iter != v1.end()) {
        if(*iter % 2) {
            v1.insert(iter, *iter);
            ++iter;
        } else {
            iter = v1.erase(iter);
        }
    }
    return 0;
}

