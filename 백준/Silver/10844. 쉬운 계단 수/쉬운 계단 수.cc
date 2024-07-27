#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MOD 1000000000;
int DP[101][10];

int main() {
	int N;
	scanf("%d", &N);
	for (int i = 1; i < 10; i++) {
		DP[1][i] = 1;
	}
	for (int i = 2; i <= N; i++) {
		for (int j = 0; j <= 9; j++) {
			if (j == 0) {
				DP[i][0] = DP[i - 1][1] % MOD;
			}
			else if (j == 9) {
				DP[i][9] = DP[i - 1][8] % MOD;
			}
			else DP[i][j] = (DP[i - 1][j - 1] + DP[i - 1][j + 1]) % MOD;
		}
	}
	int sum = 0;
	for (int i = 0; i <= 9; i++) {
		sum = (sum+DP[N][i]) % MOD;
	}
	printf("%d", sum);

	return 0;
}