#include<iostream>
using namespace std;

class A
{
  public:
  int a;
  int operator +(A l)
  {
      int p;
      int f;
      f=l.a-a;
      p=l.a+a;
     f=0;
      return p;
  }     
};
main()
{
  A f,g;
  f.a=78;
  g.a=7;
  int h=f+g;
  cout<<h;
}