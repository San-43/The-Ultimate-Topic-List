#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<long long int> a(n+1, 0), b(n+1);
    for (int i = n-k+1; i <= n ; i++) {
        cin >> b[i];
    }

    if (k == 1) {
        cout << "YES" << '\n';
        return;
    }

    for (int i = n-k+2; i <= n; i++) {
        a[i] = b[i] - b[i-1];
    }

    if (!is_sorted(a.begin() + n-k+2, a.end())) {
        cout << "NO" << '\n';
        return;
    }
    if (b[n-k+1] > a[n-k+2] * (n-k+1)) {
        cout << "NO" << '\n';
        return;
    }
    cout << "YES" << '\n';

}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}