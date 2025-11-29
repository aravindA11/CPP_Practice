// Exercise 10.16: Write your own version of the biggies function using
//  lambdas.

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::unique;
using std::sort;
using std::stable_sort;

void elimDups(vector<string> &words) {
    // Sort words to prepare for unique
    sort(words.begin(), words.end());
    // Use unique to remove duplicates
    auto end_unique = unique(words.begin(), words.end());
    // Erase the non-unique elements
    words.erase(end_unique, words.end());
}

void biggies(vector<string> &words, vector<string>::size_type sz) {
    elimDups(words);
    // stable_sort using a lambda that compares string lengths
    stable_sort(words.begin(), words.end(),
                [](const string &a, const string &b) {
                    return a.size() < b.size();
                });
    // Find the first word with size >= sz
    auto wc = std::find_if(words.begin(), words.end(),
                           [sz](const string &a) {
                               return a.size() >= sz;
                           });
    // Print the words of size >= sz
    auto count = words.end() - wc;
    cout << count << " words of length " << sz << " or longer" << endl;
    for_each(wc, words.end(),
             [](const string &s) {
                 cout << s << " ";
             });
    cout << endl;
}