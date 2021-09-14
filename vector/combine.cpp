#include "vector.h"
main()
{
    vector<int> l,r,v;
    v.push_back(3);
    l.push_back(1);
    l.push_back(2);
    r.push_back(4);
    r.push_back(5);
    v.insert(v.begin(),l.begin(),l.end());
    v.insert(v.end(),r.begin(),r.end());
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
}