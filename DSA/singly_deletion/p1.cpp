/*
Question: Take two singly linked lists as input and check if their sizes are same or not.

Sample Input       Sample Output
2 1 5 3 4 9 -1
1 2 3 4 5 6 -1        YES

5 1 4 5 -1
5 1 4 -1               NO


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
    Node* temp=head;
    int sz=0;
    while(temp!=NULL)
    {
        sz++;
        temp=temp->next;
    }
    return sz;
}
int main()
{
    Node* head1=NULL;
    Node* tail1=NULL;
    Node* head2=NULL;
    Node* tail2=NULL;

    int val;
    while(1)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_at_tail(head1,tail1,val);
    }

    while(1)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_at_tail(head2,tail2,val);
    }

    int sz1=size(head1);
    int sz2=size(head2);

    if(sz1==sz2)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}