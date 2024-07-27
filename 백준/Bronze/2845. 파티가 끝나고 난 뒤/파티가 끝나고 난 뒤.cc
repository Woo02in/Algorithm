#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int L, P;
	scanf("%d %d", &L, &P);
	int sum = L * P;
	for (int i = 0; i < 5; i++) {
		int m;
		scanf("%d", &m);
		printf("%d ", m - sum);
	}

	return 0;
}