/*
Exercise 5.21: Revise the program from the exercise in § 
191) so that it looks only for duplicated words that start with an uppercase 5.5.1 (p. 
letter.
*/

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string prevWord, currentWord;
    while(cin>>currentWord) {
        if(!currentWord.empty() && currentWord == prevWord && isupper(currentWord[0])) {
            cout<<"The word \""<<currentWord<<"\" occurred twice in succession and starts with an uppercase letter."<<endl;
            break;
        }
        prevWord = currentWord;
    }
    return 0;
}