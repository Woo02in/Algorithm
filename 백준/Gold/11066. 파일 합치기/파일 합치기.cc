#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<queue>
#include<utility>

using namespace std;
int n, a;
int dp[501][501];
int sum[501];
int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    sum[0] = 0;
    int t;
    cin >> t;
    for (int ca = 0; ca < t; ca++) {
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> a;
            sum[i] = sum[i - 1] + a;
        }

        for (int k = 1; k < n; k++) {
            int i = 1;
            int j = k + 1;
            for (int u = 0; u < n - k; u++) {
                dp[i][j] = 1e9;
                for (int m = j - k; m <= j - 1; m++) {
                    dp[i][j] = min(dp[i][j], dp[i][m] + dp[m + 1][j] + sum[j] - sum[i - 1]);
                }
                i++;
                j++;
            }
        }

        cout << dp[1][n] << "\n";
    }
    return 0;
}