#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int x;
        cin >> x;
        int count = 0;
        for (int j = 1; j * j <= x; j++) {
            if (x % j == 0) {
                count += 2;
                if (x / j == j) {
                    count -= 1;
                }
            }
        }
        cout << count << '\n';
    }

}