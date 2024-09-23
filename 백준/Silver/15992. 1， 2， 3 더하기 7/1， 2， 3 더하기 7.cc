#include<iostream>
#include<algorithm>
typedef long long ll;

using namespace std;
int T;
ll dp[1001][1001];
int main() {
	cin >> T;
	dp[1][1] = 1;
	dp[2][1] = 1;
	dp[2][2] = 1;
	dp[3][1] = 1;
	dp[3][2] = 2;
	dp[3][3] = 1;
	dp[4][2] = 3;
	dp[4][3] = 3;
	dp[4][4] = 1;
	for (int i = 5; i <= 1000; i++) {
		for (int j = 1; j <= 1000; j++) {
			dp[i][j] = (dp[i - 1][j - 1] + dp[i - 2][j - 1] + dp[i - 3][j - 1])%1000000009;
		}
	}
	while (T--) {
		int n, m;
		cin >> n >> m;
		cout << dp[n][m]%1000000009 << '\n';

	}

	return 0;
}