#include<stdio.h>

int main() {
	long long A, B, C;
	int answer = 1;
	scanf("%lld %lld %lld", &A, &B, &C);
	if (C <= B) {
		printf("-1");
	}
	else {
		printf("%lld",A / (C - B) + 1);
	}

	return 0;
}