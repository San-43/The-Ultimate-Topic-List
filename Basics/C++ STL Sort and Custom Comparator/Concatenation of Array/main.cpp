#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            v.push_back(make_pair(a, b));
        }
        ranges::sort(v, [](const pair<int, int> &a, const pair<int, int> &b) {
            const int sum = a.first + a.second;
            const int sum2 = b.first + b.second;
            return sum < sum2;
        });
        for (int i = 0; i < n; i++) {
            cout << v[i].first << " " << v[i].second << " ";
        }
        cout << endl;
    }
}