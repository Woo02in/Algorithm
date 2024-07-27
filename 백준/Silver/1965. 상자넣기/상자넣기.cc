#include<iostream>
#include<algorithm>
using namespace std;


int dp[1001];
int box[1001];

int main() {
	int N;
	cin >> N;
	dp[0] = 1;
	for (int i = 0; i < N; i++) {
		cin >> box[i];
	}
	int ans = 0;
	for (int i = 0; i < N; i++) {
		dp[i] = 1;
		for (int j = 0; j < i; j++) {
			if (box[i] > box[j] && dp[j] + 1 > dp[i]) {
				dp[i] = dp[j] + 1;
			}
		}
		ans = max(ans, dp[i]);
	}
	cout << ans << endl;

	return 0;
}