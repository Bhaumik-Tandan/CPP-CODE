#include<iostream>
#include<vector>
using namespace std;
main()
{
    vector<int> v,p;
    p.push_back(323);
    p.push_back(23);
    p.push_back(3);
    p.push_back(3);
    p.push_back(12);
    v=p;
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";

}