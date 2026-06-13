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
int size(Node* &head)
{
    int sz=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        sz++;
        temp=temp->next;
    }
    return sz;
}
void insert_at_head(Node* &head,int val)
{
    Node* newnode =new Node(val);
    newnode->next=head;
    head=newnode;
}
void insert_at_tail(Node* &head, Node* &tail, int val)
{
    if(head==NULL)
    {
        Node* newnode= new Node(val);
        head=newnode;
        tail = newnode;
        return;
    }
    Node* newnode = new Node(val);
    tail->next=newnode;
    tail=newnode;
}
void insert_at_any_pos(Node* &head,Node* &tail,int index, int val)
{
    Node* temp= head;
    Node* newnode= new Node(val);
    for(int i=1; i<index; i++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}

void print_list(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
       temp= temp->next;
    }
    cout<<endl;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }
    int index,value;
    while(cin>>index>>value)
    {

        int sz = size(head);
        if(index>sz)
        {
            cout<<"Invalid"<<endl;
            continue;
        }
        else if(index==sz)
        {
            insert_at_tail(head,tail,value);
            
        }
        else if(index==0)
        {
            insert_at_head(head,value);
            
        }
        
        else
        {
            insert_at_any_pos(head,tail,index,value);
            
        }
        print_list(head);

    }
    return 0;
}