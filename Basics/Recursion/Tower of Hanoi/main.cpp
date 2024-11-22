#include <bits/stdc++.h>
using namespace std;



void hanoy(int n, int start, int end, int& count, vector<pair<int, int>> &v) {
    count++;
    if (n == 1) {
        v.push_back(make_pair(start, end));
        return;
    }
    int x = 6 - (end + start);
    hanoy(n - 1, start, x, count, v);
    v.push_back(make_pair(start, end));
    hanoy(n - 1, x, end, count, v);
}

int main() {
    int n;
    cin >> n;
    vector<pair<int, int> > p;
    int count = 0;
    hanoy(n, 1, 3, count, p);
    cout << count << '\n';
    for (auto p : p) {
        cout << p.first << ' ' << p.second << '\n';
    }
}