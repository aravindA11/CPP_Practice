/*
Exercise 1.23: Write a program that reads several transactions and
 counts how many transactions occur for each ISBN.
*/

#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item current_item, previous_item;
    int count = 0;
    while(std::cin >> current_item) {
        if (count == 0 || current_item.isbn() != previous_item.isbn()) {
            if (count > 0) {
                std::cout << "ISBN: " << previous_item.isbn() 
                          << " Count: " << count << std::endl;
            }
            previous_item = current_item; // Update the previous item
            count = 1; // Reset count for the new ISBN
        } else {
            ++count; // Increment count for the same ISBN
        }
    }
    return 0;
}