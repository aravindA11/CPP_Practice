/*
 Exercise 6.22: Write a function to swap two int pointers.

 Hint: One cannot send the address to a pointer reference directly as the address of operator returns a rvalue pointer.
*/
#include <iostream>
using std::cout;
using std::endl;

void Swap(int*& p1, int*& p2) {
    int* temp = p1;
    p1 = p2;
    p2 = temp;
}

int main() {
    int a = 5, b = 10;
    int* pA = &a;
    int* pB = &b;

    cout << "Before swap: *pA = " << *pA << ", *pB = " << *pB << endl;

    Swap(pA, pB);

    cout << "After swap: *pA = " << *pA << ", *pB = " << *pB << endl;

    return 0;
}