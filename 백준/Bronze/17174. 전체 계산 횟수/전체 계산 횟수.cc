#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a, b,sum =0;
	scanf("%d %d", &a, &b);
	int A = a;
	while (A/b>0) {
		sum += A / b;
		A /= b;

	}
	printf("%d", a+ sum);

	return 0;
}