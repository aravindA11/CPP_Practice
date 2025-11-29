//  Exercise 9.28: Write a function that takes a forward_list<string>
//  and two additional string arguments. The function should find the first
//  string and insert the second immediately following the first. If the first
//  string is not found, then insert the second string at the end of the
//  list.


#include <iostream>
#include <forward_list>
#include <string>
using std::forward_list;
using std::string;
using std::cout;
using std::endl;

bool insert_after_string(forward_list<string> &flst, const string &to_find, const string &to_insert) {
    auto prev = flst.before_begin();
    for (auto curr = flst.begin(); curr != flst.end(); ++prev, ++curr) {
        if (*curr == to_find) {
            flst.insert_after(curr, to_insert);
            return true;
        }
    }

    return false;
}

int main() {
    forward_list<string> flst = {"apple", "banana", "cherry"};

    string to_find = "banana";
    string to_insert = "date";

    if (!insert_after_string(flst, to_find, to_insert)) {
        flst.insert_after(flst.before_begin(), to_insert); // Insert at the beginning if not found
    }

    for (const auto &s : flst) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}
