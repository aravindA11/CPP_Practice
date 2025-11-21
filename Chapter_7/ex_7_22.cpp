/*
 Exercise 7.22: Update your Person class to hide its implementation.
*/

#include <iostream>
#include <string>
using std::string;
using std::istream;

class Person {
    string name;
    string address;
    public:
    Person() = default;
    Person(const string &n, const string &a): name(n), address(a) {}
    const string& getName() const {
        return name;
    }
    const string& getAddress() const {
        return address;
    }
    friend std::istream& read(std::istream &is, Person &p);
    friend std::ostream& print(std::ostream &os, const Person &p);
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