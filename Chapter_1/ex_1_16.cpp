//This example illustrates the use case of an unknown number of inputs and totaling their sum.
#include <iostream>

int main() {
    int sum = 0,val = 0;
    while(std::cin >> val) { // Read integers until end-of-file (EOF)
        sum += val; // Add the value to the sum
    }
    // After reading the inputs and  taking EOF into account, cin no longer takes input.
    // The value of val will be 0
    std::cout << "The total sum is: " << sum << std::endl; // Output the total sum

    return 0;
}