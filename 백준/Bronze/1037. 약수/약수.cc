#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<algorithm>

using namespace std;

int main() {
	int num;
	
	scanf("%d", &num);
	int* F = (int*)malloc(sizeof(int)*num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &F[i]);
	}
	sort(F, F + num);
	printf("%d", F[0] * F[num - 1]);/*
	if (num == 1) {
		printf("%d", F[0] * F[0]);
	}
	else if (num % 2 == 0) {
		printf("%d", F[0] * F[num - 1]);
	}
	else if (num % 2 == 1) {
		printf("%d", F[num / 2 + 1] * F[num / 2 + 1]);
	}*/


	return 0;
}