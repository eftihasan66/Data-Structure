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
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }

};
void in_order(Node* root)
{
    //base case
    if(root==NULL) return ;
    
    in_order(root->left);
    cout <<root->val <<" ";
    in_order(root->right);
    
}
int main() 
{
   Node* root = new Node(10);
   Node* a = new Node(20);
   Node* b = new Node(30);
   Node* c = new Node(40);
   Node* d = new Node(50);
   Node* e = new Node(60);
   Node* f = new Node(70);
   Node* g = new Node(80);
   Node* h = new Node(90);
   Node* i = new Node(100);
   
    // connection
    root->left = a ;
    root->right = b;
    a->left = c;
    a->right = h;
    b->right = d;
    c->right = e;
    d->left = f;
    d->right = g;
    h->right = i;

    in_order(root);

   return 0;
}
