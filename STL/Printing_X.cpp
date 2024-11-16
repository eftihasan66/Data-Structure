#include <bits/stdc++.h>
using namespace std;

void printPattern(int N) 
{
    int central_index = (N - 1) / 2;

    for (int i = 0; i < central_index; ++i) 
    {
        cout << string(i, ' ') << "\\" << string(N - 2 - 2 * i, ' ') << "/" << endl;
    }

    cout << string(central_index, ' ') << "X" << endl;

    for (int i = central_index - 1; i >= 0; --i) 
    {
        cout << string(i, ' ') << "/" << string(N - 2 - 2 * i, ' ') << "\\" << endl;
    }
}

int main() 
{
    int N;
    cin >> N;
    
    printPattern(N);
    
    return 0;
}
