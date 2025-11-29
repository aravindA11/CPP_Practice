// Exercise 10.15: Write a lambda that captures an int from its enclosing
//  function and takes an int parameter. The lambda should return the sum
//  of the captured int and the int parameter.

#include <iostream>
using std::cout;
using std::endl;

int main() {
    int capturedValue = 10;
    auto addCapturedAndParam = [capturedValue](int param) {
        return capturedValue + param;
    };

    int paramValue = 5;
    int result = addCapturedAndParam(paramValue);

    cout << "Sum of captured value " << capturedValue
         << " and parameter value " << paramValue
         << " is: " << result << endl;

    return 0;
}