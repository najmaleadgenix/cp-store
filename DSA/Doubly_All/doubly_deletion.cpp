#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        Node* next;
        Node* prev;
        int val;
        Node(int val)
        {
            this->val=val;
            this->next=NULL;
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
void print_forward(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;

}
void delete_at_head(Node* &head, Node* &tail)
{
    Node* deletenode=head;
    head=head->next;
    delete deletenode;
    if(head==NULL)
    {
        tail=NULL;
        return;
    }
    head->prev=NULL;
}
void delete_at_tail(Node*& head,Node* &tail)
{
   Node* deletenode= tail;
   tail=tail->prev;
   delete deletenode;
   if(tail==NULL)
   {
    head=NULL;
    return;
   }
   tail->next=NULL;
}
void delete_at_any_pos(Node* &head,Node* &tail,int idx)
{
    Node* temp=head;
    for(int i=1; i<idx; i++)
    {
        temp=temp->next;
    }
    Node* deletenode=temp->next;
    temp->next=temp->next->next;
    temp->next->prev=temp;
    delete deletenode;
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
    // delete_at_head(head,tail);
    // delete_at_tail(head,tail);
    delete_at_any_pos(head,tail,2);
    print_forward(head);
    return 0;
}