// Exercise 9.45: Write a funtion that takes a string representing a name
//  and two other strings representing a prefix, such as “Mr.” or “Ms.” and
//  a suffix, such as “Jr.” or “III”. Using iterators and the insert and
//  append functions, generate and return a new string with the suffix and
//  prefix added to the given name.

#include <iostream>
#include <string>
using std::string;
using std::cout;

string addPrefixSuffix(const string &name, const string &prefix, const string &suffix) {
    string newName = name;
    
    if(!prefix.empty()) {
        // Insert the prefix at the beginning
        newName.insert(newName.begin(), prefix.begin(), prefix.end());
        newName.insert(newName.begin() + prefix.size(), ' '); // Add space after prefix
    }
    // Append the suffix at the end
    if(!suffix.empty())
        newName.append(" " + suffix); // Add space before suffix
    return newName;
}

int main() {
    string name = "John Doe";
    string prefix = "Mr.";
    string suffix = "Jr.";

    string fullName = addPrefixSuffix(name, prefix, suffix);
    cout << "Full name with prefix and suffix: " << fullName << "\n";

    return 0;
}