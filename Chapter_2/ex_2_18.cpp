/*Exercise 2.18: Write code to change the value of a pointer. Write code to
 change the value to which the pointer points.*/

 #include<iostream>
 
 int main() {
    int val=20,*p=nullptr;
    p=&val;
    *p =  45;
    std::cout<<"Pointer dereference: "<<*p<<" value: "<<val;
    return 0;
 }