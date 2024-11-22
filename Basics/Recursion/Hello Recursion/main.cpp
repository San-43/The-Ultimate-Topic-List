#include <bits/stdc++.h>
using namespace std;

int sum(vector<int> v, int n) {
    if (n == 0) return v[0];
    return v[n] + sum(v, n - 1);
}

int main() {
    int t;
    cin>>t;
    for (int i = 1; i <= t; i++) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto& e : v)
            cin >> e;
        cout << "Case " << i << ": " << sum(v, n-1) << '\n';
    }
    return 0;
}
