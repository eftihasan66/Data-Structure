#include<bits/stdc++.h>
using namespace std;
class Node
{
    public :
        int val;
        Node* next; 
        Node* prev; 
        Node(int val)
        {
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};
class myStack
{
public:
   Node* head = NULL;
   Node* tail = NULL;
    int sz=0;
    void push(int x)
    {
        sz++;
        Node* newNode = new Node(x);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
            return ; 
        }
        tail->next = newNode ;
        newNode->prev = tail ;
        tail = tail->next ;
    }
    void pop()
    {
        sz--;
        Node* deleteNode = tail;
        tail = tail->prev;
        if(head== NULL) tail = NULL;
        delete deleteNode;

    }
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if(size()==0) return true;
        else false;
    }
};
int main() 
{
    myStack st;
    int n; cin>>n;
    while(n--)
    {
       int x; cin >>x;
       st.push(x);
    }
    while(!st.empty())
    {
       cout <<st.top() <<" ";
       st.pop();
    }
    // st.push(10);
    // st.push(20);
    // st.push(30);

    // cout <<st.top() <<endl;
    // // st.pop();
    // cout <<st.top() <<endl;
    // // st.pop();
    //  cout <<st.top() <<endl;
    //  cout <<st.size() <<endl;
   return 0;
}
