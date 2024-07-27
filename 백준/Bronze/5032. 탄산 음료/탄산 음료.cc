#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int e, c, f;
	int ans = 0;
	int cnt = 0;
	scanf("%d %d %d", &e, &c, &f);
	cnt = (e + c);
	while (1) {
		if (cnt < f) break;
		ans += cnt / f;
		cnt = cnt % f + cnt / f;
	}
	printf("%d", ans);

	return 0;
}