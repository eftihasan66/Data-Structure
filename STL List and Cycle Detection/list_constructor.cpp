#include<bits/stdc++.h>
using namespace std;
int main() 
{
   // list<int> list1 = {1,2,3,4,5};
   // int a[5] = {1,2,3,4,5};
   vector<int> v({10,20,30});
   list<int>myList(v.begin(),v.end());
   for(auto it=myList.begin(); it!=myList.end(); it++)
   {
    cout <<*it <<" ";
   }
   return 0;
}
