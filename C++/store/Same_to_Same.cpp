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
void insert_at_tail(Node* &head, Node* &tail, int value)
{
    Node* newnode = new Node(value);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return ;
    }
    tail->next=newnode;
    tail=newnode;
}
int check(Node* &head, Node* &head1)
{
    Node* temp= head;
    Node* temp1= head1;
    // int a=1;
    while(temp!=NULL && temp1!=NULL)
    {
        if(temp->val!=temp1->val)
        {
            // a=0;
            return 0;
        }
        temp=temp->next;
        temp1=temp1->next;
    }
    return 1;
    
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    Node* head1=NULL;
    Node* tail1=NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }
    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_at_tail(head1,tail1,val);
    }

    int num = check(head,head1);
    if(num==0)
    {
        cout<<"NO"<<endl;
    }
    else
    cout<<"YES"<<endl;
    return 0;
}