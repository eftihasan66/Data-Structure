#include<bits/stdc++.h>
using namespace std;
class Stack
{
public:
    list<int>l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    void size()
    {
        l.size();
    }
    int top()
    {
        return l.back();
    }
    bool empty()
    {
        return l.back();
    }
};
int main() 
{
    Stack st;
   while (1)
   {
    int val;cin>>val;
    if(val==-1) break;
    st.push(val);
   }
   while(st.empty())
   {
    cout <<st.top() <<" ";
    st.pop();
   }
   return 0;
}
