#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	long long a, b;
	scanf("%lld", &a);
	scanf("%lld", &b);
	if (a == b) {
		printf("1");
	}
	else printf("0");

	return 0;
}