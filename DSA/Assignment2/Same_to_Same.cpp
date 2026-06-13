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
void insert_at_tail(Node* &head,Node* &tail,int val)
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
void same_to_same(Node*head1, Node*head2)
{
    Node* temp1=head1;
    Node* temp2=head2;

    vector<int>v1;
    vector<int>v2;
    while(temp1!=NULL)
    {
        v1.push_back(temp1->val);
        temp1=temp1->next;
    }
    while(temp2!=NULL)
    {
        v2.push_back(temp2->val);
        temp2=temp2->next;
    }
    int count=0;
    if(v1.size()!=v2.size())
    {
        cout<<"NO";
        return;
    }
    else
    {
        for(int i=0; i<v1.size(); i++)
        {
            if(v1[i]!=v2[i])
            {
                cout<<"NO";
                return;
            }
            else
            count=1;
        }
    }
    if(count==1)
    cout<<"YES";
}
int main()
{
  Node* head1=NULL;
  Node* tail1=NULL;
  Node* head2=NULL;
  Node* tail2=NULL;
  int val;
  while(1)
  {
    cin>>val;
    if(val==-1)
    {
        break;
    }
    insert_at_tail(head1,tail1,val);
  }  

   while(1)
  {
    cin>>val;
    if(val==-1)
    {
        break;
    }
    insert_at_tail(head2,tail2,val);
  }  

  same_to_same(head1,head2);
    return 0;
}