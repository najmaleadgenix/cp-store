#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node* prev=NULL;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev=NULL;
    }
};
void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newnode=new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}
int size(Node* head)
{
    int sz=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        sz++;
    }
    return sz;
}
void insert_at_head(Node* &head, Node* &tail , int val)
{
    Node* newnode =new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}
void insert_at_any_pos(Node* &head, Node* &tail,int idx, int val)
{
    Node* newnode= new Node(val);
    Node* temp=head;
    for(int i=1; i<idx; i++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next->prev=newnode;
    temp->next=newnode;
    newnode->prev=temp;
}
void print(Node* head)
{
    Node* temp=head;
    cout<<"L -> ";
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void print_reverse(Node* tail)
{
    Node* temp=tail;
    cout<<"R -> ";
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->prev;
    }
    cout<<endl;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int x,v;
    int q;
    cin>>q;
    while(q--)
    {
        cin>>x>>v;
        
        int sz=size(head);
        if(x==0)
        {
            insert_at_head(head,tail,v);
            print(head);
            print_reverse(tail);
        }
        else if(x==sz)
        {
            insert_at_tail(head,tail,v);
            print(head);
            print_reverse(tail);
        }
        else if(x>sz)
        {
            cout<<"Invalid"<<endl;
        }
        else
        {
            insert_at_any_pos(head,tail,x,v);
            print(head);
            print_reverse(tail);
        }

    }
   
    return 0;
}