#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int N;
	scanf("%d", &N);
	for (int i = N-1; i >= 0; i--) {
		for (int j = 0; j < N - i - 1; j++) printf(" ");
		for (int j = 0; j < 2 * i + 1; j++) printf("*");
		printf("\n");
	}

	return 0;

}