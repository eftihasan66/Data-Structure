#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int test;
    cin >> test;
    
    while (test--) 
    {
        int n;
        cin >> n;
        vector<int> v(n);
        
       
        for (int i = 0; i < n; ++i) 
        {
            cin >> v[i];
        }
        
        sort(v.begin(), v.end(), greater<int>()); 
  
        int max_pages = v[0] + v[1]; 

        cout << max_pages << endl;
    }
    
    return 0;
}
