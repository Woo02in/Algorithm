#include<iostream>
#include<algorithm>
typedef long long ll;
using namespace std;
int T;
int dp[1001][1001];

int main() {
	dp[1][1] = 1;
	dp[2][1] = 1;
	dp[2][2] = 1;
	dp[3][1] = 1;
	dp[3][2] = 2;
	dp[3][3] = 1;

	for (int i = 4; i <= 1000; i++) {
		for (int j = 2; j <= 1000; j++) {			
			dp[i][j] = ((dp[i - 3][j - 1] + dp[i - 2][j - 1]) % 1000000009 + dp[i - 1][j - 1]) % 1000000009;
		}
	}
	cin >> T;
	while (T--) {
		int n, m;
		cin >> n >> m;
		ll answer = 0;
		for (int i = 1; i <= m; i++) {
			answer += dp[n][i];
			answer %= 1000000009;
		}
		cout << answer << '\n';
	}

	return 0;
}