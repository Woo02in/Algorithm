#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int N, M, sum = 0, F;
	scanf("%d %d", &N, &M);
	for (int i = 1; i <= 100; i++) {
		if (i*i >= N && i*i <= M) {
			sum += i * i;
			if ((i - 1) * (i - 1) < N) {
				F = i * i;
			}
		}
	}
	if (sum == 0) {
		printf("-1");
	}
	else
		printf("%d\n%d", sum, F);

	return 0;
}