#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int nn;
    cin >> nn;
    int n=nn;
    vector<pair<int, int>> v;
    while (nn--)
    {

            int a, b;
            cin >> a >> b;
            v.push_back({a, b});

    }
    sort(v.begin(), v.end());
    set<pair<int,int>>ans;
    for(int i=0; i<n-1; i++)
    {
        for(int j=1; j<n; j++)
        {
            if(v[j].first>=v[i].first && v[j].first<=v[i].second)
            {
                int ff=v[i].first;
                int ss=max({v[j].second,v[i].second});
                ans.insert({ff,ss});
            }
            else ans.insert({v[j].first,v[j].second});
        }
    }
    for (auto x : ans)
    {
        cout << x.first << " " << x.second << '\n';
    }
    // cout<<ans.size()<<'\n';
    return 0;
}