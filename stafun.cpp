#include<iostream>
using namespace std;

class A
{
  public:
  static int a;
     static void  fun()
     {
       a=54;
       cout<<a;
       
     }
};
int A::a;
main()
{
  A::fun();
  A f;
  f.fun();
}
