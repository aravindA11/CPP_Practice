#ifndef SALES_DATA_H
#define SALES_DATA_H
/*
Exercise 2.41: Use your Sales_data class to rewrite the exercises in §
 1.5.1 (p.22), § 
1.5.2 (p.24), and § 
1.6 (p.25). For now, you should define your Sales_data class in the same file as your main function.
*/

#include<iostream>
#include<string>

struct Sales_data{
    double revenue=0;
    std::string isbn_no;
    int units_sold;
};
/*
Exercise 1.21: Write a program that reads two Sales_item objects that
 have the same ISBN and produces their sum.
*/

void AddTwoObjects() {
    Sales_data d1,d2;
    std::cout<<"Enter d1 information: "<<std::endl;
    std::cin>>d1.isbn_no>>d1.units_sold>>d1.revenue;
    d1.revenue *= d1.units_sold;
    std::cout<<"Enter d2 information: "<<std::endl;
    std::cin>>d2.isbn_no>>d2.units_sold>>d2.revenue;
    d2.revenue *= d2.units_sold;
    if(d1.isbn_no == d2.isbn_no)
    {
        if(d1.units_sold + d2.units_sold)
        {
            std::cout<<"total Revenue "<<d1.revenue + d2.revenue;
        }
        else{
            std::cout<<"No books sold for the ISBN: "<<d1.isbn_no<<std::endl;
        }
    }
    else {
        std::cout<<"Entered books are not of same isbn"<<std::endl;
    } 

}

 /*
Exercise 1.22: Write a program that reads several transactions for the
 same ISBN. Write the sum of all the transactions that were read. 
 */

void looper() {
    Sales_data final_item;
if(std::cin>>final_item.isbn_no>>final_item.units_sold>>final_item.revenue) {
    final_item.revenue *= final_item.units_sold;
    Sales_data curr_trans;
    while(std::cin>>curr_trans.isbn_no>>curr_trans.units_sold>>curr_trans.revenue) {
        curr_trans.revenue *= curr_trans.units_sold;
        if(final_item.isbn_no == curr_trans.isbn_no){
            final_item.revenue  += curr_trans.revenue; // Add the current transaction to the final item
            final_item.units_sold += curr_trans.units_sold;
        } 
        else {
            std::cout<<"The current sales_item object has different ISBN with the final item."<<std::endl;
        }
    }
    
    std::cout<<"Summation of all transaction till now "<<final_item.revenue << std::endl;
}
else {
    std::cerr << "No valid input provided." << std::endl;
}
}
/*
Exercise 1.23: Write a program that reads several transactions and
 counts how many transactions occur for each ISBN.
Exercise 1.24: Test the previous program by giving multiple transactions
 representing multiple ISBNs. The records for each ISBN should be grouped
 together.
*/
void counter(){
    Sales_data current_item, previous_item;
    int count = 0;
    while(std::cin>>current_item.isbn_no>>current_item.units_sold>>current_item.revenue) {
        if (count == 0 || current_item.isbn_no != previous_item.isbn_no) {
            if (count > 0) {
                std::cout << "ISBN: " << previous_item.isbn_no
                          << " Count: " << count << std::endl;
            }
            previous_item = current_item; // Update the previous item
            count = 1; // Reset count for the new ISBN
        } else {
            ++count; // Increment count for the same ISBN
        }
    }
}

/*
Exercise 1.25: Using the Sales_item.h header from the Web site,
 compile and execute the bookstore program presented in this section.
*/

void final_prog(){
    Sales_data total; // variable to hold data for the next transaction
    // read the first transaction and ensure that there are data to process
    if (std::cin>>total.isbn_no>>total.units_sold>>total.revenue) {
        total.revenue *= total.units_sold;
        Sales_data trans; // variable to hold the running sum
        // read and process the remaining transactions
        while (std::cin>>trans.isbn_no>>trans.units_sold>>trans.revenue) {
            // if we're still processing the same book
            if (total.isbn_no == trans.isbn_no) {
                total.revenue  += total.revenue; // Add the current transaction to the final item
                total.units_sold += total.units_sold; // update the running total
            } 
            else {
                // print results for the previous book
                std::cout << total.isbn_no <<" " <<total.revenue << std::endl;
                total = trans;  // total now refers to the next book
            }
        }
        std::cout << total.isbn_no <<" " <<total.revenue << std::endl; // print the last transaction
    } else {
        // no input! warn the user
         std::cerr << "No data?!" << std::endl;
    }
}

#endif