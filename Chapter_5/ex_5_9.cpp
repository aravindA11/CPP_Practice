/*
Exercise 5.9: Write a program using a series of if statements to count
 the number of vowels in text read from cin.
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main() {
    char ch;
    int vowel_count = 0;
    cout<<"Enter text: "<<endl;
    while(cin>>ch) {
        if(ch == 'a' || ch == 'A' ||
           ch == 'e' || ch == 'E' ||
           ch == 'i' || ch == 'I' ||
           ch == 'o' || ch == 'O' ||
           ch == 'u' || ch == 'U') {
               ++vowel_count;
           }
    }
    cout<<"Number of vowels: "<<vowel_count<<endl;
    return 0;
}