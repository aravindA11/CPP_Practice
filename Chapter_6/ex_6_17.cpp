/*
Exercise 6.17: Write a function to determine whether a string contains
any capital letters. Write a function to change a string to all lowercase.
Do the parameters you used in these functions have the same type? If
so, why? If not, why not?

Ans: The paramter types are different. In the first function, we only need to read
the string, so we can use a const reference to avoid unnecessary copying while ensuring the original string remains unchanged.
In the second function, we need to modify the string, so we use a non-const reference to allow changes to be made directly to the original string.
*/

#include <iostream>
#include <string>
#include <cctype>
using std::cout;
using std::endl;
using std::string;

bool hasCapitalLetters(const string &s)
{
    for (char ch : s)
    {
        if (std::isupper(static_cast<unsigned char>(ch)))
            return true;
    }
    return false;
}

void toLowerCase(string &s)
{
    for (char &ch : s)
    {
        ch = std::tolower(static_cast<unsigned char>(ch));
    }
}

int main()
{
    string testStr;
    cout << "Enter a string: ";
    std::getline(std::cin, testStr);
    cout << "Original string: " << testStr << endl;

    if (hasCapitalLetters(testStr))
        cout << "The string contains capital letters." << endl;
    else
        cout << "The string does not contain capital letters." << endl;

    toLowerCase(testStr);
    cout << "String after converting to lowercase: " << testStr << endl;

    return 0;
}