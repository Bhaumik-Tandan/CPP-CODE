#include<iostream>
using namespace std;

class A
{
    public:
    static int a;
    int b;
    float c;
};
int A::a;
main()
{
  A a,b,c;
  a.a=34;
  b.a=54;
  c.a=54;
  cout<<a.a<<endl;
  // b.a=54;
  cout<<b.a<<endl;
  // c.a=54;
  cout<<A::a<<endl;
}
