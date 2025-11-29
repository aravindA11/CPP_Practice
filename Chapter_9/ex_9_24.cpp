/*
Exercise 9.24: Write a program that fetches the first element in a
vector using at, the subscript operator, front, and begin. Test your
program on an empty vector
*/

#include <iostream>
#include <vector>
using std::vector;

/* using front, begin, back will have undefined behaviour*/
int main(){
    vector<int> test;
    try{
        std::cout<<"Using at(): "<<test.at(0)<<std::endl;
    }
    catch(std::out_of_range){
        std::cout<<"Using at(): Caught out_of_range exception"<<std::endl;
    }
    // Using subscript operator
    // std::cout<<"Using subscript operator: "<<test[0]<<std::endl; // this will lead to undefined behaviour

    try{
        std::cout<<"Using front(): "<<test.front()<<std::endl;
    }
    catch(...){
        std::cout<<"Using front(): Caught exception"<<std::endl;
    }

    try{
        std::cout<<"Using begin(): "<<*test.begin()<<std::endl;
    }
    catch(...){
        std::cout<<"Using begin(): Caught exception"<<std::endl;
    }

    return 0;
}