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
// void selection_sort(Node* head)
// {
//     // Node* temp=head;
//     for(Node* i= head; i->next!=NULL; i=i->next)
//     {
//         for(Node* j=i->next; j!=NULL; j=j->next)
//         {
//             if(i->val>j->val)
//             {
//                 swap(i->val,j->val);
//             }
//         }
//     }
// }
// void print_list(Node* head)
// {
//     Node* temp=head;
//     int mn=temp->val;
//     int mx=INT_MIN;
//     while(temp!=NULL)
//     {
//         // cout<<temp->val<<" ";
//         mx=temp->val;
//         temp=temp->next;
//     }
//     //  cout<<mx-mn;
//     printf("%d",mx-mn);
    
// }
int mn(Node* head)
{
    Node* temp=head;
    int mnn=INT_MAX;
    while(temp!=NULL)
    {
        if(mnn>temp->val)
        {
            mnn=temp->val;
        }
        temp=temp->next;
    }
    return mnn;
}
int mx(Node* head)
{
    Node* temp=head;
    int mxx=INT_MIN;
    while(temp!=NULL)
    {
        if(mxx<temp->val)
        {
            mxx=temp->val;
        }
        temp=temp->next;
    }
    return mxx;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while(true)
    {
        scanf("%d",&val);
        if(val==-1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }
    // selection_sort(head);
    //  print_list(head);
    int mnn=mn(head);
    // cout<<mnn;
    int mxx=mx(head);
    cout<<mxx-mnn;
    
    return 0;
}