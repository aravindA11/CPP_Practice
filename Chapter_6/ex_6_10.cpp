/*
 Exercise 6.10: Using pointers, write a function to swap the values of two
 ints. Test the function by calling it and printing the swapped values
*/

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 10;
    int y = 20;

    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swap(&x, &y);
    cout << "After swap: x = " << x << ", y = " << y << endl;

    return 0;
}

