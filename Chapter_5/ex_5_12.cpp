/*
 Exercise 5.12: Modify our vowel-counting program so that it counts the
 number of occurrences of the following two-character sequences: ff,
 fl, and fi.
*/


#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
    char ch;
    int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    int spaceCnt = 0, tabCnt = 0, newlineCnt = 0;
    int ffCnt = 0, flCnt = 0, fiCnt = 0;
    cout<<"Enter text: "<<endl;
    while(cin.get(ch)) {
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
            case 'f' :
                if(cin.peek() == 'f') {
                    ++ffCnt;
                    cin.get(); // consume the next 'f'
                }
                else if(cin.peek() == 'l') {
                    ++flCnt;
                    cin.get(); // consume the next 'l'
                }
                else if(cin.peek() == 'i') {
                    ++fiCnt;
                    cin.get(); // consume the next 'i'
                }
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
    cout<<"Number of 'ff' sequences: "<<ffCnt<<endl;
    cout<<"Number of 'fl' sequences: "<<flCnt<<endl;
    cout<<"Number of 'fi' sequences: "<<fiCnt<<endl;
    return 0;
}