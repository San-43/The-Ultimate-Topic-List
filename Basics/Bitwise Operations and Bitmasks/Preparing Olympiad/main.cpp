#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, l, r, x;
    cin >> n >> l >> r >> x;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ans = 0;
    for (int mask = 0; mask < 1 << n; mask++) {
        long long int total_difficulty = 0;
        int max_difficulty = 0;
        int min_difficulty = 1e9 + 1;
        for (int i = 0; i < n; i++) {
            if (mask & 1 << i) {
                total_difficulty += arr[i];
                max_difficulty = max(max_difficulty, arr[i]);
                min_difficulty = min(min_difficulty, arr[i]);
            }
        }

        if (total_difficulty <= r && total_difficulty >= l && abs(max_difficulty - min_difficulty) >= x) {
            ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}

/// https://codeforces.com/problemset/problem/550/B
