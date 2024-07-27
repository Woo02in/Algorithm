#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int n, cnt = 0;
int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < 5; i++) {
		scanf("%d", &n);
		if (n == N) cnt++;
	}
	printf("%d", cnt);
	return 0;
}