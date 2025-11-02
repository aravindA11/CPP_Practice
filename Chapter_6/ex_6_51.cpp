/*
Exercise 6.51: Write all four versions of f. Each function should print a
distinguishing message. Check your answers for the previous exercise. If
your answers were incorrect, study this section until you understand why
your answers were wrong.
*/

#include <iostream>
using std::cout;
using std::endl;
void f(int) {
    cout << "f(int) called" << endl;
}

void f(int,int) {
    cout << "f(int, int) called" << endl;
}

void f(double, double = 3.14) {
    cout << "f(double, double) called" << endl;
}

void f() {
    cout << "f() called" << endl;
}


