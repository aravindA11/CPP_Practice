/*
 Exercise 5.5: Using an if–else statement, write your own version of
 the program to generate the letter grade from a numeric grade.
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
    unsigned score;
    cout<<"Enter your score (0-100): ";
    cin>>score;
    char grades[]={'F','D','C','B','A','O'},grade;
    if(score >= 0 && score <= 100)
    {
        if(score <= 60)
            grade =grades[0];
        else
            grade = grades[(score - 50) / 10];

         cout<<"Your grade is: "<<grade<<endl;
    }       
    else
        cout<<"Invalid score entered."<<endl;

    return 0;
}