#include<bits/stdc++.h>
using namespace std;
int main() 
{
   queue<int> q ;
    int n; 
    cin >> n;
    while(n--)
    {
        int x; 
        cin >> x;
        q.push(x);
    }
    cout <<"Size : " <<q.size() <<endl;
    while(q.size())
    {
        cout << q.front() <<endl;
        q.pop();
    }
   return 0;
}
