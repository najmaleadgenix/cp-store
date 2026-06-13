#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    string val;
    Node *next;
    Node* prev;
    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev=NULL;
    }
};
void insert_at_tail(Node* &head, Node* &tail, string val)
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
void print(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
int size(Node* head,Node* tail ,string val)
{
    int sz=0;
    Node* temp=head;
    while(temp->val<=val)
    {
        temp=temp->next;
        sz++;
    }
    return sz;
}
void command_val(Node* head, Node* tail,int sz)
{
    
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    string val;
    while(1)
    {
        cin>>val;
        if(val=="end")
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }

    int q;
    cin>>q;
    cin.ignore();
    string command;
    while(q--)
    {
        cin>>command;
        // getline(cin,command);
        // cout<<command<<endl;
        size(head,tail,val);
        if(command==val)
        {

        }
    }
    // cout<<size(head,tail,"phitron");
    return 0;
}