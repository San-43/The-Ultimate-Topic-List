#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int max = a > b ? a : b;

        while (max % a != 0 && max % b != 0) {
            max++;
        }

        cout << max << '\n';
    }
}