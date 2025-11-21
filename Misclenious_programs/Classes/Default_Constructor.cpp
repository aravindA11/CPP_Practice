#include <iostream>
using namespace std;

class Example {
    int value;
    public:
    Example(const int& val) : value(val) {
        cout << "Parameterized constructor called with value: " << value << endl;
    }
};

/*compiles and works fine*/
class test1 {
    Example ex;
    public:
    test1() : ex(42) { // Delegating to Example's parameterized constructor
        cout << "test1 default constructor called." << endl;
    }
};

/*doesn't compiles and cannot creates objects*/
class test2 {
    Example ex;
    public:
    test2() { // Using uniform initialization syntax
        cout << "test2 default constructor called." << endl;
    }
};

/* compiles and executes but cannot create objects*/
class test3 {
    public:
    Example ex;
};