#include<bits/stdc++.h>
using namespace std;
class Node
{
    public :
        int val;
        Node* left;
        Node* right;
    Node(int val)
    {
        this->val = val ;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* input()
{
    int val; cin>>val ;
    Node* root;
   if(val==-1) root=NULL;
   else root = new Node(val);

    queue<Node*> q;
    if(root) q.push(root);

    while(!q.empty())
    {
        Node* f = q.front();
        q.pop();

        // 2. jabotiyo ja kaj
        int l,r; cin>>l>>r;
        Node* mYleft;
        Node* mYright;

        if(l==-1) mYleft=NULL;
        else mYleft = new Node(l);

        if(r==-1) mYright=NULL;
        else mYright = new Node(r);

        f->left = mYleft;
        f->right = mYright;
        
        // 3. children k push korsi
       if(f->left) q.push(f->left);
       if(f->right) q.push(f->right);
    }
    return root;
}

void level_order(Node* root)
{
    if(root==NULL) return;
    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        //1. ber kore ana
       Node* f = q.front();
       q.pop();

       //2. jaobtiyo ja kaaj
       cout <<f->val <<" ";

       //3. children rakha
       if(f->left) q.push(f->left);
       if(f->right) q.push(f->right);

    } 
}
bool search(Node* root , int x)
{
    if(root==NULL) return false;
    if(root->val==x) return true;

    if(x<root->val) 
    {
        return search(root->left,x);     
    }
    else 
    {
        return search(root->right,x);     
    }

}
int main() 
{
    Node* root = input();
    if(search(root,61)) cout<<"Yes, Found" ;
    else cout <<"No, Not found ";

   return 0;
}
