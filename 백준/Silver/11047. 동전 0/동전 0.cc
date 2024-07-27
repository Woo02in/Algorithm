#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


int main() {
	int N, K;
	scanf("%d %d", &N, &K);
	int *arr = (int*)malloc(sizeof(int)*N);
	
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	int tmp = N;
	int result = 0;
	while (K > 0) {
		if (K / arr[tmp-1] > 0) {
			result += K / arr[tmp - 1];
			K = K % arr[tmp - 1];
		}
		tmp--;
	}
	printf("%d", result);
	free(arr);
	return 0;
}