#include<bits/stdc++.h>
using namespace std;

void insert_heap(vector<int>& v,int x)
{
        v.push_back(x);
        int cur_idx = v.size()-1;

        while(cur_idx!=0)
        {
            int parent_idx =( cur_idx-1)/2;
            if(v[parent_idx] > v[cur_idx])
            {
                swap(v[parent_idx],v[cur_idx]);
            }
            else break;

            cur_idx = parent_idx;
        }
}
void delete_heap(vector<int>&v)
{
    v[0]=v[v.size()-1];
    v.pop_back();
    int cur = 0;
    while(true)
    {
        int left_idx = (cur*2)+1;
        int right_idx = (cur*2)+2;
        int last_idx = v.size()-1;

        if(left_idx <= last_idx && right_idx <=last_idx)
        {
            // 2tai ache

            if(v[left_idx] <= v[right_idx] && v[left_idx] < v[cur])
            {
                swap(v[left_idx],v[cur]);
                cur = left_idx;
            }
            else if(v[right_idx] <= v[left_idx] && v[right_idx] < v[cur])
            {
                swap(v[right_idx],v[cur]);
                cur = right_idx;
            }
            else
            {
                break;
            }
        }
        else if(left_idx <= last_idx)
        {
            // left ache
            if(v[left_idx] < v[cur])
            {
                swap(v[left_idx],v[cur]);
                cur = left_idx;
            }
        
            else
            {
                break;
            }

        }
        else if(right_idx <=last_idx)
        {
            // right ache

            if(v[right_idx] < v[cur])
            {
                swap(v[right_idx],v[cur]);
                cur = right_idx;
            }
            else
            {
                break;
            }

        }
        else
        {
            break;
        }
    }
}
void print(vector<int>&v)
{
    for(int x : v) cout <<x <<" " ;
    cout<<endl;
}
int main() 
{
   int n;cin>>n;
    vector<int>v;
    while(n--)
    {
        int x; cin>>x;
        insert_heap(v,x);
    }

    print(v);
    delete_heap(v);
    print(v);

   return 0;
}
 