/*
Question: Take a doubly linked list as input and reverse it. 
After that print the linked list.

Sample Input                Sample Output
10 20 30 -1                 30 20 10

10 20 30 40 -1              40 30 20 10

*/

#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev=NULL;
    }
};
void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node* newnode= new Node(val);
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
void reversed_list(Node* &head,Node* &tail)
{
    for(Node *i=head,*j=tail; i!=j && i->prev!=j;i=i->next,j=j->prev)
    {
        swap(i->val,j->val);
    }
}
void print_list(Node* head)
{
    Node* temp=head;
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
    reversed_list(head,tail);
    print_list(head);
    return 0;
}