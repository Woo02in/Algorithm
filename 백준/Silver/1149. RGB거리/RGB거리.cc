#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int N, house[1001][3] = { 0, }, dp[1001][3] = { 0, };
	cin >> N;
	for (int i = 1; i <= N; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> house[i][j];
		}
	}
	for (int i = 0; i < 3; i++) {
		dp[1][i] = house[1][i];
	}

	for (int i = 2; i <= N; i++) {
		dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + house[i][0];
		dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + house[i][1];
		dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + house[i][2];
	}
	cout << min({ dp[N][0], dp[N][1], dp[N][2] }) << endl;
	return 0;
}