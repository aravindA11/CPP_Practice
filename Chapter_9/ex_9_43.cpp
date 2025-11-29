//  Exercise 9.43: Write a function that takes three strings, s, oldVal,
//  and newVal. Using iterators, and the insert and erase functions
//  replace all instances of oldVal that appear in s by newVal. Test your
//  function by using it to replace common abbreviations, such as “tho” by
//  “though” and “thru” by “through”.

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

void replaceAll(string &s, const string &oldVal, const string &newVal) {
    
    for(auto it = s.begin(); it < s.end() - oldVal.size() + 1; ) {
        auto currit = it;
        for(std::string::const_iterator ot = oldVal.begin(); ot != oldVal.end(); ++ot, ++currit) {
            if(*currit != *ot) {
                ++it;
                break;
            }
            
            if(ot + 1 == oldVal.end()) {
                std::string::size_type pos = it - s.begin();
                // erase the oldVal
                s.erase(it, it + oldVal.size());
                // insert the newVal
                s.insert(pos, newVal);
                // Move iterator forward by the size of newVal
                it = s.begin() + pos + newVal.size();
                break;
            }
        }
    }
}

int main() {
    string text = "I thru the park tho it was late. I can't believe I went thru tho!";
    cout << "Original text: " << text << endl;

    replaceAll(text, "tho", "though");
    
    cout << "Modified text: " << text << endl;

    replaceAll(text, "thru", "through");

    cout << "Modified text: " << text << endl;

    return 0;
}