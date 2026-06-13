/*
Question: Take a singly linked list as input and 
check if the linked list contains any duplicate value. 
You can assume that the maximum value will be 100.


Sample Input
Sample Output
5 4 8 6 2 1 -1
NO


2 4 5 6 7 4 -1
YES


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

void fre_vec(Node* head)
{
    Node* temp=head;
    vector<int> v;
    while(temp!=NULL)
    {
        v.push_back(temp->val);
        temp=temp->next;
    }

    vector<int> fre(105, 0);

    for(int i=0; i<v.size(); i++)
    {
        fre[v[i]]++;
    }
    int count=1;
    for(int i=0; i<fre.size(); i++)
    {
        if(fre[i]>1)
        {
           count=0;
           break;
        }
    }
    if(count)
    cout<<"NO";
    else
    cout<<"YES";
    
    
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
  fre_vec(head);

    return 0;
}