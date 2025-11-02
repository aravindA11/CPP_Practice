/*
Exercise 6.55: Write four functions that add, subtract, multiply, and
divide two int values. Store pointers to these values in your vector
from the previous exercise.

Exercise 6.56: Call each element in the vector and print their result.
*/

#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b == 0) {
        throw std::invalid_argument("Division by zero");
    }
    return a / b;
}

int main() {
    // Vector of function pointers
    vector<int(*)(int, int)> funcs = {add, subtract, multiply, divide};

    int x = 20;
    int y = 5;

    // Execute each function in the vector
    for (const auto& func : funcs) {
        cout << "Result: " << func(x, y) << endl;
    }

    return 0;
}