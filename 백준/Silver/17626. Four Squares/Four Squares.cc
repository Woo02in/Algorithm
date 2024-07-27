#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int dp[50000];
int main() {
	int N, answer = 0;
	cin >> N;	
	for (int i = 1; i <= N; i++) {
		dp[i] = dp[i - 1] + 1;
		for (int j = 1; j*j <= i; j++) {
			dp[i] = min(dp[i], dp[i - j * j] + 1);
		}		
	}

	cout << dp[N];
	return 0;
}