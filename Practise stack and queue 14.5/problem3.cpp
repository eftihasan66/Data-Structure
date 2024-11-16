#include<bits/stdc++.h>
using namespace std;
int main() 
{
   stack<int>st;
   stack<int>stCopy;
   int n ; cin >>n;
   while(n--)
   {
    int x; cin >>x;
    st.push(x);
   }
    while(!st.empty())
    {
        stCopy.push(st.top());
        st.pop();
    }
    while(!stCopy.empty())
    {
       cout <<stCopy.top() <<" ";
       stCopy.pop();
    }
   return 0;
}
