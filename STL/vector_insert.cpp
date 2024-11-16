#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v({10,20,30,40});
    vector<int>v2({101,102,103,104});
    v.insert(v.begin(),v2.begin(),v2.end());

    for(int x : v)
    {
        cout <<x <<" ";
    }
    return 0;

    // int n; cin>>n;
    // vector<int>v;
    // for (int i = 0; i < n; i++)
    // {
    //    cin >>v[i];
    // }
    // int val,pos;
    // cin >>pos>>val;
    // vector<int>v1=val;
    // v.insert(v.begin()+pos,v1.begin(),v1.end());

    // for(int x : v)
    // {
    //     cout <<x <<" ";
    // }
    
}