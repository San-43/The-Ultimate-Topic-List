#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n + 5);
    for (int i = 0; i < n; i++) {
        cin >> a[i+1];
        a[i+1] += a[i];
    }

    pair<int, int> m;
    m.first = INT_MAX;
    for (int i = 1; i <= n-k+1; i++) {
        if (a[i+k-1] - a[i-1] < m.first) {
            m.first = a[k+i-1] - a[i-1];
            m.second = i;
        }
    }
    cout << m.second;
}


int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}