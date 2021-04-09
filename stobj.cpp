#include<iostream>
using namespace std;

class A
{
    int a;
    public:
    A()
    {
        cout<<"\nConsturctor";
    }

    ~A()
    {
        cout<<"\nDesturctor";
    }
    
};

void fun()
{
  A a;
  cout<<"\nFunction";
}
main()
{
  fun();
  cout<<"\nMain";
}
