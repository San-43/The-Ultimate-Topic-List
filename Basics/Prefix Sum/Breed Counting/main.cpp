#include <bits/stdc++.h>

using namespace std;


void solve() {
    int n, q;
    cin >> n >> q;
    vector<vector<int>> a(n+2, vector<int>(4));
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        a[i] = a[i-1];
        a[i][x]++;
    }
    while (q--) {
        int l, r;
        cin >> l >> r;
        for (int i = 1; i < 4; i++) {
            cout << a[r][i] - a[l-1][i];
            if (i != 3) {
                cout << " ";
            }
        }
        cout << '\n';
    }
}


int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    freopen("bcount.in", "r", stdin);
    freopen("bcount.out", "w", stdout);
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}