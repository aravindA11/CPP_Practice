/*
 Exercise 5.6: Rewrite your grading program to use the conditional
 operator (§ 4.7, p. 151) in place of the if–else statement.
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
    std::cout<<(( score >= 0 && score <= 100) ?
        "Your grade is: " + ((score <= 60) ? grades[0] : grades[(score - 50) / 10])
        : "Invalid score entered.")<<endl;

    return 0;
}