#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    uint64_t ans = UINT64_MAX;

    for (int i = 2; i < 11; i += 2) {
        string s(i / 2, '4');
        s += string(i / 2, '7');

        do {
            uint64_t num = stoull(s);
            if (num >= n) {
                ans = min(ans, num);
            }
        } while (ranges::next_permutation(s).found);
    }

    cout << ans << endl;
}

/// https://codeforces.com/contest/96/problem/B

/*using namespace std;
int main() {
    int n;
    cin >> n;
    uint64_t ans =  UINT64_MAX;
    for(int i = 2; i < 19; i += 2) {
        for (int mask = 0; mask < 1 << i; mask++) {
            string s;
            if (__builtin_popcount(mask) == i/2) {
                for (int j = 0; j < i; j++) {
                    if (mask & (1 << j)) {
                        s.push_back('7');
                    } else {
                        s.push_back('4');
                    }
                }
                uint64_t num = stoull(s);
                if (num >= n)
                    ans = min(ans, num);
            }
        }
    }
    cout << ans << endl;
}*/
