#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int n, s;
int a, b;
int main() {
	int test;
	scanf("%d", &test);
	for (int i = 0; i < test; i++) {
		int ans = 0, t;
		scanf("%d", &n);
		ans += n;
		scanf("%d", &t);
		for (int j = 0; j < t; j++) {
			scanf("%d %d", &a, &b);
			ans += a * b;
		}
		printf("%d\n", ans);
	}
	return 0;
}