/*
Exercise 8.13: Rewrite the phone number program from this section to
read from a named file rather than from cin.
*/

#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::string;
using std::ostream;
using std::ostringstream;
using std::cerr;

struct PersonInfo {
    string name;
    vector<string> phones;
};
constexpr int kPhoneNumberLength = 11;

bool valid(const string &num) {
  if (num.size() != kPhoneNumberLength)
    return false;
  for (const auto &c : num)
    if (c < '0' || c > '9')
      return false;
  return true;
}

string format(const string &num) {
  return num.substr(0, 3) + '-' + num.substr(3, 4) + '-' + num.substr(7,4);
}

void process_phone_numbers(const string &filename, ostream& os,vector<PersonInfo> &people) {
    ifstream infile(filename);
    if (!infile.is_open()) {
        cout << "Could not open the file: " << filename << endl;
        return;
    }

    for (const auto &entry : people) {    // for each entry in people
        ostringstream formatted, badNums; // objects created on each loop
        for (const auto &nums : entry.phones) { // for each number
            if (!valid(nums)) {
            badNums << " " << nums;  // string in badNums
        } else
            // ''writes'' to formatted's string
            formatted << " " << format(nums);
        }
        if (badNums.str().empty())      // there were no bad numbers
            os << entry.name << " "     // print the name
            << formatted.str() << endl; // and reformatted numbers
        else                   // otherwise, print the name and badnumbers
            cerr << "input error: " << entry.name
                << " invalid number(s) " << badNums.str() <<endl;
    }
}