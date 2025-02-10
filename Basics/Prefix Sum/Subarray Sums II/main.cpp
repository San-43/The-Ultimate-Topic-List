#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;
    vector<long long int> a(n);
    long long ans = 0;
    map<long long, long long> mp;
    mp[0] = 1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long int sum = 0;

    for (auto i : a) {
        sum += i;
        ans += mp[sum - k];
        mp[sum]++;
    }
    cout << ans << endl;
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