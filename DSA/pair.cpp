#include<bits/stdc++.h>
using namespace std;
int main()
{
    // pair<string,int>p;       // jekono 2ta data type likhte parbo
    // p={"Hello",3};              //    p =  make_pair(2,3);
    // cout<<p.first<<endl;
    // cout<<p.second<<endl;

    //vector k int type na niye pair type nite pari

    int n;cin>>n;
    vector<pair<int, int>>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    for(int i=0; i<n; i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }


    return 0;
}