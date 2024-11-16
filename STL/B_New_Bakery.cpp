#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, a, b;
        cin >> n >> a >> b;

        long long max_profit = 0;

        // Calculate maximum profit for each k from 0 to min(n, b)
        for (long long k = 0; k <= min(n, b); ++k) {
            long long profit = k * (b - k + 1) + (n - k) * a;
            max_profit = max(max_profit, profit);
        }

        cout << max_profit << endl;
    }

    return 0;
}
