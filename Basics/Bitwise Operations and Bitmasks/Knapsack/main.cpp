#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, w;
    cin >> n >> w;
    pair <int, int> arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first;
        cin >> arr[i].second;
    }

    int max_sum = 0;
    for (int mask = 1; mask < 1 << n; mask++) {
        int totalWeight = 0;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i) && (totalWeight + arr[i].first) <= w) {
                totalWeight += arr[i].first;
                sum += arr[i].second;
            }
        }
        max_sum = max(max_sum, sum);
    }

    cout << max_sum << endl;
    return 0;
}

/// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/U
