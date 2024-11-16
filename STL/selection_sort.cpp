#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int n)
{
    for(int i=0;i<n-1; i++)
    {
        int min=i;
        for(int j=i; j<n; j++)
        {
            if(arr[j]<arr[min])
            {
               min=j;
            }
        }
        //  int temp=arr[min];
        //  arr[min]=arr[i];
        //  arr[i]=temp;
        swap(arr[min],arr[i]);
    }
}
void bubble_sort(int arr[], int n)
{
    for(int i=n-1; i>=1; i--)
    {
        int didSwap=0;
        for(int j=0; j<=i-1; j++)
        {
            if(arr[j]> arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                didSwap=1;
            }
        }
        if(didSwap==0)
        {
            break;
        }
        cout <<"run\n";
    }
}
int main()
{

    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    selection_sort(arr,n);
    for(int i=0; i<n; i++) 
    {
        cout <<arr[i] <<" ";
    }
    return 0;
}