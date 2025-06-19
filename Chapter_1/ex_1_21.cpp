/*
Exercise 1.21: Write a program that reads two Sales_item objects that
 have the same ISBN and produces their sum.
*/
#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item item1, item2;

    // Read two Sales_item objects
    std::cout << "Enter two Sales_item objects with the same ISBN: " << std::endl;
    std::cin >> item1 >> item2;

    // Check if the ISBNs match
    if (item1.isbn() == item2.isbn()) {
        // Produce their sum
        std::cout << "Sum of the two Sales_item objects: " << item1 + item2 << std::endl;
    } else {
        std::cerr << "Error: ISBNs do not match." << std::endl;
    }

    return 0;
}