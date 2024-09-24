#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int n, T;
int dp[100001][2];

int main() {
	cin >> T;
	dp[1][0] = 1;
	dp[1][1] = 0;
	dp[2][0] = 1;
	dp[2][1] = 1;
	dp[3][0] = 2;
	dp[3][1] = 2;
	dp[4][0] = 3;
	dp[4][1] = 4;
	dp[5][0] = 7;
	dp[5][1] = 6;
	for (int i = 6; i <= 100000; i++) {
		dp[i][0] = ((dp[i - 3][1] + dp[i - 2][1])% 1000000009 + dp[i - 1][1])%1000000009;
		dp[i][1] = ((dp[i - 3][0] + dp[i - 2][0])% 1000000009 + dp[i - 1][0])%1000000009;
	}
	while (T--) {
		cin >> n;
		cout << dp[n][0] << " " << dp[n][1] << '\n';
	}
	return 0;
}