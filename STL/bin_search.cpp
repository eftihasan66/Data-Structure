#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    sort(arr,arr+n);
    int q; cin>>q;


        while(q--)
        {
        int x; cin >>x;
        bool flag=false;
        
        int l=0,r=n-1;
        //using binary search
        while(l<=r)
        {
            int mid_index=(l+r)/2;
            if(arr[mid_index]==x)
            {
                flag=true;
                break;
            }
           else if(x>arr[mid_index])
            {
                l= mid_index + 1;
            }
            else
            {
                r = mid_index - 1 ;
            }

             if(flag==true) cout <<"YES" <<endl;
            else cout <<"NO"<<endl;
        }
    }
    return 0;
}