#include<bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int>v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
       v.pop_back();
    }
    int top()
    {
        return v.back() ;
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        if(v.size()==0) return true;
        else return false;
    }
};
int main() 
{
   myStack st;
   myStack st2;
   int n ; cin>>n;
   while(n--)
   {
    int x; cin>>x;
    st.push(x);
   }
   int m; cin>>m;
    while(m--)
   {
    int x; cin>>x;
    st2.push(x);
   }
   
   bool flag = true ;
    while (!st.empty() && !st2.empty())
    {
        if(st.top() != st2.top())
        {
            flag = false ;
        }
        st.pop();
        st2.pop();
   }
    
   if(flag==false) cout <<"NO ";
   else cout <<"YES";
    
   return 0;
}
