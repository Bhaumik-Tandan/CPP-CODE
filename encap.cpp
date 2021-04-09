#include <iostream>
using namespace std;
class A
{
    public:

    float bal;
    int ac;

    void print()
    {
        cout<<bal<<endl<<ac;
    }
}a,b;

main()
{    
    cout<<sizeof(float)+sizeof(int);
} 
