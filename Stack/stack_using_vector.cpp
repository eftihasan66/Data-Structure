#include<bits/stdc++.h>
using namespace std;
class Stack
{
public:
    vector<int>v;
    void push(int val)
    {
        v.push_back(val);
    }
    int top()
    {
        return v.back();
    }
    void pop()
    {
        v.pop_back();
    }
    int size()
    {
        v.size();
    }
    bool empty()
    {
        return v.size();
    }
};
int main() 
{
   Stack st;
   int n; cin>>n;
   while (n--)
   {
    int val;cin>>val;
    st.push(val);
   }
   while(st.empty())
   {
    cout <<st.top() <<" ";
    st.pop();
   }
    // st.pop();
    // cout <<st.top();
    //  st.pop();
    //  cout<<endl <<st.top();
   
   return 0;
}
