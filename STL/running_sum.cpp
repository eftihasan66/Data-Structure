#include <bits/stdc++.h>
using namespace std;

// Function to read input values into the vector
void readInput(vector<int>&v, int n) 
{
    for(int i = 0; i < n; i++) 
    {
        cin >> v[i];
    }
}

// Function to compute the prefix sum
vector<int>computePrefixSum(vector<int>& v, int n) 
{
    vector<int> pre(n);
    pre[0] = v[0]; 
    for(int i = 1; i < n; i++) 
    {
        pre[i] = v[i] + pre[i-1];
    }
    return pre;
}

// Function to print the vector
void printVector(vector<int>& v, int n) 
{
    for(int i = 0; i < n; i++) 
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() 
{
    int n;
    cin >> n;
    vector<int>v(n);

    readInput(v, n);
    vector<int> pre = computePrefixSum(v, n);
    printVector(pre, n);
    
    return 0;
}
