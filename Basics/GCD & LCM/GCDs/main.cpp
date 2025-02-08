#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];

    set<int> s;
    vector<int> gcds;
    s.insert(a[0]);
    gcds.push_back(a[0]);
    for(int i=1;i<n;i++) {
        int tmp = gcd(gcds.back(),a[i]);
        s.insert(tmp);
        gcds.push_back(tmp);
    }
    cout << s.size() << endl;
}