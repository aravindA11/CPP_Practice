// Exercise 10.9: Implement your own version of elimDups. Test your
//  program by printing the vector after you read the input, after the call to
//  unique, and after the call to erase.

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::sort;
using std::unique;

int main() {
    vector<string> words;
    string word;

    cout << "Enter words (non-string to stop): " << endl;
    while (cin >> word) {
        words.push_back(word);
    }

    cout << "Words after input:" << endl;
    for (const auto& w : words) {
        cout << w << " ";
    }
    cout << endl;

    // Sort the words to prepare for unique
    sort(words.begin(), words.end());

    cout << "Words after sorting:" << endl;
    for (const auto& w : words) {
        cout << w << " ";
    }
    cout << endl;

    // Use unique to remove duplicates
    auto end_unique = unique(words.begin(), words.end());

    cout << "Words after unique:" << endl;
    for (const auto& w : words) {
        cout << w << " ";
    }
    cout << endl;

    // Erase the non-unique elements
    words.erase(end_unique, words.end());

    cout << "Words after erase:" << endl;
    for (const auto& w : words) {
        cout << w << " ";
    }
    cout << endl;

    return 0;
}