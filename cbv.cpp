#include <iostream>
using namespace std;

void fun(int *p)
{
    *p=34;
    cout<<p; //34
}
main()
{    
    int a=45;
    cout<<a<<endl; //45
    fun(&a);
    cout<<endl<<&a; //34
} 
