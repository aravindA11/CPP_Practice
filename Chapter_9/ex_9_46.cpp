// Exercise 9.46: Rewrite the previous exercise using a position and length
//  to manage the strings. This time use only the insert function.


#include <iostream>
#include <string>
using std::string;
using std::cout;

string addPrefixSuffix(const string &name, const string &prefix, const string &suffix) {
    string newName = name;
    
    if(!prefix.empty()) {
        // Insert the prefix at the beginning
        newName.insert(0, prefix + " "); // Add space after prefix
    }
    // Append the suffix at the end
    if(!suffix.empty())
        newName.insert(newName.size(), " " + suffix); // Add space before suffix
    return newName;
}