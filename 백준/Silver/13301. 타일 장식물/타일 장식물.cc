#include<iostream>

using namespace std;
long long dp[81];
int main() {
	int N;
	cin >> N;
	long long ans = 0;
	dp[1] = 1;
	dp[2] = 1;
	for (int i = 3; i <= N; i++) {
		dp[i] = dp[i - 2] + dp[i - 1];
	}
	ans = (dp[N]) * 4 + (dp[N - 1]) * 2;
	cout << ans;

	return 0;
}