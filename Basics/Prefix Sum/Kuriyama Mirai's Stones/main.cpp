#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m;
    cin >> n;
    vector<long long int> a(n+1);
    vector<long long int> v1(n+1);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        v1[i+1] = v1[i] + a[i];
    }

    cin >> m;

    
    for (int i = 1; i <= n; i++) {
        a[i] = a[i-1] + a[i];
    }


    while (m--) {
        int l, r, type;
        cin >> type >> l >> r ;
        if (type == 1) {
            cout << v1[r] - v1[l-1] << endl;
        } else {
            cout << a[r] - a[l-1] << endl;
        }
    }
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