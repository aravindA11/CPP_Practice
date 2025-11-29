/*
 Exercise 9.20: Write a program to copy elements from a list<int>
into two deques. The even-valued elements should go into one deque
and the odd ones into the other.
*/

#include <iostream>
#include <deque>
#include <list>
using std::list;
using std::deque;

int main() {
    list<int> li = {1,2,3,4,5};
    deque<int> evend, oddd;
    for(auto iter = li.begin(); iter != li.end(); iter++)
        if( (*iter) % 2)
            evend.push_back(*iter);
        else
            oddd.push_back(*iter);
    for(auto iter : evend)
        std::cout<<iter<<" ";
    std::cout<<std::endl;
    for(auto iter : oddd)
        std::cout<<iter<<" ";
    return 0;
}