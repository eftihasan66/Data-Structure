#include<iostream>
#include<vector>
using namespace std;
int main()
{
     vector<int>v;
    // cout <<v.capacity() <<endl;
    // v.push_back(10); 
    // cout <<v.capacity() <<endl;
    // v.push_back(20);
    // cout <<v.capacity() <<endl;
    // v.push_back(30);
    // cout <<v.capacity() <<endl;
    // v.push_back(40);
    // cout <<v.capacity() <<endl;
    // v.push_back(50);
    // cout <<v.capacity() <<endl;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    v.resize(2);
    v.resize(7,30);
    for(int i=0; i<v.size(); i++) cout <<v[i] <<" ";
    return 0;
}