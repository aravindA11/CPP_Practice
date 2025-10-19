/*
Exercise 5.17: Given two vectors of ints, write a program to
determine whether one vector is a prefix of the other. For vectors of
unequal length, compare the number of elements of the smaller vector.
For example, given the vectors containing 0, 1, 1, and 2 and 0, 1, 1, 2,
3, 5, 8, respectively your program should return true.
*/

#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<int> vec1, vec2;
    int num, n;

    cout<<"Enter number of elements for first vector: ";
    cin>>n;
    cout<<"Enter elements for first vector: ";
    for(int i=0;i<n;i++) {
        cin>>num;
        vec1.push_back(num);
    }

    cout<<"Enter number of elements for second vector: ";
    cin>>n;
    cout<<"Enter elements for second vector: ";
    for(int i=0;i<n;i++) {
        cin>>num;
        vec2.push_back(num);
    }

    size_t minSize = (vec1.size() < vec2.size()) ? vec1.size() : vec2.size();
    bool isPrefix = true;

    for(size_t i=0;i<minSize;i++) {
        if(vec1[i] != vec2[i]) {
            isPrefix = false;
            break;
        }
    }

    if(isPrefix)
        cout<<"One vector is a prefix of the other."<<endl;
    else
        cout<<"No vector is a prefix of the other."<<endl;

    return 0;
}