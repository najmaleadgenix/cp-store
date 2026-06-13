#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;

    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newnode = new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
    
}
void insert_at_head(Node* &head, int val)
{
    Node* newnode= new Node(val);
    newnode->next=head;
    head=newnode;
}
void insert_at_any_position(Node* &head,int indx, int val)
{
    Node* newnode= new Node(val);
    Node* temp=head;
    for(int i=1; i<indx; i++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;

}
void print_linked_list(Node* head)
{
    Node* temp=head;
    //base case
    while(temp!=NULL)
    {
        cout<<temp->val<<endl;
        temp=temp->next;
    }
    // print_linked_list(temp->next);
    
    
}
int main()
{
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* tail= new Node(30);
    int val=100;
    
    head->next=a;
    a->next=tail;
    
    insert_at_any_position(head,2,val);
    print_linked_list(head);
    return 0;
}