#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int T;

int main() {
	cin >> T;
	while (T--) {
		int n;
		int dp[10001][4] = {0,};
		dp[0][1] = 1;
		dp[1][1] = 1;
		
		cin >> n;
		for (int i = 2; i <= n; i++) {
			dp[i][1] = dp[i - 1][1];
			dp[i][2] = dp[i - 2][1] + dp[i - 2][2];
			if(i>=3) dp[i][3] = dp[i - 3][1] + dp[i - 3][2] + dp[i - 3][3];
		}
		
		/*for (int i = 0; i <= n; i++) {
			for (int j = 1; j <= 3; j++) {
				cout << dp[i][j] << " ";
			}
			cout << endl;
		}*/
		cout << dp[n][1] + dp[n][2] + dp[n][3] << '\n';
	}

	return 0;
}