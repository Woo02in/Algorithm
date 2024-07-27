#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<algorithm>

using namespace std;

int main() {
	int N;
	scanf("%d", &N);

	for (int i = 2; i*i <= N; i++)
	{
		while (N % i == 0)
		{
			printf("%d\n", i);
			N /= i;
		}
	}

	if (N > 1)
		printf("%d", N);
	return 0;
}
	

