#include<bits/stdc++.h>
using namespace std;
int main()
{
  stack<int> st;
    queue<int> q;
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {int val;
        cin>>val;
        st.push(val);
    }
    for(int i=0; i<m; i++)
    {int val;
        cin>>val;
        q.push(val);
    }
    if(n!=m)
    {
        cout<<"NO";
        return 0;
    }
    int flag=1;
    while(!st.empty())
    {
        if(st.top()!=q.front())
        {
            flag=0;
            // cout<<"NO";
            break;
        }
        st.pop();
        q.pop();
    }
    if(flag)
    cout<<"YES";
    else 
    cout<<"NO";
    return 0;
}