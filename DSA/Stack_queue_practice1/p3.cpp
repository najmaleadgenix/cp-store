/*
Question: Take a stack of size N as input and copy those elements to another stack 
to get the values in the order they were inserted and print them. 
You should use STL to solve this problem.


Sample Input                                    Sample Output
5
10 20 30 40 50                                      10 20 30 40 50

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        st.push(val);
    }
    stack<int> temp;
    while(!st.empty())
    {
        temp.push(st.top());
        st.pop();
    }
     while(!temp.empty())
    {
        cout<<temp.top()<<" ";
        temp.pop();
    }
    // stack<int> st2;
    // while(!temp.empty())
    // {
    //     st2.push(temp.top());
    //     temp.pop();
    // }
    // while(!st2.empty())
    // {
    //     cout<<st2.top()<<" ";
    //     st2.pop();
    // }
    
    return 0;
}
