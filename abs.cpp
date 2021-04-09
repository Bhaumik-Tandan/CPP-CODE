#include <iostream>
using namespace std;


class A
{
    float a;
    int b;

   

    A()
    {
        a=4;
        b=6;
    }
   public:
    A(int ab,int bc)
    {
        a=ab;
        b=bc;
    }

    A(A &l)
    {
        a=l.a;
        b=l.b;
    }

    ~A()
    {
        cout<<"D";
    }

    void fun()
    {
        cout<<a<<endl<<b;
    }

    friend main();
};

main()
{    
    A l;
} 
