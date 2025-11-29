// Exercise 9.49: A letter has an ascender if, as with d or f, part of the
//  letter extends above the middle of the line. A letter has a descender if, as
//  with p or g, part of the letter extends below the line. Write a program that
//  reads a file containing words and reports the longest word that contains
//  neither ascenders nor descenders.

#include <iostream>
#include <fstream>
#include <string>
using std::string;
using std::ifstream;
using std::cout;
using std::endl;

bool hasNoAscendersOrDescenders(const string &word) {
    const string ascenders = "bdfhklt";
    const string descenders = "gjpqy";
    
    for(char c : word) {
        if(ascenders.find(c) != string::npos || descenders.find(c) != string::npos) {
            return false;
        }
    }
    return true;
}

int main() {
    ifstream inputFile("words.txt");
    if(!inputFile) {
        cout << "Could not open the file!" << endl;
        return 1;
    }

    string longestWord;
    string word;
    while(inputFile >> word) {
        if(hasNoAscendersOrDescenders(word) && (word.size() > longestWord.size())) {
            longestWord = word;
        }
    }

    if(!longestWord.empty()) {
        cout << "The longest word without ascenders or descenders is: " << longestWord << endl;
    } else {
        cout << "No words without ascenders or descenders were found." << endl;
    }

    return 0;
}