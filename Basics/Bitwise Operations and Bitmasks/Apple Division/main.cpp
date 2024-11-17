#include <bits/stdc++.h>

using namespace std;
bitset<300> bits;
int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    long long min_difference = LLONG_MAX;
    for (int mask = 1; mask < (1 << n); mask++) {
        long long int sum1 = 0;
        long long int sum2 = 0;
        for (int i = 0; i < n; i++) {
            if ((mask & (1 << i)) != 0) {
                sum1 += arr[i];
            } else {
                sum2 += arr[i];
            }
        }
        min_difference = min(min_difference, abs(sum1 - sum2));
    }
    cout << min_difference << endl;
    return 0;
}

/// https://cses.fi/problemset/task/1623
