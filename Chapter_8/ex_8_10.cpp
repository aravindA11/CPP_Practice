/*
Exercise 8.10: Write a program to store each line from a file in a
vector<string>. Now use an istringstream to read each element
from the vector a word at a time.
*/

#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<sstream>
using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::string;
using std::vector;
using std::istringstream;

void readFileLinesToVector(const string &fileName, vector<string> &lines) {
    ifstream inputFile(fileName);
    if (!inputFile) {
        cout << "Error opening file: " << fileName << endl;
        return;
    }
    
    string line;
    while (std::getline(inputFile, line)) {
        lines.push_back(line);
    }

    istringstream iss;
    for (const auto &ln : lines) {
        iss.str(ln); // Set the content of the istringstream to the current line
        string word;
        cout << "Words in line: " << ln << endl;
        while (iss >> word) {
            cout << word << endl;
        }
        iss.clear(); // Clear the state flags for the next line
    }
    
    inputFile.close();
}

int main() {
    string fileName;
    cout << "Enter the file name to read: ";
    cin >> fileName;
    
    vector<string> lines;
    readFileLinesToVector(fileName, lines);
    
    return 0;
}