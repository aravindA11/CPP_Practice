/*
Exercise 3.1: Rewrite the exercises from § 
1.4.1 (p. 13) and § 2.6.2 (p. 76) with appropriate using declarations.
*/

#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::cerr;

/*
Exercise 1.9: Write a program that uses a while to sum the numbers
 from 50 to 100.
*/

void fwhile(){
    int sum1 =0, var = 49;
    while(++var<=100){
        sum1 += var;
    }
    cout<<"Sum of 50 to 100: "<<sum1<<endl;
}

/*
Exercise 1.10: In addition to the ++ operator that adds 1 to its operand,
 there is a decrement operator (--) that subtracts 1. Use the decrement
 operator to write a while that prints the numbers from ten down to zero.
*/

void swhile(){
    int sum1 =0, var =11;
    while(--var>0){
        sum1+=var;
    }
    cout<<"Sum from 0 to 10: "<<sum1<<endl;
}

/*
Exercise 1.11: Write a program that prompts the user for two integers.
 Print each number in the range specified by those two integers.
 */

 void twhile(){
    int num1, num2;

    // Prompt the user for two integers
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    // Determine the range
    int start = num1 < num2 ? num1 : num2;
    int end = num1 > num2 ? num1 : num2;

    // Print each number in the range
    while(start <= end) {
        cout << start << endl;
        ++start; // Increment start to move to the next number
    }
 }

struct Sales_data{
    double revenue=0;
    string isbn_no;
    int units_sold;
};
/*
Exercise 1.21: Write a program that reads two Sales_item objects that
 have the same ISBN and produces their sum.
*/

void AddTwoObjects() {
    Sales_data d1,d2;
    cout<<"Enter d1 information: "<<endl;
    cin>>d1.isbn_no>>d1.units_sold>>d1.revenue;
    d1.revenue *= d1.units_sold;
    cout<<"Enter d2 information: "<<endl;
    cin>>d2.isbn_no>>d2.units_sold>>d2.revenue;
    d2.revenue *= d2.units_sold;
    if(d1.isbn_no == d2.isbn_no)
    {
        if(d1.units_sold + d2.units_sold)
        {
            cout<<"total Revenue "<<d1.revenue + d2.revenue;
        }
        else{
            cout<<"No books sold for the ISBN: "<<d1.isbn_no<<endl;
        }
    }
    else {
        cout<<"Entered books are not of same isbn"<<endl;
    } 

}

 /*
Exercise 1.22: Write a program that reads several transactions for the
 same ISBN. Write the sum of all the transactions that were read. 
 */

void looper() {
    Sales_data final_item;
if(cin>>final_item.isbn_no>>final_item.units_sold>>final_item.revenue) {
    final_item.revenue *= final_item.units_sold;
    Sales_data curr_trans;
    while(cin>>curr_trans.isbn_no>>curr_trans.units_sold>>curr_trans.revenue) {
        curr_trans.revenue *= curr_trans.units_sold;
        if(final_item.isbn_no == curr_trans.isbn_no){
            final_item.revenue  += curr_trans.revenue; // Add the current transaction to the final item
            final_item.units_sold += curr_trans.units_sold;
        } 
        else {
            cout<<"The current sales_item object has different ISBN with the final item."<<endl;
        }
    }
    
    cout<<"Summation of all transaction till now "<<final_item.revenue << endl;
}
else {
    cerr << "No valid input provided." << endl;
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
    while(cin>>current_item.isbn_no>>current_item.units_sold>>current_item.revenue) {
        if (count == 0 || current_item.isbn_no != previous_item.isbn_no) {
            if (count > 0) {
                cout << "ISBN: " << previous_item.isbn_no
                          << " Count: " << count << endl;
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
    if (cin>>total.isbn_no>>total.units_sold>>total.revenue) {
        total.revenue *= total.units_sold;
        Sales_data trans; // variable to hold the running sum
        // read and process the remaining transactions
        while (cin>>trans.isbn_no>>trans.units_sold>>trans.revenue) {
            // if we're still processing the same book
            if (total.isbn_no == trans.isbn_no) {
                total.revenue  += total.revenue; // Add the current transaction to the final item
                total.units_sold += total.units_sold; // update the running total
            } 
            else {
                // print results for the previous book
                cout << total.isbn_no <<" " <<total.revenue << endl;
                total = trans;  // total now refers to the next book
            }
        }
        cout << total.isbn_no <<" " <<total.revenue << endl; // print the last transaction
    } else {
        // no input! warn the user
         cerr << "No data?!" << endl;
    }
}

