#include <iostream>
#include <vector>
using namespace std;

using std::vector;
/*
during coping values from vector of one type to another type following happens:
1. if both types are same then direct copy happens.
2. The types cannot be convertible even after they are convertible.
The below code won't compile because int cannot be converted to integer.
*/
int main()
{
    std::cout<<"Hello World";
    std::vector<int> h1 ={1,2,3};
    std::vector<double> h2 = {2.3,32.3556,3864.4989};
    // std::vector<int> h3 = h2; // won't compile
    return 0;
}