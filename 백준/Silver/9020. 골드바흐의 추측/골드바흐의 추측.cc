
#include<stdio.h>

int main() {
	int A[10001] = { 0, };
	A[1] = 1; // 1 은 합성수 , 0은 소수

	for (int i = 2; i <= 10000; i++) {
		if (A[i] == 0) {
			for (int j = 2; j*i <= 10000; j++) {
				A[i*j] = 1;
			}
		}
	}

	int Test;
	scanf("%d", &Test);
	for (int i = 0; i < Test; i++) {
		int N;
		scanf("%d", &N);
		int n = N / 2;
		for (int j = 0; j < n; j++) {
			int n_1, n_2;
			n_1 = n - j;
			n_2 = n + j;
			if (A[n_1] == 0 && A[n_2] == 0) {
				printf("%d %d\n", n_1, n_2);
				break;
			}
		}
	}
	return 0;
}