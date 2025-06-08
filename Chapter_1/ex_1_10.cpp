// Exercise 1.10: In addition to the ++ operator that adds 1 to its operand,
//  there is a decrement operator (--) that subtracts 1. Use the decrement
//  operator to write a while that prints the numbers from ten down to zero.
#include <iostream>

int main() {
    int iter = 10; // Starting point

    while (iter >= 0) { // Loop until i is less than 0
        std::cout << iter << std::endl; // Print current value of i
        --iter; // Decrement iter by 1
    }

    return 0;
}