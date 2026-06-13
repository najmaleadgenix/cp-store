/*
Question: Take a singly linked list as input and print the reverse of the linked list.

Sample Input               Sample Output
5 4 8 6 2 1 -1               1 2 6 8 4 5
1 2 3 4 -1                    4 3 2 1


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
void print_reverse(Node* temp)
{
    if(temp==NULL)
    {
        return;
    }
    print_reverse(temp->next);
    cout<<temp->val<<" ";
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
    print_reverse(head);
    return 0;
}