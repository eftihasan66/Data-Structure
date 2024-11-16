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
            this->next = nullptr;
            this->prev = nullptr;
        }
};
class myQueue
{
public:
    Node* head = nullptr;
    Node* tail = nullptr;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node* newNode = new Node(val);
        if(head == nullptr)
        {
            head = newNode;
            tail = newNode;
            return; 
        }
        tail->next = newNode ;
        newNode->prev = tail ;
        tail = tail->next ;
    }

    void pop()
    {
        sz--;
        Node* deleteNode = head;
        head = head->next ;
        if(head==nullptr)
        {
            tail = nullptr;
            delete deleteNode ;
            return ;
        }
         
        head->prev = nullptr;
        delete deleteNode ;
    }
    
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
     bool empty()
    {
        return sz == 0;
    }
};
int main() 
{
     myQueue q;
    int n; 
    cin >> n;
    while(n--)
    {
        int x; 
        cin >> x;
        q.push(x);
    }

    while(q.size())
    {
        cout << q.front() <<endl;
        q.pop();
    }
   
   return 0;
}
