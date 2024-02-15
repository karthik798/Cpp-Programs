#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, p, m = INT_MAX, ans = 0;
    cin >> n;
    vector < int > a(n);
    for (int i = 0; i < n; i++) {
        cin >> p;
        if (p < m) {
            m = p;
            ans++;
        }
    }
    cout << ans - 1;
}