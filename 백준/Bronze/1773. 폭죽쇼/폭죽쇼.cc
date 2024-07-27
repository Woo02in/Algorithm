#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int arr[2000001];
int N;
int main() {
	int n, time,  cnt = 0;
	scanf("%d %d", &n, &time);
	for (int i = 0; i < n; i++) {
		scanf("%d", &N);
		for (int j = N; j <= time; j += N) {
			if (arr[j] == 0) arr[j]++;
		}
	}
	for (int i = 0; i <= time; i++) {
		if (arr[i] != 0) cnt++;
	}
	printf("%d", cnt);
	return 0;
}