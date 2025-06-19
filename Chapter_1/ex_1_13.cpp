/*Exercise 1.13: Rewrite the exercises from § 1.4.1 (p.13) using for loops.*/

//This program has 3 parts

#include <iostream>

int main() {

    // Part 1: Sum the numbers from 50 to 100
    int sum = 0;
    for (int iter = 50; iter <= 100; ++iter) {
        sum += iter;
    }
    
    std::cout << "The sum of numbers from 50 to 100 is: " << sum << std::endl;

    // Part 2: Print the numbers from 10 down to 0
    for (int iter = 10; iter >= 0; --iter) {
        std::cout << iter << std::endl;
    }

    // Part 3: Print each number in the range specified by two integers
    int num1, num2;
    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;

    int start = num1 < num2 ? num1 : num2;
    int end = num1 > num2 ? num1 : num2;

    for (int i = start; i <= end; ++i) {
        std::cout << i << std::endl;
    }

    return 0;
}