#include <bits/stdc++.h>

using namespace std;

constexpr int MAX = 1000006;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    vector<int> v(MAX, 0);

    for (int i = 1; i < MAX; i++) {
        for (int j = i; j < MAX; j += i) {
            v[j]++;
        }
    }

    int t;
    cin >> t;

    while(t--) {
        int a, b;
        cin >> a >> b;
        const int ans = __gcd(a, b);
        cout << v[ans] << '\n';
    }
}