/*
Exercise 6.21: Write a function that takes an int and a pointer to an
 int and returns the larger of the int value or the value to which the
 pointer points. What type should you use for the pointer?
*/

#include <iostream>
#include <stdexcept>
using std::cout;
using std::endl;
using std::cin;

int Max(int a, int* bPtr) {
    if (bPtr == nullptr) {
        throw std::invalid_argument("Null pointer provided");
    }
    return (a > *bPtr) ? a : *bPtr;
}

int main() {
    int x = 10;
    int y = 20;
    cin >> x >> y;
    try {
        int larger = Max(x, &y);
        cout << "The larger value is: " << larger << endl;
    } catch (const std::invalid_argument& e) {
        cout << e.what() << endl;
    }

    return 0;
}
