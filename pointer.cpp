#include<iostream>
using namespace std;

void fun()
{
  cout<<"jh";
}

main()
{
  void *p;
  int a=4;
  p=&a;
  int *f=(int*)p;
  fun();
  //cout<<*f;
}
