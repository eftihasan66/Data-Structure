#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    stack<int> st;
    queue<int> q;

    for(int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        st.push(val);
    }

    for(int i = 0; i < m; ++i) {
        int val;
        cin >> val;
        q.push(val);
    }

    while(!st.empty() && !q.empty()) {
        if(st.top() != q.front()) {
            cout << "NO" << endl;
            return 0;
        }
        st.pop();
        q.pop();
    }

    if(st.empty() && q.empty())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
