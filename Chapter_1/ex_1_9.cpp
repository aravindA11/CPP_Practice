//  Exercise 1.9: Write a program that uses a while to sum the numbers
//  from 50 to 100.

#include <iostream>

int main() {
    int sum = 0;
    int iter = 50; // Starting point

    while (iter <= 100) { // Loop until iter is greater than 100
        sum += iter; // Add current value of iter to sum
        ++iter; // Increment iter by 1
    }

    std::cout << "The sum of numbers from 50 to 100 is: " << sum << std::endl;
    return 0;
}