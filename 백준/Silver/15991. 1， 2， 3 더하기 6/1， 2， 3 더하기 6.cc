#include<iostream>
#include<algorithm>
#include<vector>
typedef long long ll;

using namespace std;

int T, n;
ll dp[100001];

int main() {
	cin >> T;

	while (T--) {
		cin >> n;
		dp[1] = 1;
		dp[2] = dp[3] = 2;
		dp[4] = dp[5] = 3;
		dp[6] = 6;
		for (int i = 7; i <= n; i++) {
			dp[i] = (dp[i - 2] + dp[i - 4] + dp[i - 6]) % 1000000009;
		}
		cout << dp[n] % 1000000009<< '\n';
	}


	return 0;
}