/*
Exercise 7.5: Provide operations in your Person class to return the
 name and address. Should these functions be const? Explain your
 choice.
*/

#include <string>
class Person {
private:
    std::string name;
    std::string address;

public:
    const std::string& getName() const {
        return name;
    }

    const std::string& getAddress() const {
        return address;
    }
};