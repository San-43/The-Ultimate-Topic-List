#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    long long int ans = 0;
    map<long long, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mp[0] = 1;
    long long int sum = 0;
    for (const auto i : arr) {
        sum += i;
        ans += mp[((sum % n) + n) % n];
        mp[((sum % n) + n) % n]++;
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