/*
Exercise 3.40: Write a program to define two character arrays initialized
from string literals. Now define a third character array to hold the
concatenation of the two arrays. Use strcpy and strcat to copy the
two arrays into the third.
*/

#include<iostream>
#include<string>
#include<cstring>
using std::cout;
using std::cin;
using std::endl;

int main() {
    char arr1[50], arr2[50], arr3[100];
    cout << "Enter first string: ";
    cin.getline(arr1, 50);
    cout << "Enter second string: ";
    cin.getline(arr2, 50);

    // Copy first string into arr3
    strcpy(arr3, arr1);
    // Concatenate second string to arr3
    strcat(arr3, arr2);

    cout << "Concatenated string: " << arr3 << endl;

    return 0;
}