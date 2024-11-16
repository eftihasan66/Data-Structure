#include<bits/stdc++.h>
using namespace std;

class Stack 
{
public:
    vector<int> v;

    void push(int value) 
    {
        v.push_back(value);
    }
    
    int pop() 
    {
        if (isEmpty()) return 0;
        int value = v.back();
        v.pop_back();
        return value;
    }
    
    bool isEmpty() 
    {
        return v.empty();
    }
};

class Queue {
private:
    vector<int> v;
    int frontIndex = 0;
public:
    void push(int value) 
    {
        v.push_back(value);
    }
    
    int pop() 
    {
        if (isEmpty()) return 0;
        int value = v[frontIndex];
        frontIndex++;
        return value;
    }
    
    bool isEmpty() 
    {
        return frontIndex >= v.size();
    }
};

int main() 
{
    int n, m;
    cin >> n >> m;

    Stack stackInput;
    Queue queueInput;

    for (int i = 0; i < n; i++) 
    {
        int value;
        cin >> value;
        stackInput.push(value);
    }

    for (int i = 0; i < m; i++) 
    {
        int value;
        cin >> value;
        queueInput.push(value);
    }

    bool areSame = true;

    if (n != m) 
    {
        areSame = false;
    }
     else
     {
        while (!stackInput.isEmpty() && !queueInput.isEmpty()) 
        {
            if (stackInput.pop() != queueInput.pop()) 
            {
                areSame = false;
                break;
            }
        }
    }

    if (areSame) 
    {
        cout << "YES" << endl;
    } 
    else 
    {
        cout << "NO" << endl;
    }

    return 0;
}
