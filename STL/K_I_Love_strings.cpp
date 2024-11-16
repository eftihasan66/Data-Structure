#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t; cin>>t;
   for(int i=1; i<=t; i++)
   {
        string s;
        getline(cin,s);
   }
  stringstream ss(s);
  string word;
  for(char word : ss)
  {
    cout <<word <<" ";
  }
    
    
    return 0;
}