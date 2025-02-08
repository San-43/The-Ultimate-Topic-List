#include "bits/stdc++.h"

using namespace std;

long long gcd(long long n1, long long n2) {
    if (n2 == 0)
        return n1;

    return gcd(n2, n1 % n2);
}

 long long lcm(long long  a, long long  b) {
    return a * b / gcd(a, b);
}

int main() {
    long long t, a, b;
    cin >> t;

    while (t--) {
        cin >> a >> b;
        cout << lcm(a, b) << " " << gcd(a, b) << endl;
    }
}