#include<iostream>
#include<algorithm>

using namespace std;

int dp[10001];
int coin[101];

int main() {
	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		cin >> coin[i];
	}

	for (int i = 1; i <= k; i++) {
		dp[i] = 100001;
	}

	for (int i = 1; i <= n; i++) {		
		for (int j = 1; j <= k; j++) {
			if (j - coin[i] >= 0) {
				dp[j] = min(dp[j] ,dp[j - coin[i]] + 1);
			}
		}
	}
	if (dp[k] == 100001) {
		cout << "-1";
	}
	else {
		cout << dp[k];
	}
	return 0;
}