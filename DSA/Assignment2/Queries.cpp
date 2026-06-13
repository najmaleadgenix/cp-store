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
    Node* newnode= new Node(val);
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
int size(Node* head)
{
    Node* temp=head;
    int sz=-1;
    while(temp!=NULL)
    {
        sz++;
        temp=temp->next;
    }
    return sz;
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
void delete_at_head(Node* &head,Node* &tail)
{
    if(head==NULL)
    {
        tail=NULL;
        return;
    }
    Node* deletenode=head;
    head=head->next;
    delete deletenode;
}
void delete_at_tail(Node* &head,Node* &tail,int idx)
{
    Node* temp=head;
    for(int i=1; i<idx; i++)
    {
        temp=temp->next;
    }
    Node* deletenode= temp->next;
    temp->next=NULL;
    tail=temp;
    delete deletenode;

}
void delete_at_any_pos(Node* &head, int idx)
{
    Node* temp=head;
    for(int i=1; i<idx; i++)
    {
        temp=temp->next;
    }
    Node* deletenode= temp->next;
    temp->next=temp->next->next;
    delete deletenode;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;

    int q;
    cin>>q;
    while(q--)
    {
        int x,v;
        cin>>x>>v;

        if(x==0)
        {
            insert_at_head(head,tail,v);
            print_list(head);
        }
        else if(x==1)
        {
            insert_at_tail(head,tail,v);
            print_list(head);
        }
        else if(x==2)
        {
            int sz=size(head);
            if(v==0)
            {
                delete_at_head(head,tail);
            }
            else if(v==sz)
            {
                delete_at_tail(head,tail,sz);
            }
            else if(v>0 && v<sz)
            {
                delete_at_any_pos(head,v);
            }
            // delete_at_any_pos(head,tail);
            print_list(head);
        }
    }
    return 0;
}