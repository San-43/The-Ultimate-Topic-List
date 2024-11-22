#include <bits/stdc++.h>

using namespace std;

bool reach_value(long long int n, long long int reach) {
    if (reach > n) {
        return false;
    }
    if (n == reach) {
        return true;
    }
    return reach_value(n, reach * 10) || reach_value(n, reach * 20);
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long int n;
        cin >> n;
        reach_value(n, 1) ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}