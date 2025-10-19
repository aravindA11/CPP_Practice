/*
 Exercise 5.11: Modify our vowel-counting program so that it also counts
 the number of blank spaces, tabs, and newlines read.
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
    char ch;
    int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    int spaceCnt = 0, tabCnt = 0, newlineCnt = 0;
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
                break;
            case ' ' :
                ++spaceCnt;
                break;
            case '\t' :
                ++tabCnt;
                break;
            case '\n' :
                ++newlineCnt;
                break;

        }
    }
    cout<<"Number of vowels:"<<endl;
    cout<<"a/A: "<<aCnt<<endl;
    cout<<"e/E: "<<eCnt<<endl;
    cout<<"i/I: "<<iCnt<<endl;
    cout<<"o/O: "<<oCnt<<endl;
    cout<<"u/U: "<<uCnt<<endl;
    cout<<"Number of spaces: "<<spaceCnt<<endl;
    cout<<"Number of tabs: "<<tabCnt<<endl;
    cout<<"Number of newlines: "<<newlineCnt<<endl;
    return 0;
}