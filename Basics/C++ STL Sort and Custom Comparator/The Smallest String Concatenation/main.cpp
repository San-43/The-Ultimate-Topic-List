#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    vector<string> v(t);
    for (int i = 0; i < t; i++) {
        cin >> v[i];
    }

    ranges::sort(v, [](const string &a, const string &b) {
        return a + b < b + a;
    });
    for (int i = 0; i < t; i++) {
        cout << v[i];
    }
    cout << '\n';
}