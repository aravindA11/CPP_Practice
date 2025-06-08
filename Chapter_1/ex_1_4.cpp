// Exercise 1.4: Our program used the addition operator, +, to add two
//  numbers. Write a program that uses the multiplication operator, *, to print
//  the product instead.

#include<iostream>

int main() {

	int v1 = 0, v2 = 0;
	std::cout << "Enter values to multipy" << std::endl;

	// Prompt the user for two integers
	std::cin >> v1 >> v2;

	// Print the product of the two integers
	std::cout << "Multiplied value: " << v1 * v2;

	return 0;
}