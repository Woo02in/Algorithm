#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int N, result;
int queen[16];

void dfs(int n) {
	for (int i = 0; i < n; i++) {
		if (queen[i] == queen[n] || abs(queen[i] - queen[n]) == abs(i - n)) {
			return;
		}
	}
	if (n == N - 1) {
		result++;
		return;
	}
	for (int i = 0; i < N; i++) {
		queen[n + 1] = i;
		dfs(n + 1);
	}

}

int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		queen[0] = i;
		dfs(0);
	}
	printf("%d", result);

	return 0;
}