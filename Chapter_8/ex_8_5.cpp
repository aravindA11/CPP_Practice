/*
Exercise 8.5: Rewrite the previous program to store each word in a
separate element.
*/

#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::string;
using std::vector;

void readFilewordsToVector(const string &fileName, vector<string> &words) {
    ifstream inputFile(fileName);
    if (!inputFile) {
        cout << "Error opening file: " << fileName << endl;
        return;
    }
    
    string word;
    while (inputFile >> word) {
        words.push_back(word);
    }
    
    inputFile.close();
}

int main() {
    string fileName;
    cout << "Enter the file name to read: ";
    cin >> fileName;
    
    vector<string> words;
    readFilewordsToVector(fileName, words);
    
    cout << "Contents of the file:" << endl;
    for (const auto &line : words) {
        cout << line << endl;
    }
    
    return 0;
}