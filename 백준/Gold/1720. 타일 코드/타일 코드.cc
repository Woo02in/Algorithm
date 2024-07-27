#include<iostream>

using namespace std;
int dp[31];

int main() {
	int N;
	cin >> N;
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 3;
	for (int i = 3; i <= N; i++) {
		dp[i] = dp[i - 1] + dp[i - 2] * 2;
		
	}
	if (N % 2 == 1) {
		cout << (dp[N] + dp[(N - 1) / 2]) / 2 << endl;
	}
	else {
		cout << (dp[N] + dp[N / 2] + dp[N / 2 - 1] * 2) / 2 << endl;
	}
	
	return 0;
}