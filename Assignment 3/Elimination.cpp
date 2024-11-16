#include<bits/stdc++.h>
using namespace std;

string canBeEmpty(string s) 
{
    stack<char> stk;
    
    for (char ch : s) 
    {
        if (!stk.empty() && stk.top() == '0' && ch == '1') 
        {
            stk.pop();
        } 
        else 
        {
            stk.push(ch);
        }
    }
    
    if (stk.empty())
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
    int T;
    cin >> T;
    cin.ignore();
    
    while (T--) 
    {
        string s;
        getline(cin, s);
        
        string result = canBeEmpty(s);
        cout << result << endl;
    }
    
    return 0;
}
