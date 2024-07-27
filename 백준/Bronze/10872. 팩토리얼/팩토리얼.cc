
#include<stdio.h>

int fact(int a) {
	if (a <= 1)
		return 1;
	else
		return a * fact(a - 1);
}

int main() {
	int N;
	scanf("%d", &N);
	printf("%d", fact(N));

	return 0;
}