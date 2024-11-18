#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    string s;
    cin >> s;
    auto f = s.find_first_of('0');
    s.erase(f != string::npos ? f : 0, 1);
    cout << s;
    return 0;
}

/// https://codeforces.com/contest/258