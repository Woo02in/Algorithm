#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main() {
	int A, B, C, N;
	int arr[10] = { 0, };
	scanf("%d %d %d", &A, &B, &C);
	int mul = A * B * C;
	while(mul != 0) {
		arr[mul % 10]++;
		mul /= 10;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}