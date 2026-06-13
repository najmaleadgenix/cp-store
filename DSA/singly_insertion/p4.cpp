/*
Question: Take a singly linked list as input, then take q queries. 
In each query you will be given an index and value. 
You need to insert those values in the given index and print the linked list.
 If the index is invalid print “Invalid”.

Sample Input

10 20 30 -1
1 40
5 50
4 50
0 100
7 40
1 110
7 40

Sample Output
10 40 20 30
Invalid
10 40 20 30 50
100 10 40 20 30 50
Invalid
100 110 10 40 20 30 50
100 110 10 40 20 30 50 40

*/
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
void insert_at_head(Node*  &head,int val)
{
    Node* newnode= new Node(val);
    newnode->next=head;
    head=newnode;
}
void insert_at_tail(Node* &head, Node* &tail, int val)
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
void insert_at_any_pos(Node* &head,int idx,int val)
{
    Node* newnode= new Node(val);
    Node* temp=head;
    for(int i=1; i<idx; i++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
int size(Node* head)
{
    Node* temp=head;
    int sz=0;
    while(temp!=NULL)
    {
        sz++;
        temp=temp->next;
    }
    return sz;
}
void print_list(Node* head)
{
    Node* temp= head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
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
    int index,value;
    while(cin>>index>>value)
    {
       int sz=size(head);

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
        insert_at_any_pos(head,index,value);

        print_list(head);
    }
    return 0;
}