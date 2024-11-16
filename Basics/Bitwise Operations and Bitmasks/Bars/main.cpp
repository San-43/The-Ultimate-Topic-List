#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int n, p;
        cin >> n >> p;
        int arr[p];
        for (int i = 0; i < p; i++) {
            cin >> arr[i];
        }
        bool flag = true;
        for (int mask = 0; mask < (1 << p); mask++) {
            long long sum = 0;
            for (int i = 0; i < p; i++) {
                if (mask & 1 << i && arr[i] < n) {
                    sum += arr[i];
                }
            }
            if (sum == n) {
                cout << "YES" << '\n';
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << "NO" << '\n';
        }
    }

    return 0;
}

/// https://vjudge.net/problem/UVA-12455
