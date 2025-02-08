#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        char c;
        string s;
        cin >> n >> c >> s;
        bool flag = true;
        for (int i = 0; i < s.length(); i++) {
            if (c != s[i]) flag = false;
        }
        if (flag) {
            cout << 0 << '\n';
            continue;
        }
        for (int i = 1; i <= n; i++) {
            flag = true;
            for (int j = i; j <= n; j+=i) {
                if (s[j-1] != c) flag = false;
            }
            if (flag) {
                cout << 1 << '\n' << i << '\n';
                break;
            }
        }
        if (!flag) {
            cout << 2 << '\n' << n << " " << n-1 << '\n';
        }
    }
}