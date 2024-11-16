#include<bits/stdc++.h>
using namespace std;
int main() 
{
   stack<int> st;
   int n; cin>>n;
   while(n--)
   {
    int x; cin>>x;
    st.push(x);
   }
   queue<int > q;
   int m; cin>>m;
   while(m--)
   {
    int x; cin>>x;
    q.push(x);
   }
  bool flag = true;
  {
    while(!st.empty() && !q.empty())
    {
        if(st.top() != q.front())
        {
            flag = false;
        }
        st.pop();
        q.pop();
    }
  }

    if(flag==false) cout <<"NO ";
    else cout <<"YES";
   return 0;
}
