#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;

int map[1001][1001];
int dp[1001][1001];

int main() {
	int n, m, w, ans = 0;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf("%1d", &map[i][j]);
			if (map[i][j] == 1) {
				dp[i][j] = 1;
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (map[i][j] == 1) {
				if (dp[i - 1][j] != 0 && dp[i - 1][j - 1] != 0 && dp[i][j - 1] != 0) {
					if (dp[i - 1][j] != 1 && dp[i - 1][j - 1] != 1 && dp[i][j - 1] != 1) {
						int size = min(dp[i - 1][j], dp[i - 1][j - 1]);
						size = min(size, dp[i][j - 1]);
						w = sqrt(size) + 1;
						dp[i][j] = w * w;
					}
					else {
						dp[i][j] = 4;
					}
				}
				ans = max(ans, dp[i][j]);
			}
		}
	}
	printf("%d", ans);

	return 0;
}