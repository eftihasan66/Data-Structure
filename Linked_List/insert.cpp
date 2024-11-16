#include<bits/stdc++.h>
using namespace std;
class Node
{
    public :
        int val;
        Node* next;  
        Node(int val)
        {
            this->val = val;
            this->next = NULL;
        }
};
int size(Node* head)
{
    Node* tmp =head;
    int count = 0;
    while(tmp!=NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count ;
}
void print_link_list(Node* head)
{
    cout <<"Entered linked list are : ";
    Node* tmp =head;
    while(tmp!=NULL)
    {
        cout <<tmp->val <<" " ;
        tmp = tmp->next;
    }
    cout <<endl;
}
void insert(Node* head, int pos , int val)
{
    Node* NewNode = new Node(val);
    Node* tmp = head;
    for(int i=1 ; i<=pos-1; i++)
    {
        tmp = tmp->next ;
    }
    NewNode->next =tmp->next->next;
    tmp->next = NewNode;
}
void insert_at_head(Node* &head, int val) //TC - O(1)
{
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
int main() 
{
   Node* head = new Node(10);
   Node* a = new Node(20);
   Node* b = new Node(30);
   Node* c = new Node(40);
   Node* d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    print_link_list(head);

   int pos,val;
   cin >>pos >>val;
   if(pos>size(head))
   {
    cout <<"Invalid index ";
   }
   else if(pos==0)
   {
    insert_at_head(head,val);
   }
   else
   {
     insert(head, pos,val);
   }

    print_link_list(head);
   return 0;
}
