#include <iostream>
using namespace std;

template <typename t,int m>
class a
{
    int l;
    public:
    a()
    {
        l=m;
    }
    void disp();
};
template <typename t,int m>
void a<t,m>::disp()
{
    cout<<l;
}
main()
{
    a<int,89> f;
    f.disp();
}