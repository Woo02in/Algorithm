#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>

using namespace std;

int main() {
	int N, M, count = 0;
	scanf("%d %d", &N, &M);
	if (N > M) {
		count = (N - 1) + (M - 1) * N;
	}
	else if (N < M) {
		count = (M - 1) + (N - 1) * M;
	}
	else {
		count = (M - 1) + (N - 1) * M;
	}

	printf("%d", count);
	return 0;
}