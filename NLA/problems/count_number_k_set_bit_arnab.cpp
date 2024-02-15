//Please note that this code assumes that the numbers are 0-indexed. If the numbers are 1-indexed, 
// you would need to subtract 1 from n and k before calling count_numbers.

#include<bits/stdc++.h>
using namespace std;

int count_numbers(int n, int k) {
    vector<vector<int>> dp(n+1, vector<int>(k+1, 0));
    dp[0][0] = 1;

    for (int i = 1; i <= n; i++) {
        dp[i][0] = 1;
        for (int j = 1; j <= min(i, k); j++) {
            dp[i][j] = dp[i-1][j] + dp[i-1][j-1];
        }
    }

    return dp[n][k];
}

int main() {
    int n, k;
    cin >> n >> k;
    cout << count_numbers(n, k) << endl;
    return 0;
}
