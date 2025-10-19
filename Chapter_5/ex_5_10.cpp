/*
Exercise 5.10: There is one problem with our vowel-counting program
 as we’ve implemented it: It doesn’t count capital letters as vowels. Write
 a program that counts both lower- and uppercase letters as the
 appropriate vowel—that is, your program should count both 'a' and 'A'
 as part of aCnt, and so forth.
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
    char ch;
    int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    cout<<"Enter text: "<<endl;
    while(cin>>ch) {
        switch(ch) {
            case 'a' : case 'A' :
                ++aCnt;
                break;
            case 'e' : case 'E' :
                ++eCnt;
                break;
            case 'i' : case 'I' :
                ++iCnt;
                break;
            case 'o' : case 'O' :
                ++oCnt;
                break;
            case 'u' : case 'U' :
                ++uCnt;
        }
    }
    cout<<"Number of vowels:"<<endl;
    cout<<"a/A: "<<aCnt<<endl;
    cout<<"e/E: "<<eCnt<<endl;
    cout<<"i/I: "<<iCnt<<endl;
    cout<<"o/O: "<<oCnt<<endl;
    cout<<"u/U: "<<uCnt<<endl;
    return 0;
}