/*
Exercise 4.22: Extend the program that assigned high pass, pass, and
fail grades to also assign low pass for grades between 60 and 75
inclusive. Write two versions: One version that uses only conditional
operators; the other should use one or more if statements. Which
version do you think is easier to understand and why?

*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    unsigned score;
    cout<<"Enter your score (0-100): ";
    cin>>score;

    // Using conditional operators
    string grade = (score >= 90) ? "High pass" :
                 (score >= 75) ? "Pass" :
                 (score >= 60) ? "Low pass" :
                                "Fail";

    if(score >= 0 && score <= 100)
        cout<<"Your grade (using conditional operators): "<<grade<<endl;
    else
        cout<<"Invalid score entered."<<endl;

    // Using if statements
    if(score >= 90)
        grade = "High pass";
    else if(score >= 75)
        grade = "Pass";
    else if(score >= 60)
        grade = "Low pass";
    else 
        grade = "Fail";

    if(score >= 0 && score <= 100)
        cout<<"Your grade (using if statements): "<<grade<<endl;
    else
        cout<<"Invalid score entered."<<endl;

    return 0;
}