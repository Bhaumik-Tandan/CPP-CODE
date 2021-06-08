#include <iostream>
#include <vector>
using namespace std;
void ma(vector<int> &a)
{
    a.push_back(3);
}
main()
{
    vector<int> a;
    a.push_back(2);
    ma(a);
    cout << a.back();
}