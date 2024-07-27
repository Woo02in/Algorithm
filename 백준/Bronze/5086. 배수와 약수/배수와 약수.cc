#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	while (true) {
		int N, M;
		scanf("%d %d", &N, &M);
		if (N == 0 && M == 0) {
			break;
		}
		if (N % M == 0) {
			printf("multiple\n");
		}
		else if (M%N == 0) {
			printf("factor\n");
		}
		else printf("neither\n");

	}
	return 0;
}