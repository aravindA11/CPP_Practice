/*
Exercise 6.25: Write a main function that takes two arguments.
Concatenate the supplied arguments and print the resulting string.
*/

#include <iostream>
#include <string>
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    if (argc != 3) {
        cout << "Please provide exactly two arguments." << endl;
        return 1;
    }

    std::string result = std::string(argv[1]) + std::string(argv[2]);
    cout << "Concatenated string: " << result << endl;

    return 0;
}