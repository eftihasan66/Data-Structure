#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>& arr) 
{
    for (int i = 1; i < arr.size(); i++) 
    {
        if (arr[i] < arr[i-1]) 
        {
            return false;
        }
    }
    return true;
}

int main() 
{
    int T;
    cin >> T;
    
    while (T--) 
    {
        int N;
        cin >> N;
        
        vector<int> arr(N);
        for (int i = 0; i < N; ++i) 
        {
            cin >> arr[i];
        }
        
        if (isSorted(arr)) 
        {
            cout << "YES" << endl;
        } 
        else 
        {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
