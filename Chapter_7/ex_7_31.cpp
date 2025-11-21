/*
 Exercise 7.31: Define a pair of classes X and Y, in which X has a pointer
 to Y, and Y has an object of type X.
*/

#include <iostream>

class Y; // forward declaration
class X {
    Y *yPtr;
public:
    X(Y* n = nullptr) : yPtr(n) {}
};

class Y {
    X xobj;
public:
    Y() : xobj(this) {}
};

