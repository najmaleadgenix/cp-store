/*
Question: Take two stacks of size N and M as input and check if both of them are the same or not.
 Don’t use STL to solve this problem.

Sample Input                      Sample Output
5
10 20 30 40 50                      YES
5
10 20 30 40 50

5
10 20 30 40 50
4                                        NO
10 20 30 40

5
10 20 30 40 50
5                                       NO
50 40 30 20 10

*/
#include<bits/stdc++.h>
using namespace std;
class myStack
{
    public:
    vector<int> v;

    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int sz()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
    }
};

int main()
{
    myStack st;
    myStack st2;
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        st.push(val);
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int val;
        cin>>val;
        st2.push(val);
    }
    
    if(st.sz()!=st2.sz())
    {
        cout<<"no";
        return 0;
    }
    bool flag=true;
    while(!st.empty())
    {
        if(st.top()!=st2.top())
        {
            flag=false;
            break;
        }
        st.pop();
        st2.pop();
    }
    if(flag)
    cout<<"yes";
    else
    cout<<"no";
}