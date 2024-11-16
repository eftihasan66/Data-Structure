#include<bits/stdc++.h>
using namespace std;
void fun(int* &p)
{
    cout <<&p <<endl;
}
int main() 
{
   int x=10;
   int* ptr = &x;
   fun(ptr);
   cout <<&ptr <<endl;
   return 0;
}
