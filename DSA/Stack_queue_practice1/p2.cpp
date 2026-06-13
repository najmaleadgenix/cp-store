/*
Question: Take a stack of size N and a queue of size M as input. 
Then check if both of them are the same or not in the order of removing. 
You should use STL to solve this problem.

Sample Input                                       Sample Output
5
10 20 30 40 50
5                                                       NO
10 20 30 40 50

5
10 20 30 40 50                                              NO
4
10 20 30 40

5
10 20 30 40 50                                              YES
5
50 40 30 20 10


*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
    queue<int>q;
    int n,m;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        st.push(val);
    }
    cin>>m;
    for(int i=0; i<m; i++)
    {
        int val;
        cin>>val;
        q.push(val);
    }
    if(st.size()!=q.size())
    {
        cout<<"no";
        return 0;
    }
    int flag=1;
    while(!st.empty())
    {
        if(st.top()!=q.front())
        {
            flag=0;
            break;
        }
        st.pop();
        q.pop();
    }
    if(flag)
    cout<<"yes";
    else 
    cout<<"no";
    return 0;
}