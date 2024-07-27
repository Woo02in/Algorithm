#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<algorithm>
using namespace std;

int main() {
	int A, B, C, a, b;
	scanf("%d %d %d %d %d", &A, &B, &C, &a, &b);
	int Mini_b = min(A, B) < C ? min(A, B) : C;
	int Mini_d = min(a, b);
	printf("%d", Mini_b + Mini_d - 50);

	return 0;
}