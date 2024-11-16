#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>x({10,20,30,40});
    vector<int>v({1,2,3,4});
    v.pop_back(); //1 2 3
    v.pop_back(); //1 2
    v.pop_back(); //1 
    // v=x; //O(N)

    for(auto it=v.begin(); it<v.end(); it++)
    {
        cout <<*it <<" ";
    }
    
    return 0;
}