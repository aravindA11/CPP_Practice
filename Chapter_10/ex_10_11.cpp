// Exercise 10.11: Write a program that uses stable_sort and
// isShorter to sort a vector passed to your version of elimDups. Print
// the vector to verify that your program is correct.

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::cin;

bool isShorter(const string &s1, const string &s2) {
    return s1.size() < s2.size();
}

int main() {
    vector<string> words;
    string word;
    cout << "Enter words (non-string to stop): " << endl;
    while (cin >> word) {
        words.push_back(word);
    }
    // Sort the words to prepare for unique
    sort(words.begin(), words.end());

    // Use unique to remove duplicates
    auto end_unique = unique(words.begin(), words.end());

    // Erase the non-unique elements
    words.erase(end_unique, words.end());

    // Now stable_sort using isShorter
    stable_sort(words.begin(), words.end(), isShorter);

    cout << "Words after elimDups and stable_sort by length:" << endl;
    for (const auto& w : words) {
        cout << w << " ";
    }
    cout << endl;
    return 0;
}