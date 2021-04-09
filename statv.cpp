#include<iostream>
using namespace std;



main()
{
  int i;
  for(i=0;i<5;i++)
  {
      static int a=0;
      cout<<a;
      a+=1;
  }
}
