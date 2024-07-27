#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

using namespace std;

int main() {
	int N;
	scanf("%d", &N);
	for (int i = 1; i <= 2 * N - 1; i++) {
		if (i <= N) {
			for (int j = 1; j <= i; j++) {
				printf("*");
			}
			printf("\n");
		}
		else {
			for (int j = 1; j <= 2 * N - i; j++) {
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}