/*
Question: Take a singly linked list as input and print the middle element.
 If there are multiple values in the middle print both.



Sample Input
Sample Output
2 4 6 8 10 -1
6
1 2 3 4 5 6 -1
3 4


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
void print_even_mid(Node* head,int sz)
{
    int mid=sz/2;

    Node* temp=head;
    for(int i=1; i<mid; i++)
    {
        temp=temp->next;
    }
    cout<<temp->val<<" "<<temp->next->val<<endl;
}
void print_odd_mid(Node* head,int sz)
{
    int mid=(sz/2)+1;

    Node* temp=head;
    for(int i=1; i<mid; i++)
    {
        temp=temp->next;
    }
    cout<<temp->val<<endl;

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
    int sz=size(head);

    if(sz%2==0)
    {
        print_even_mid(head,size(head));
    }
    else if(sz%2!=0)
    {
        print_odd_mid(head,size(head));
    }
    return 0;
}