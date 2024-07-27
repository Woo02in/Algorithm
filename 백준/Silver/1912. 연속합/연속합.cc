#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<algorithm>

using namespace std;

int N;
int M[100001];
int dp[100001];

void DP() {
	for (int i = 1; i <= N; i++) {
		if (M[i] < dp[i - 1] + M[i]) {
			dp[i] = dp[i - 1] + M[i];
		}
		else dp[i] = M[i];
	}
}


int main() {
	int max;
	scanf("%d", &N);
	for (int i = 1; i <=N; i++) {
		scanf("%d", &M[i]);
	}
	max = M[1];
	DP();

	for (int i = 1; i <= N; i++) {
		max = dp[i] > max ? dp[i] : max;
	}
	printf("%d", max);
	return 0;
}
