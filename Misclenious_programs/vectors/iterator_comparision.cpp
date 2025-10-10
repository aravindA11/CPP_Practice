#include <iostream>
#include <vector>
using namespace std;
/*
The program works fine if both the vectors of same type.
If the types are different then it won't compile.
*/
int main()
{
    vector<int> v1 = {1,2,3,4,5};
    vector<int> v2 ={5,32,423,13};
    auto vi1 = v1.begin();
    auto vi2 = v2.begin();
    std::cout<<"Hello World "<<(vi1 == vi2);

    return 0;
}