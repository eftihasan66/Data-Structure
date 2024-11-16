#include<bits/stdc++.h>
using namespace std;
int main() 
{
   list<int> myList ={10,20,30,40};
  
    myList.clear();
   cout <<myList.size() <<endl;
   for(int x : myList) cout <<x <<" ";
   return 0;
}
