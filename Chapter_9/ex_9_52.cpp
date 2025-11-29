// Exercise 9.52: Use a stack to process parenthesized expressions.
//  When you see an open parenthesis, note that it was seen. When you
//  see a close parenthesis after an open parenthesis, pop elements down
//  to and including the open parenthesis off the stack. push a value onto
//  the stack to indicate that a parenthesized expression was replaced.

#include <iostream>
#include <stack>
using std::stack;
using std::cout;
using std::endl;

/* this program just validates paranthesis regular expression validation is not part of this program*/
bool isValidParentheses(const std::string &expr) {
    stack<char> s;
    for(char ch : expr) {
        if(ch == '(') {
            s.push(ch);
        } else if(ch == ')') {
            if(s.empty()) {
                return false; // Unmatched closing parenthesis
            }
            s.pop(); // Match found, pop the opening parenthesis
        }
    }
    return !s.empty(); // If stack is empty, all parentheses were matched
}