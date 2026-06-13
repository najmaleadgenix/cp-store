/*
Question: Take a singly linked list as input, then print the maximum value of them.



Sample Input                    Sample Output
2 4 1 3 5 4 2 5 -1                  5
5 4 1 2 5 6 8 4 1 3 -1              8


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
void print_find_max(Node* head)
{
    Node* temp=head;
    int max=INT_MIN;
    while(temp!=NULL)
    {
        if(temp->val>max)
        {
            max=temp->val;
        }
        temp=temp->next;
    }
    cout<< max;
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
    print_find_max(head);
    return 0;
}