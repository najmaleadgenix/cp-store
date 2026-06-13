/*

Question: You have a doubly linked list which is empty initially.
You need to take a value Q which refers to queries.
For each query you will be given X and V.
You will insert the value V to the Xth index of the doubly linked list and
print the list in both left to right and right to left.
If the index is invalid then print “Invalid”.



Sample Input                                  Sample Output
6                                                   10
0 10                                                 10
1 20                                                10 20
4 30                                                20 10
0 30                                                Invalid
1 40                                                30 10 20
5 50                                                20 10 30
                                                    30 40 10 20
                                                    20 10 40 30
                                                        Invalid

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
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}
int size(Node *head)
{
    Node *temp = head;
    int sz = 0;
    while (temp != NULL)
    {
        sz++;
        temp = temp->next;
    }
    return sz;
}
void insert_at_any_pos(Node *&head, Node *&tail, int idx, int val)
{
    Node *newnode = new Node(val);
    Node *temp = head;
    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next->prev = newnode;
    newnode->prev = temp;
    temp->next = newnode;
}
void print_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void print_reversed(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            insert_at_head(head, tail, v);
            print_list(head);
            print_reversed(tail);
        }
        else if (size(head) == x)
        {
            insert_at_tail(head, tail, v);
            print_list(head);
            print_reversed(tail);
        }
        else if (x > size(head))
        {
            cout << "Invalid" << endl;
        }
        else
        {
            insert_at_any_pos(head, tail, x, v);
            print_list(head);
            print_reversed(tail);
        }
    }

    return 0;
}