#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int sur[16][2];
int DP[16];

int main() {
	int N, ans = 0;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> sur[i][0] >> sur[i][1];
	}
	DP[0] = sur[0][1] = 0;
	for (int i = 1; i <= N; i++) {
		int tmp = i + sur[i][0];
		if (tmp <= N + 1) {
			DP[tmp] = max(DP[tmp], DP[i] + sur[i][1]);
			ans = max(ans, DP[tmp]);
		}
		DP[i + 1] = max(DP[i], DP[i + 1]);
		ans = max(ans, DP[i + 1]);
	}
	cout << ans;

	return 0;
}