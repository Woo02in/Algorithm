#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int N;
	scanf("%d", &N);
		for (int j = 0; j < N; j++) {
			for (int k = j; k > 0; k--) {
				printf(" ");
			}
			for (int k = N-j; k > 0; k--) {
				printf("*");
			}
			printf("\n");
		}

	return 0;
}