#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int N;
int main() {
	int n, t, cnt = 0;
	scanf("%d %d", &n, &t);
	for (int i = 0; i < n; i++) {
		scanf("%d", &N);
		if (t - N < 0) break;
		if (t - N >= 0) {
			cnt++;
			t -= N;
		}
	}
	printf("%d", cnt);

	return 0;
}