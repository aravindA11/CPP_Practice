/*
Exercise 8.8: Revise the program from the previous exercise to append
its output to its given file. Run the program on the same output file at
least twice to ensure that the data are preserved
*/


#include<iostream>
#include<fstream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::string;

class Sales_data{
    double revenue;
    string isbn_no;
    int units_sold;
    
    public:
    Sales_data(): Sales_data("", 0, 0) {} // default constructor
    Sales_data(const string &s): Sales_data(s, 0, 0) {} // constructor taking string
    Sales_data(const string &s, int n, double p): 
        isbn_no(s), units_sold(n), revenue(n * p) {} // constructor taking all data members
    Sales_data(std::istream &is);
    
    Sales_data& combine(const Sales_data &rhs){
        revenue += rhs.revenue;
        units_sold += rhs.units_sold;
        return *this;
    }
    
    string isbn() const {
        return isbn_no;
    }
    friend std::ostream& print(std::ostream &os, const Sales_data &item);
    friend std::istream& read(std::istream &is, Sales_data &item);
    inline double avg_price() const; // Declaration of inline function
};

Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {
    Sales_data sum = lhs; // copy data members from lhs into sum
    sum.combine(rhs);     // add data members from rhs into sum
    return sum;
}

std::istream& read(std::istream &is, Sales_data &item) {
    is >> item.isbn_no >> item.units_sold >> item.revenue;
    item.revenue *= item.units_sold;
    return is;
}

std::ostream& print(std::ostream &os, const Sales_data &item) {
    os << "ISBN: " << item.isbn_no 
       << " Units Sold: " << item.units_sold 
       << " Total Revenue: " << item.revenue;
    return os;
}

inline double Sales_data::avg_price() const { // Definition of inline function
    if (units_sold == 0) {
        return 0;
    } else {
        return revenue / units_sold;
    }
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        cout << "Usage: " << argv[0] << " <input_file> <output_file>" << endl;
        return 1;
    }
    
    string inputFileName = argv[1];
    string outputFileName = argv[2];
    
    ifstream inputFile(inputFileName);
    if (!inputFile) {
        cout << "Error opening input file: " << inputFileName << endl;
        return 1;
    }
    
    std::ofstream outputFile(outputFileName, std::ios::app);
    if (!outputFile) {
        cout << "Error opening output file: " << outputFileName << endl;
        return 1;
    }
    
    Sales_data total;
    if (read(inputFile, total)) {
        Sales_data trans;
        while (read(inputFile, trans)) {
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {
                print(outputFile, total) << endl;
                total = trans;
            }
        }
        print(outputFile, total) << endl;
    } else {
        cout << "No data?!" << endl;
    }
    return 0;
}