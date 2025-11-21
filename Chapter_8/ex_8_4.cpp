/*
Exercise 8.4: Write a function to open a file for input and read its
contents into a vector of strings, storing each line as a separate
element in the vector.
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
    
    inputFile.close();
}

int main() {
    string fileName;
    cout << "Enter the file name to read: ";
    cin >> fileName;
    
    vector<string> lines;
    readFileLinesToVector(fileName, lines);
    
    cout << "Contents of the file:" << endl;
    for (const auto &line : lines) {
        cout << line << endl;
    }
    
    return 0;
}