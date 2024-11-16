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
void insert_at_tail(Node* &head, int v)
{
    Node* newNode = new Node(v);

    if(head==NULL)
    {
        head = newNode;
        return;
    }

    Node* tmp = head ;
    while(tmp->next!= NULL)
    {
        tmp = tmp->next;
    }
    //tmp ekhon last node e 
    tmp->next = newNode;
    cout <<endl <<endl <<"Inserted at tail" <<endl<<endl;
}
void print_linked_list(Node* head)
{
    cout <<"Entered linked list are : ";
    Node* tmp = head;
    tmp = head;
    while(tmp!=NULL)
    {
        cout <<tmp->val <<" ";
        tmp = tmp->next;
    }
    cout <<endl <<endl;
}
void insert_at_any_position(Node* head, int pos , int v)
{
    Node* newNode = new Node(v);
    Node* tmp = head;
    for(int i=1; i<=pos-1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout <<endl <<endl <<"Inserted at position " <<pos <<endl;
}
int main() 
{
   Node* head = NULL;
   while(true)
   {
        cout <<"Option 1: Insert at tail" <<endl;
        cout <<"Option 2: Print the link list" <<endl;
        cout <<"Option 3: Insert at any position" <<endl;
        cout <<"Option 4: Terminate" <<endl;
    int op; cin >>op;
    if(op==1)
    {
        int v; 
        cout <<"Plese enter the value : ";
        cin >>v;
        insert_at_tail(head, v);
    }
    else if(op==2)
    {
        print_linked_list(head);
    }
    else if(op==3)
    {
        int pos,v;
        cout <<"Enter the position : ";
        cin >>pos;
        cout <<"Enter the value : ";
        cin >>v;
        insert_at_any_position(head, pos, v);
    }
    else if(op==4)
    {
        break;
    }
    }
   return 0;
}
