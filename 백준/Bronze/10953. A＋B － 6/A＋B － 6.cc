#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a, b, test;
	char c;
	scanf("%d", &test);
	for (int i = 0; i < test; i++) {
		scanf("%d%c%d", &a, &c, &b);
		printf("%d\n", a + b);
	}

	return 0;
}