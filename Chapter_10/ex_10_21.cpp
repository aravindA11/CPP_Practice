//  Exercise 10.21: Write a lambda that captures a local int variable and
//  decrements that variable until it reaches 0. Once the variable is 0
//  additional calls should no longer decrement the variable. The lambda
//  should return a bool that indicates whether the captured variable is 0.


#include <iostream>
using std::cout;
using std::endl;

void testDecrementer() {
    int value = 5;
    auto decrementer = [value]() mutable -> bool {
        if (value > 0) {
            --value;
        }
        return value == 0;
    };

    bool isZero = decrementer();
    cout << "After call, value is zero: " << isZero << endl;
}