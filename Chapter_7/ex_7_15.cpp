/*
Exercise 7.15: Add appropriate constructors to your Person class.
*/

#include <iostream>
#include <string>
using std::string;
using std::istream;

class Person {
public:
    string name;
    string address;
    Person() = default;
    Person(const string &n, const string &a): name(n), address(a) {}
    const string& getName() const {
        return name;
    }
    const string& getAddress() const {
        return address;
    }
};

std::istream& read(std::istream &is, Person &p){
    is >> p.name >> p.address;
    return is;
}

std::ostream& print(std::ostream &os, const Person &p){
    os << "Name: " << p.getName() 
       << " Address: " << p.getAddress();
    return os;
}