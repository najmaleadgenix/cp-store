/*
Question: Take two doubly linked lists as input and check if they are the same or not.

Sample Input                 Sample Output
10 20 30 40 50 -1
10 20 30 40 50 -1               YES

10 20 30 40 50 -1
10 20 30 40 -1                    NO

10 20 30 40 -1
10 20 30 40 50 -1                  NO

10 20 30 40 -1
40 30 20 10 -1                      NO

1 2 3 4 5 -1
5 4 1 2 6 -1                        NO


*/

#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
int size(Node* temp)
{
    int sz=0;
    while(temp!=NULL)
    {
        sz++;
        temp=temp->next;
    }
    return sz;
}
void check_same(Node* head1,Node *head2)
{
    Node* temp1=head1;
    Node *temp2=head2;
    bool flag= true;

    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1->val!=temp2->val)
        {
            flag= false;
            break;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }

    if(size(head1)!=size(head2))
    flag=false;

    
    if(flag)
    cout<<"YES";
    else 
    cout<<"NO";
}
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int val;

    while (1)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head1,tail1,val);
    }

    while (1)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head2,tail2,val);
    }
    check_same(head1,head2);
    return 0;
}