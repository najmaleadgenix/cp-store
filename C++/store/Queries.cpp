#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_head(Node* &head,Node* &tail, int val)
{
    Node* newnode = new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    
    newnode->next = head;
    head = newnode;
}

void insert_at_tail(Node* &head, Node* &tail, int val) {
    if (head == NULL) {
        Node* newnode = new Node(val);
        head = newnode;
        tail = newnode;
        return;
    }
    Node* newnode = new Node(val);
    tail->next = newnode;
    tail = newnode;
}
int size(Node* &head)
{
    int sz=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        sz++;
        temp=temp->next;
    }
    return sz;
}
void delete_at_any_pos(Node* &head, Node* &tail,int v) 
{
    int sz=size(head);
    if(sz<v)
    {
        return;
    }
    if(v<sz)
    {
        
    }
    // if (head == NULL || v < 0) return;
    // if (v == 0) { // Delete head
    //     Node* temp = head;
    //     head = head->next;
    //     delete temp;
    //     return;
    // }
    // Node* temp = head;
    // for (int i = 1; i < v; i++) {
    //     if (temp->next == NULL) return; // Index out of bounds
    //     temp = temp->next;
    // }
    // if (temp->next == NULL) return; // Index out of bounds
    // Node* deletenode = temp->next;
    // temp->next = temp->next->next;
    // delete deletenode;
}

void print_list(Node* head) {
    if (head == NULL) {
        return;
    }
    Node* temp = head;
    while (temp != NULL) 
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() 
{
    Node* head = NULL;
    Node* tail = NULL;

    int q;
    cin >> q;
    while (q--) 
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            insert_at_head(head,tail, v);
            // print_list(head);
        } 
        else if (x == 1) 
        {
            insert_at_tail(head, tail, v);
            print_list(head);

        }
        else 
        {
            delete_at_any_pos(head,tail, v);
            // print_list(head);
        }
    }
    

    return 0;
}
