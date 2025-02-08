#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    cout << mp.size() << endl;
    for (int i = 0; i < n; i++) {
        if (mp[a[i]] > 1) {
            mp[a[i]]--;
        } else
            cout << a[i] << " ";
    }
}