// Exercise 9.38: Write a program to explore how vectors grow in the
// library you use.

#include<iostream>
#include<vector>
using std::vector;
using std::cout;
using std::endl;

int main() {
    vector<int> vec;
    size_t capacity = vec.capacity();
    cout << "Initial capacity: " << capacity << endl;

    for (int i = 0; i < 100; ++i) {
        vec.push_back(i);
        cout<<"size: "<<vec.size()<<" Capacity: "<<vec.capacity()<<endl;
    }

    return 0;
}