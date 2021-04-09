#include <iostream>      
#include <stdarg.h>
using namespace std;

int  sum (int c,...)
{
va_list a;
va_start(a,c);
int s=0;
while(c--)
s+=va_arg(a,int);
return s;
}

main()
{
    cout<<sum(2,3,2)<<endl<<sum(4,4,3,2,4);
}
