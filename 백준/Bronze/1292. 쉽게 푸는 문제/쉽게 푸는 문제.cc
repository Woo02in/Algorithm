#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int arr[1001];
int main() {
	int n = 0;
	int a, b;
	scanf("%d %d", &a, &b);
	for (int i = 0; i < 100; i++) {
		for (int j = 1; j <= i; j++) {
			arr[n] = i;
			if (n == 1000) break;
			else n++;
		}
	}
	int sum = 0;
	for (int i = a-1; i <= b-1; i++) {
		sum += arr[i];
	}
	printf("%d", sum);
	return 0;
}