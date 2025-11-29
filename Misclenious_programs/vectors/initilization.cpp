#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct PersonInfo {
  string name;
  vector<string> phones;
  public:
  PersonInfo(const string &default_name) : name(default_name) { }
  void print(){
      cout<<name;
  }
};

/* here the vector is increasing its capacity irrespective of having no default constructor
Because the allocation of space doesn't effect with respect to object construction.
In the same time if the vector is resize the problem occures due to constrction of new objects 
if the size provided is greater than current size*/
int main()
{
    vector<PersonInfo> test;
    test.push_back(PersonInfo("fool"));
    for(int i=0;i<25;i++)
        test.push_back(PersonInfo("fool "+to_string(i)));
    for(int i = 0; i < test.capacity(); i++)
    {    test[i].print();
        cout<<endl;
    }// This loop works fine even if the objects are not constructed for all capacity. but the values are not printed for unconstructed objects.
    // test.resize(40); // this will give error due to no default constructor
    test.resize(10); // this will work fine
    test.reserve(50); // this will work fine
    cout<<test.size()<<" "<<test.max_size()<<" "<<test.capacity();
    return 0;
}