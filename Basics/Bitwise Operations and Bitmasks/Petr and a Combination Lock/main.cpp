#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    int list[n];
    for (int i = 0; i < n; i++) {
        cin >> list[i];
    }

    for (int mask = 1; mask < (1 << n); mask++) {
        long long angle = 0;
        for (int i = 0; i < n; i++) {
            if ((mask & (1 << i)) == 0) {
                angle += list[i];
            } else {
                angle -= list[i];
            }
        }
        if (angle % 360 == 0) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}