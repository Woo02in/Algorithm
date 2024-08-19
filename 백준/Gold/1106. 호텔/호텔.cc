#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int C, N;
int cost[21], user[21];
int dp[100001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> C >> N;
	for (int i = 0; i < N; i++) {
		cin >> cost[i] >> user[i];
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= 100000; j++) {
			if (j - cost[i] >= 0) {
				dp[j] = max(dp[j], dp[j - cost[i]] + user[i]);
			}
		}
	}
	for (int i = 0; i <= 100000; i++) {
		if (dp[i] >= C) {
			cout << i << '\n';
			break;
		}
	}
	/*for (int i = 0; i <= 100; i++) {
		cout << dp[i] << " ";
	}*/
	return 0;
}