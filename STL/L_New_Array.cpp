#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    vector<int> v(n);
    vector<int> v1(n);

    for(int i = 0; i < n; i++) 
    {
        cin >> v[i];
    }

    for(int i = 0; i < n; i++) 
    {
        cin >> v1[i];
    }

    vector<int> v3;
    v3.insert(v3.end(), v1.begin(), v1.end());
    v3.insert(v3.end(), v.begin(), v.end());

    for(int x : v3) 
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
