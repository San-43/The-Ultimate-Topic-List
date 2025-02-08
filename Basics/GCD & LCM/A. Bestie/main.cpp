#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }

        int value1 = a[0];
        for(int i=1;i<n;i++) {
            value1 = gcd(value1, a[i]);
        }
        if(value1==1) {
            cout << 0 << '\n';
            continue;
        }

        if (n >= 2) {
            bool band = false;
            for (int i = n-1; i >= n-2; i--) {
                int x = a[i];
                a[i] = gcd(x, i+1);
                int value = a[0];
                for (int j = 1; j < n; j++) {
                    value = gcd(value, a[j]);
                }
                a[i] = x;
                if(value==1) {
                    cout << n - (i+1)+1 << '\n';
                    band = true;
                    break;
                }
            }
            if (!band) {
                cout << 3 << '\n';
            }
        } else {
            cout << 1 << '\n';
        }
    }
}

///https://codeforces.com/contest/1732/problem/A