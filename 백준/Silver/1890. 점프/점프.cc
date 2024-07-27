#include<iostream>

using namespace std;

int map[101][101];
long long dp[101][101];

int main() {
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> map[i][j];
		}
	}
	dp[1][1] = 1;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			if (dp[i][j] == 0 || (i == N && j == N)) {
				continue;
			}

			int d = i + map[i][j];
			int r = j + map[i][j];
			if (d <= N) dp[d][j] = dp[d][j] + dp[i][j];
			if (r <= N) dp[i][r] = dp[i][r] + dp[i][j];

		}
	}
	cout << dp[N][N] << endl;
	return 0;
}