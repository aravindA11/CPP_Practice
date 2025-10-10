/*
Exercise 3.16: Write a program to print the size and contents of the
 vectors from exercise 3.13. Check whether your answers to that
 exercise were correct. If not, restudy § 3.3.1 (p. 97) until you understand
 why you were wrong.
*/

#include<iostream>
#include<string>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int main() {
    vector<int> v1; // Ans: size: 0
    vector<int> v2(10); // Ans: size: 10 values are initilised to 0
    vector<int> v3(10, 42); // Ans: size: 10 values are initilised to 42
    vector<int> v4{10}; // Ans: size: 1 value: 10
    vector<int> v5{10, 42}; // Ans: size: 2 values: 10,42
    vector<string> v6{10}; // Ans: size : 10 value: ""
    vector<string> v7{10, "hi"}; //Ans: size: 10 value: "hi"
    std::cout<<"v1 size: "<<v1.size()<<std::endl;
    for(vector<int>::const_iterator i = v1.begin(); i!=v1.end(); i++){
        std::cout<<*i<<" ";
    }
    std::cout<<"v2 size: "<<v2.size()<<std::endl;
    for(vector<int>::const_iterator i = v2.begin(); i!=v2.end(); i++){
        std::cout<<*i<<" ";
    }
    std::cout<<endl;
    std::cout<<"v3 size: "<<v3.size()<<std::endl;
    for(vector<int>::const_iterator i = v3.begin(); i!=v3.end(); i++){
        std::cout<<*i<<" ";
    }
    std::cout<<endl;
    std::cout<<"v4 size: "<<v4.size()<<std::endl;
    for(vector<int>::const_iterator i = v4.begin(); i!=v4.end(); i++){
        std::cout<<*i<<" ";
    }
    std::cout<<endl;
    std::cout<<"v5 size: "<<v5.size()<<std::endl;
    for(vector<int>::const_iterator i = v5.begin(); i!=v5.end(); i++){
        std::cout<<*i<<" ";
    }
    std::cout<<endl;
    std::cout<<"v6 size: "<<v6.size()<<std::endl;
    for(vector<string>::const_iterator i = v6.begin(); i!=v6.end(); i++){
        std::cout<<*i<<" ";
    }
    std::cout<<"v7 size: "<<v7.size()<<std::endl;
    for(vector<string>::const_iterator i = v7.begin(); i!=v7.end(); i++){
        std::cout<<*i<<" ";
    }
    std::cout<<endl;
    return 0;
}