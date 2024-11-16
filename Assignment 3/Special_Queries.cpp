#include<bits/stdc++.h>
using namespace std;

int main() 
{

    int Q;
    cin >> Q;

    queue<string> ticket;
    vector<string> output;

    while (Q--) 
    {
        int type;
        cin >> type;

        if (type == 0) 
        {
            string name;
            cin >> name;
            ticket.push(name);
        } 
        else if (type == 1) 
        {
            if (!ticket.empty()) 
            {
                output.push_back(ticket.front());
                ticket.pop();
            } 
            else 
            {
                output.push_back("Invalid");
            }
        }
    }


    for (string result : output)
     {
        cout << result << endl;
    }

    return 0;
}
