#include <bits/stdc++.h>
using namespace std;

int ways(int S, int E) {
    if (S == E) {
        return 1;
    }
    if (S > E) {
        return 0;
    }

    return ways(S + 1, E) + ways(S + 2, E) + ways(S + 3, E);
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int S, E;
    cin >> S >> E;

    cout << ways(S, E) << endl;

    return 0;
}
