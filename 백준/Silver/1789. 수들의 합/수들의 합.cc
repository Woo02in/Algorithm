#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	long long N;
	scanf("%lld", &N);
	int tmp = 1, result = 0;
	long long ans = 0;
    while (1) {
		ans += tmp;
		result++;
		if (ans > N) {
			result--;
			break;
		}
		tmp++;
	}
	printf("%d", result);
	return 0;
}