// Exercise 9.51: Write a class that has three unsigned members
//  representing year, month, and day. Write a constructor that takes a
//  string representing a date. Your constructor should handle a variety of
//  date formats, such as January 1, 1900, 1/1/1900, Jan 1, 1900, and so
//  on.

#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::cout;
using std::endl;
using std::vector;

class Date {
public:
    Date() = default;
    Date(const std::string &dateStr);
    Date(unsigned y, unsigned m, unsigned d) : year(y), month(m), day(d) {}
    void print() const {
        std::cout << year << "-" << month << "-" << day << std::endl;
    }

private:
    unsigned year{0}, month{0}, day{0};
    const static std::string alphabets;
    const static vector<std::string> months;
};

const std::string Date::alphabets = "abcdefghijklmnopqrstuvwxyz"
                                    "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const vector<std::string> Date::months = {
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December",
    "Jan", "Feb", "Mar", "Apr", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
};
Date::Date(const std::string &s) : Date() {
  if (s.find_first_of(alphabets) != std::string::npos) {
    // MMM dd yyyy  Dec 31, 1990    December 31, 1990
    for (std::vector<std::string>::size_type pos = 0;
        pos != months.size(); ++pos) {
      if (s.find(months[pos]) != std::string::npos) {
        month = pos + 1;
        break;
      }
    }
    std::string sub = s.substr(s.find_first_of("0123456789"));
    day = std::stoi(sub);
    sub = sub.substr(sub.find_first_not_of("0123456789"));
    sub = sub.substr(sub.find_first_of("0123456789"));
    year = std::stoi(sub);
  } else if (s.find_first_of('/') != std::string::npos) {
    // dd mm yyyy  31/12/1990
    std::string sub = s.substr(s.find_first_of("0123456789"));
    day = std::stoi(sub);
    sub = sub.substr(sub.find_first_not_of("0123456789"));
    sub = sub.substr(sub.find_first_of("0123456789"));
    month = std::stoi(sub);
    sub = sub.substr(sub.find_first_not_of("0123456789"));
    sub = sub.substr(sub.find_first_of("0123456789"));
    year = std::stoi(sub);
  } else {
    std::cerr << "Unrecognized date format." << std::endl;
  }
}

