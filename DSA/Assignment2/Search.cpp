#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node* newnode=new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
void search_x(Node* head, int x)
{
    Node* temp=head;
    vector<int>v;
    while(temp!=NULL)
    {
        v.push_back(temp->val);
        temp=temp->next;
    }
    int tmp=-1;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]==x)
        {
            tmp=i;
            break;
        }
    }
    cout<<tmp<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        Node* head=NULL;
        Node* tail=NULL;
        int val;
        while(1)
        {
            cin>>val;
            if(val==-1)
            {
                break;
            }
            insert_at_tail(head,tail,val);
        }
        int x;
            cin>>x;
           search_x(head,x);
        
    }
    
    return 0;
}