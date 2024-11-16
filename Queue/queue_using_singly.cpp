#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node* next;  
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class myQueue
{
public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        Node* newNode = new Node(val);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }  

    void pop()
    {
        if (sz == 0) return; // Prevent popping from an empty queue
        sz--;
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        if(head == NULL)
        {
            tail = NULL;
        }
    }

    int front()
    {
        if (head != NULL) // Prevent accessing front of an empty queue
            return head->val;
        return -1; // return a default value when the queue is empty
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
