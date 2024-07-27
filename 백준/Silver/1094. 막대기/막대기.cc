#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>

using namespace std;

int main() {
	/*int X, count = 1,bar = 64;
	scanf("%d", &X);
	while (X != 0) {
		if (X == bar) {
			printf("%d", count);
		}
		else if (X < bar) {
			bar = bar / 2;
			continue;
		}
		else if (X > bar) {
			X = X - bar;
			bar = bar / 2;
			count++;
		}
	}
	printf("%d", count);*/

	int X, ans = 0;
	scanf("%d", &X);

	while (1) {
		if (X % 2 == 1) {
			ans++;
		}
		X /= 2;
		if (X == 0) {
			break;
		}
	}
	printf("%d", ans);

	return 0;
}