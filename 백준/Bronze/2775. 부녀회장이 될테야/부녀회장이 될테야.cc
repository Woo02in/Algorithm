
#include<stdio.h>

int main() {
	int T, k, n;
	int DP[15][15] = { 0, };
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &k, &n);
		for (int i = 0; i < 15; i++) {
			DP[0][i] = i;
			DP[i][1] = 1;
		}
		for (int i = 1; i < 15; i++) {
			for (int j = 1; j < 15; j++) {
				DP[i][j] = DP[i - 1][j] + DP[i][j - 1];
			}
		}
		printf("%d\n", DP[k][n]);
	}
	return 0;
}