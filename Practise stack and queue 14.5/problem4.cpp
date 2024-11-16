#include<bits/stdc++.h>
using namespace std;
int main() 
{
    queue<int > q;
    queue<int > q2 = q;
   int m; cin>>m;
   while(m--)
   {
    int x; cin>>x;
    q.push(x);
   }
   stack<int>st;
   while(!q.empty())
   {
    st.push(q.front());
    q.pop();
   }
   while(!st.empty())
   {
    cout <<st.top() <<" ";
    st.pop();
   }
 

   return 0;
}
