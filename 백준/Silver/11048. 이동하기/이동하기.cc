#include<iostream>
#include<algorithm>

using namespace std;
int map[1001][1001];
int dp[1001][1001];

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> map[i][j];
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++){
			dp[i][j] = max({ dp[i-1][j] + map[i][j] , dp[i][j-1] + map[i][j], dp[i-1][j-1] + map[i][j] });
		}
	}

	cout << dp[n][m] << endl;
	return 0;
}

