/*
Exercise 6.26: Write a program that accepts the options presented in
this section. Print the values of the arguments passed to main.
*/

#include <iostream>
#include <string>
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    cout << "Number of arguments: " << argc << endl;
    for (int i = 0; i < argc; ++i) {
        cout << "Argument " << i << ": " << argv[i] << endl;
    }
    return 0;
}