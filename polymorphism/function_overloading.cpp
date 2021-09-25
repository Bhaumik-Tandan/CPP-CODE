#include<iostream>
using namespace std;

fun(int a)
{
   static  int h=a;
    cout<<h<<endl;
    h++;
}



main()
{
    fun(89);
    fun(90);
    fun(9);
}