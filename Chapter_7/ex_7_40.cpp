/*Exercise 7.40: Choose one of the following abstractions (or an
abstraction of your own choosing). Determine what data are needed in
the class. Provide an appropriate set of constructors. Explain your
decisions.
(a) Book
(b) Date
(c) Employee
(d) Vehicle
(e) Object
(f) Tree
*/

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

/*(a) Book*/

class Book {
    public:
        Book() = default;
        Book(const string &tit, const string &auth, const string &isbn, const string &pub, double p) 
            : title(tit), author(auth), isbn(isbn), publisher(pub), price(p) {}
        
        void display() const {
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "ISBN: " << isbn << endl;
            cout << "Publisher: "<< publisher << endl;
            cout << "Price: $" << price << endl;
        }
        
    private:
        string title;
        string author;
        string isbn;
        string publisher;
        double price = 0.0;
};

/*(b) Date*/

class Date {
    public:
        Date() = default;
        Date(int yr,int mth, int day) : year(yr), month(mth), day(day) {}

        void Display() const {
            cout<< year <<"\\" << month << "\\" <<day;
        }
    private:
        int year = 1976;
        int day = 1;
        int month = 1;
};

/* (c) Employee */

class Employee {
    
}