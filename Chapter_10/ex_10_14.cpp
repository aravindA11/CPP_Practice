//  Exercise 10.14: Write a lambda that takes two ints and returns their
//  sum.

#include <iostream>
using std::cout;
using std::endl;

int main() {
    auto sum = [](int a, int b) { return a + b; };

    int num1 = 5;
    int num2 = 10;
    int result = sum(num1, num2);

    cout << "The sum of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}