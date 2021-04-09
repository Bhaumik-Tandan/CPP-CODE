#include<iostream>
using namespace std;

int area(int a)
{
    return a*a;
}
int area(int a,int b)
{
    return a*b;
}
main()
{
     cout<<area(4)<<endl<<area(1,5);
}