#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void print_preOrder(Node* root)
{
    if(root==NULL)
    return;
    cout<<root->val<<" ";         // root
    print_preOrder(root->left);    // left
    print_preOrder(root->right);   // right
}
void print_Inorder(Node* root)
{
    if(root==NULL)
    return;
    print_Inorder(root->left);   //left
    cout<<root->val<<" ";        // root
    print_Inorder(root->right);   // right
}
void print_postOrder(Node* root)
{
    if(root==NULL)
    return;
    print_postOrder(root->left);    //left
    print_postOrder(root->right);   // right
    cout<<root->val<<" ";           //root
}
void print_levelOrder(Node* root)
{
    if(root==NULL)
    {
        cout<<"No tree"<<endl;
        return;
    }
    queue<Node*>q;
    q.push(root);

    while(!q.empty())
    {
        Node* f = q.front();
        q.pop();

        cout<<f->val<<" ";

        if(f->left)         //if(f->left != NULL)
        q.push(f->left);
        if(f->right)        //if(f->right != NULL)
        q.push(f->right);
    }
}
Node* input()
{
    int val; cin>>val;
    Node* root;
    if(val==-1) root=NULL;
    else root= new Node(val);

    queue<Node*>q;
    if(root)
    q.push(root);

    while(!q.empty())
    {
        Node* p= q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node* myleft,*myright;
        if(l==-1) myleft=NULL;
        else myleft=new Node(l);
        if(r==-1) myright=NULL;
        else myright= new Node(r);

        p->left=myleft;
        p->right=myright;

        if(p->left)
        q.push(p->left);
        if(p->right)
        q.push(p->right);
    }
    return root;
}
int count_nodes(Node* root)
{
    if(root==NULL)
    return 0;

    int l=count_nodes(root->left);
    int r=count_nodes(root->right);
    return l+r+1;
}
int count_leaf_node(Node* root)
{
    if(root==NULL)
    return 0;
    if(root->left==NULL && root->right==NULL)
    return 1;

    int l=count_leaf_node(root->left);
    int r=count_leaf_node(root->right);
    return r+l;
}
int max_height(Node* root)
{
    if(root==NULL)
    return 0;
    if(root->left==NULL && root->right)
    return 0;
    int l=max_height(root->left);
    int r=max_height(root->right);
    return max(l,r)+1;
}
int main()
{
    // Node* root =new Node(10);
    // Node* a= new Node(20);
    // Node* b=new Node(30);
    // Node* c= new Node(40);
    // Node* d =new Node(50);
    // Node* e =new Node(60);

    // root->left=a;
    // root->right=b;
    // a->left=c;
    // b->left=d;
    // b->right=e;

    // print_preOrder(root);
    // print_Inorder(root);
    // print_postOrder(root);
    // print_levelOrder(root);

    Node* root=input();
    // print_levelOrder(root);

    // cout<<count_nodes(root);

    // cout<<count_leaf_node(root);

    cout<<max_height(root);
    return 0;
}