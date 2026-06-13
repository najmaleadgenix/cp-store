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
bool is_palindrome_list(Node* head)
{
    Node* temp=head;
    vector<int>v;
    while(temp!=NULL)
    {
        v.push_back(temp->val);
        temp=temp->next;
    }

    int i=0,j=v.size()-1;
    while(i<j)
    {
        if(v[i]!=v[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
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
    if(is_palindrome_list(head))
    {
        cout<<"Palindrome";
    }
    else
    cout<<"Not palindrome";
    return 0;
}