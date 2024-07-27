#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int t, r= 0;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++) {
		for (int j = i; i*j <= t; j++) {
			r++;
		}
	}
	printf("%d", r);
	return 0;
}