#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int N;
int rgb[1001][3];
int dp[1001][3];
int answer = 987654321;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> rgb[i][j];
		}
	}
	dp[0][0] = rgb[0][0];
	dp[0][1] = rgb[0][1];
	dp[0][2] = rgb[0][2];
	for (int s = 0; s < 3; s++) {
		if (s == 0) {
			dp[0][1] = 987654321;
			dp[0][2] = 987654321;
		}
		else if (s == 1) {
			dp[0][0] = 987654321;
			dp[0][2] = 987654321;
		}
		else {
			dp[0][1] = 987654321;
			dp[0][0] = 987654321;
		}
		for (int i = 1; i < N; i++) {
			dp[i][0] = min(dp[i - 1][1] + rgb[i][0], dp[i-1][2] + rgb[i][0]);
			dp[i][1] = min(dp[i - 1][0] + rgb[i][1], dp[i - 1][2] + rgb[i][1]);
			dp[i][2] = min(dp[i - 1][1] + rgb[i][2], dp[i-1][0] + rgb[i][2]);
		}
		if (s == 0) {
			answer = min(min(answer, dp[N - 1][1]), dp[N - 1][2]);
		}
		else if (s == 1) {
			answer = min(min(answer, dp[N - 1][0]), dp[N - 1][2]);
		}
		else {
			answer = min(min(answer, dp[N - 1][1]), dp[N - 1][0]);
		}
		for (int i = 0; i < 3; i++) {
			dp[0][i] = rgb[0][i];
		}
	}
	
	cout << answer;
	return 0;
}