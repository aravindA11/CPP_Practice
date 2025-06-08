//  Exercise 1.11: Write a program that prompts the user for two integers.
//  Print each number in the range specified by those two integers.

#include <iostream>

int main() {
    int num1, num2;

    // Prompt the user for two integers
    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;

    // Determine the range
    int start = num1 < num2 ? num1 : num2;
    int end = num1 > num2 ? num1 : num2;

    // Print each number in the range
    for (int i = start; i <= end; ++i) {
        std::cout << i << std::endl;
    }

    return 0;
}