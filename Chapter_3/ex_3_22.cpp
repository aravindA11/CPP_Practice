/*
Exercise 3.22: Revise the loop that printed the first paragraph in text to
instead change the elements in text that correspond to the first
paragraph to all uppercase. After you’ve updated text, print its contents.
*/

#include<iostream>
#include<string>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
    vector<string> text;
    string line;
    cout << "Enter lines of text (Ctrl+D to end):" << endl;
    while (std::getline(cin, line)) { // Read a line at a time
        text.push_back(line);
    }
    for (auto it = text.begin();
     it != text.end() && !it->empty(); ++it){
        for(auto &c : *it) {
            if(isalpha(c) && islower(c))
                c = toupper(c);
        }
        cout << *it << endl;
     }

}