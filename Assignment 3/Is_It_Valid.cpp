#include<bits/stdc++.h>
using namespace std;

string isValid(string &s) 
{
    stack<char> st;

    for (char c : s) 
    {
        if (!st.empty() && ((st.top() == '0' && c == '1') || (st.top() == '1' && c == '0'))) 
        {
            st.pop();
        } 
        else 
        {
            st.push(c);
        }
    }

    if (st.empty()) 
    {
        return "YES";
    } 
    else 
    {
        return "NO";
    }
}

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        cout << isValid(s) << endl;
    }
    return 0;
}
