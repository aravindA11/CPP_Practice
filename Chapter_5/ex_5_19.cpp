/*
Exercise 5.19: Write a program that uses a do while loop to
 repetitively request two strings from the user and report which string
 is less than the other
*/

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string str1, str2;
    char choice;
    do {
        cout<<"Enter first string: ";
        cin>>str1;
        cout<<"Enter second string: ";
        cin>>str2;

        if(str1 < str2)
            cout<<str1<<" is less than "<<str2<<endl;
        else if(str1 > str2)
            cout<<str2<<" is less than "<<str1<<endl;
        else
            cout<<"Both strings are equal."<<endl;

        cout<<"Do you want to compare again? (y/n): ";
        cin>>choice;
    } while(choice == 'y' || choice == 'Y');

    return 0;
}