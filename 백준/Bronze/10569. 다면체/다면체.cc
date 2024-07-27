#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int test;
	scanf("%d", &test);
	for (int i = 0; i < test; i++) {
		int N, M;
		scanf("%d %d", &N, &M);
		printf("%d\n", 2 - (N - M));
	}

	return 0;
}