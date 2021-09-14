#include "vector.h"
fun(vector<vector<int>> &p)
{
    vector<int> l;
    l.push_back(p[0]);
}
main()
{
    vector<vector<int>> v (3,vector<int>(5,10));
    fun(v);
}