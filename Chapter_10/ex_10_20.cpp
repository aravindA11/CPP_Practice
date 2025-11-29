//  Exercise 10.20: The library defines an algorithm named count_if. Like
//  find_if, this function takes a pair of iterators denoting an input range
//  and a predicate that it applies to each element in the given range.
//  count_if returns a count of how often the predicate is true. Use
//  count_if to rewrite the portion of our program that counted how many
//  words are greater than length 6.

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::count_if;

int main() {
    vector<string> words = {"hello", "world", "C++", "programming", "examples", "exercise", "challenge", "development"};

    int str_size = 6;
    auto isLongerThanX = [=](const string &s) { return s.size() > str_size; };
    // Use count_if to count words longer than 6 characters
    auto count = count_if(words.begin(), words.end(), isLongerThanX);

    cout << "Number of words longer than 6 characters: " << count << endl;

    return 0;
}