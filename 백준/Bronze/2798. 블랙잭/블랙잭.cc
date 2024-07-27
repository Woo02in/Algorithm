
#include<stdio.h>
#include<stdlib.h>

int main() {
	int N, M;
	scanf("%d %d", &N, &M);
	int*A = (int*)malloc(sizeof(int)*N);
	int answer = 0;
	int max = 0;
	for (int i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
	for (int i = 0; i < N - 2; i++) {
		for (int j = i + 1; j < N - 1; j++) {
			for (int k = j + 1; k < N; k++) {
				int tmp = A[i] + A[j] + A[k];
				if (tmp <= M && max < tmp) {
					max = tmp;
				}
				if (tmp == M) {
					printf("%d", M);
					return 0;
				}
			}
		}
	}
	printf("%d",max);
	return 0;
}