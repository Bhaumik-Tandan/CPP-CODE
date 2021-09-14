#include <iostream>
using namespace std;

template <typename t>
a(t b)
{
    cout<<b<<"\n";
}
main()
{
    a<string>("Sfdf");
    a<int>(42);
    a<float>(32.42);
}