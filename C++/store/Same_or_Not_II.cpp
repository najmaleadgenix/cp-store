#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
class myStack
{
    public:
    vector<int>v;

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
    bool empty()
    {
        return v.empty();
    }
};
class myQueue
{
    public:
    Node* head=NULL;
    Node* tail=NULL;
    void push(int val)
    {
        Node* newnode= new Node(val);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            return;
        }
        tail->next=newnode;
        tail=newnode;
    }
    void pop()
    {
        Node* deletenode=head;
        head=head->next;
        delete deletenode;
        if(head==NULL)
        {
            tail=NULL;
        }
    }
    int front()
    {
        return head->val;
    }
};
int main()
{
    myStack st;
    myQueue q;
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n;i++)
    {
        int val;
        cin>>val;
        st.push(val);
    }
    for(int i=0; i<m;i++)
    {
        int val;
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