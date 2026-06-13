/*
Question: Take a singly linked list as input and print the size of the linked list.

Sample Input
Sample Output
2 1 5 3 4 8 9 -1
7
5 1 4 5 -1
4

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
    tail=newnode;
}
int size_list(Node* head)
{
    Node* temp=head;
    int sz=0;
    while(temp!=NULL)
    {
        sz++;
        temp = temp->next;
    }
    return sz;
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
  int sz=size_list(head);
  cout<<sz;
    return 0;
}