#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<algorithm>

using namespace std;

int DP[501][501];

int main() {
	int N,Max = 0;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= i; j++) {
			scanf("%d", &DP[i][j]);
			if (j == 1)
				DP[i][j] += DP[i - 1][j];
			else if (j == i) {
				DP[i][j] += DP[i - 1][j - 1];
			}
			else {
				DP[i][j] = max(DP[i - 1][j], DP[i - 1][j - 1]) + DP[i][j];
			}
			if (Max < DP[i][j])
				Max = DP[i][j];
		}
	}
	printf("%d", Max);

	return 0;
}
