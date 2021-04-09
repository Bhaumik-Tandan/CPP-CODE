#include<iostream>
using namespace std;

void fun()
{
    static int a=0;
    cout<<a;
    a+=1;
}
main()
{
  fun();
  fun();
  fun();
  fun();
}
