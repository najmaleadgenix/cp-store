/*
Question: Take a singly linked list as input and 
check if the linked list is sorted in ascending order.

Sample Input
1 5 6 8 9 -1
2 4 6 5 8 4 -1

Sample Output
YES
NO


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
int check_sorted(Node* head)
{
    Node* temp=head;
    while(temp->next!=NULL)
    {
        if(temp->val>temp->next->val)
        {
            return 0;
        }
        temp=temp->next;
    }
    return 1;
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
    int flag=check_sorted(head);
    if(flag==1)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}