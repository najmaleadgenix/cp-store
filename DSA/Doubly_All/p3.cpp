/*

Question: Take a doubly linked list as input and check if it forms any palindrome or not.

Sample Input                        Sample Output
10 20 30 20 10 -1                   YES
10 20 30 30 20 10 -1                YES
10 20 30 40 20 10 -1                 NO
10 20 30 20 40 -1                    NO
10 20 30 10 10 -1                       NO
10 20 20 20 10 -1                      YES

*/

#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node* prev;
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
void check_palindrome(Node* head,Node* tail)
{
    bool flag=true;
    for(Node*i=head,*j=tail;i!=j && i->prev!=j;i=i->next,j=j->prev)
    {
        if(i->val!=j->val)
        {
            flag=false;
            break;
        }
    }
    if(flag)
    cout<<"YES";
    else 
    cout<<"NO";
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
    check_palindrome(head,tail);
    return 0;
}