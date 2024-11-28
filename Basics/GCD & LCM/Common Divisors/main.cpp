
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    long long g = 0;
    for(int i=0;i<t;i++) {
        long long n;
        cin>>n;
        g = __gcd(g, n);
    }

    int count = 0;
    for (int i = 1; 1LL*i*i <= g; i++) {
        if (g%i == 0) {
            count+=2;
            if (g/i == i)
                count--;
        }
    }

    cout << count << endl;
}