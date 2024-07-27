#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int R1, S;
	scanf("%d %d", &R1, &S);
	int sum = S * 2;
	printf("%d", sum - R1);


	return 0;
}