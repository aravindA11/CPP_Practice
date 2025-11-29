// Exercise 10.3: Use accumulate to sum the elements in a
//  vector<int>.

#include <iostream>
#include <vector>
#include <numeric>

using std::vector;
using std::cout;
using std::endl;

int main() {
    vector<int> vec;
    int num;

    cout << "Enter integers (non-integer to stop): " << endl;
    while (std::cin >> num) {
        vec.push_back(num);
    }

    int sum = std::accumulate(vec.begin(), vec.end(), 0);
    cout << "The sum of the elements is: " << sum << endl;

    return 0;
}