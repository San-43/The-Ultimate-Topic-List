#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    cin >> s;
    int opens = 0;
    int closed = 0;
    vector<pair<int, int>> v;
    for (int i = 1; i <= s.length(); i++) {
        if (s[i-1] == '(') {
            v.emplace_back(opens - closed, i);
            opens++;
        } else {
            v.emplace_back(opens - closed, i);
            closed++;
        }
    }
    ranges::sort(v, [](const pair<int, int> &a, const pair<int, int> &b) {
        if (a.first == b.first) {
            return a.second >= b.second;
        }
        return a.first < b.first;
    });
    for (const auto snd: v | views::values) {
        cout << s[snd-1];
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