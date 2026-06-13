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
void remove_duplicate(Node* &head)
{
    vector<int>vec;

    Node* temp=head;
    while(temp!=NULL)
    {
        vec.push_back(temp->val);
        temp=temp->next;
    }
    
    
    for(int i=0; i<vec.size(); i++)
    {
        int size=1;
        for(int j=i+1; j<vec.size(); j++)
        {
            size++;
            if(vec[i]==vec[j])
            {
                vec.erase(vec[j]);
            }
        }
    }
    // for(auto x: vec)
    // {
    //     cout<<x<<" ";
    // }
   
}
void print_list(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }

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
    remove_duplicate(head);
    // print_list(head);
    return 0;
}