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
void insert_at_head(Node* &head,Node* &tail,int val)
{
    Node* newnode = new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->next=head;
    head=newnode;
}
void insert_at_tail(Node* &head, Node* &tail,int val)
{
    Node* newnode =new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
int size(Node* head)
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
void insert_at_any_pos(Node* &head, Node* &tail,int val,int index)
{
    Node* newnode=new Node(val);
    Node* temp=head;
    for(int i=1;i<index; i++)
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
    // insert_at_head(head,tail,val);
    insert_at_tail(head,tail,val);
  }  
  int sz=size(head);
  insert_at_any_pos(head,tail,50,2);
//   sz=size(head);
 print_list(head);
  insert_at_any_pos(head,tail,100,2);
  print_list(head);


   return 0;
}