#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, q;
        cin >> n >> q;
        vector<long long int> a(n+5);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            a[i] += a[i-1];
        }

        while (q--) {
            int l,r,k;
            cin >> l >> r >> k;

            const long long int tmp = (l-r+1)*k;
            const long long int sum = a[l-1] + a[n] - a[r] + tmp;
            if (sum & 1) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }

    return 0;
}