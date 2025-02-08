#include <bits/stdc++.h>

using namespace std;

const int MAX = 1000005;

int main() {
    int t;
    cin >> t;
    vector<long long> sum(MAX, 0);
    for (int i = 1; i <= 1e6+2; i++) {
        for (int j = 2 * i; j <= 1e6+3; j += i) {
            sum[j] += i;
        }
    }

    while(t--) {
        int n;
        cin >> n;
        if (sum[n] < n) {
            cout << "deficient" << '\n';
        } else if (sum[n] > n) {
            cout << "abundant" << '\n';
        } else {
            cout << "perfect" << '\n';
        }
    }
}