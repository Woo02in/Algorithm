#include<iostream>

using namespace std;

int N;
int dp[12];

int main() {
	int test;
	cin >> test;
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 2;
	for (int q = 0; q < test; q++) {
		cin >> N;
		for (int i = 3; i <= N; i++) {
			dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];
		}
		cout << dp[N] << endl;
	}
	
	return 0;
}