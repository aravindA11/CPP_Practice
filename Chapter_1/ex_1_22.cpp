/*
Exercise 1.22: Write a program that reads several transactions for the
 same ISBN. Write the sum of all the transactions that were read.
*/

#include <iostream>
#include "Sales_item.h"

int main() {
 Sales_item final_item;
    if(std::cin>>final_item){
        Sales_item curr_trans;
        while(std::cin>>curr_trans){
            if(final_item.isbn() == curr_trans.isbn()){
                final_item  += curr_trans; // Add the current transaction to the final item
            } 
            else {
                std::cout<<"The current sales_item object has different ISBN with the final item."<<std::endl;
            }
        }
        std::cout<<"Summation of all transaction till now "<<final_item << std::endl;
    }  
    else {
        std::cerr << "No valid input provided." << std::endl;
    }
    
 return 0; 
}