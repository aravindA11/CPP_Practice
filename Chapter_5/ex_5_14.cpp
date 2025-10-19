/*
Exercise 5.14: Write a program to read strings from standard input
 looking for duplicated words. The program should find places in the input
 where one word is followed immediately by itself. Keep track of the
 largest number of times a single repetition occurs and which word is
 repeated. Print the maximum number of duplicates, or else print a
 message saying that no word was repeated. For example, if the input is
 how now now now brown cow cow
 the output should indicate that the word now occurred three times.

*/

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string prevWord, currentWord
    ;
    unsigned maxCount = 0, iter = 0;
    cout<<"Enter Strings: ";
    while(cin>>currentWord) {
        if(!currentWord.empty() && currentWord == prevWord) {
            ++iter;
        } else {
            if(iter > maxCount)
                maxCount = iter;
            iter = 1; // reset count for new word
            prevWord = currentWord;
        }
    }
    if(maxCount > 1)
        cout<<"Maximum Duplicates: "<<maxCount<<endl;
    else
        cout<<"No word was repeated."<<endl;
    return 0;
}