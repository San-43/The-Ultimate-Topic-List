#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        vector<int> v(n+5);
        int x;
        for(int i=0;i < n; i++) {
            cin>>x;
            if (x <= n) {
                v[x]++;
            }
        }
        int tmp = 0;
        vector<int> mx(n+5, 0);
        for(int i=1;i<=n;i++) {
            for(int j=i;j<=n;j+=i) {
                mx[j] += v[i];
                tmp = max(tmp, mx[j]);
            }
        }
        cout << tmp << endl;
    }
}