/*
 Exercise 7.9: Add operations to read and print Person objects to the
 code you wrote for the exercises in § 7.1.2 (p.260).
*/

#include <iostream>
#include <string>
using std::string;
using std::istream;

class Person {
public:
    string name;
    string address;
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