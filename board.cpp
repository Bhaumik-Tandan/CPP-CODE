#include <iostream>
using namespace std;

class A
{
    public:
    A()
    {
        cout<<"First Line\n";
    }
    ~A()
    {
        cout<<"\nThird Line";
    }
};

//First line
//Second line
//Third line
main()
{    
    A j;
    cout<<"Second line";
} 
