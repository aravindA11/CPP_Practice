#include <iostream>
#include <string>
using namespace std;

class stop{
    public:
    const static int r = 40;
};
/*if the static member is passed as reference the definition of static member outside the class is needed*/
const int stop::r;

int fun(const int &r){
    int t;
    cin>>t;
    return r+t;
}
int main() {
    std::cout<<fun(stop::r);
    return 0;
}