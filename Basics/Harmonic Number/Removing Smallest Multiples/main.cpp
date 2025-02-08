#include <bits\stdc++.h>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        long long ans = 0;
        vector<int> v(n+5, 0);
        for (int i = n; i >= 1; i--) {
            for (int j = i; j <= n; j += i) {
                if (s[j-1] == '1') {
                    break;
                }
                v[j] = i;
            }
        }
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                ans += v[i+1];
            }
        }
        cout << ans << '\n';
    }
}