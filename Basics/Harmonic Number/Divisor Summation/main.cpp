#include <bits/stdc++.h>

using namespace std;

long long divisorSum(int n) {
    long long sum = 1;
    for (long long i = 2LL; 1LL*i*i <= n; i++) {
        if (n % i == 0 && i != 1) {
            sum += i;
            if (n / i != i) {
                sum += n / i;
            }
        }
    }
    return sum;
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n == 1) {
            cout << 0 << endl;
            continue;
        }
        cout << divisorSum(n) << endl;
    }
}