//This program prints the count of different consicutive numbers appearing in the input stream.
/*
Exercise 1.17: What happens in the program presented in this section if
 the input values are all equal? What if there are no duplicated values?

Ans: If the input values are all equal, the program will count that value and print it only once with its total count at the end. If there are no duplicated values, each value will be printed with a count of 1.
*/
#include <iostream>

int main() {
    int Val = 0,counter = 1, CurrVal = 0;
    if(std::cin >> Val){
        while(std::cin >> CurrVal){
            if(CurrVal == Val)
                counter++;// Increment the counter if the current value is equal to the previous one
            else{
                std::cout << "Value: " << Val << " Count: " << counter << std::endl; // Print the count of the previous value
                Val = CurrVal; // Update the current value to the new one
                counter = 1; // Reset the counter for the new value
            }
        }
        std::cout<< "Value: " << Val << " Count: " << counter << std::endl; // Print the count of the last value
    }
    else{
        // If no input is provided, we exit early
        std::cerr << "No proper input provided." << std::endl;
    }
    return 0;
}