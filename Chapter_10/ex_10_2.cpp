// Exercise 10.2: Repeat the previous program, but read values into a
//  list of strings.

#include <iostream>
#include <list>
#include <algorithm>
using std::list;
using std::cout;
using std::endl;
using std::cin;
using std::string;

int main() {
    list<string> lis;
    string value, num;

    cout << "Enter a value to count: ";
    cin >> value;

    cout << "Enter integers (non-integer to stop): " << endl;
    while (cin >> num) {
        lis.push_back(num);
    }

    // cin.clear(); // clear the fail state
    // cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard invalid input

    auto count = std::count(lis.begin(), lis.end(), value);
    cout << "The value " << value << " appears " << count << " times." << endl;

    return 0;
}