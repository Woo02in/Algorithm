#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<algorithm>
using namespace std;

int main() {
	int L, A, B, C, D;
	scanf("%d %d %d %d %d", &L, &A, &B, &C, &D);
	int rest_m, rest_k;
	if (A%C == 0) {
		rest_m = A / C;
	}
	else rest_m = A / C + 1;
	if (B%D == 0) {
		rest_k = B / D;
	}
	else rest_k = B / D + 1;
	int ans = max(rest_k, rest_m);
	printf("%d", L - ans);

	return 0;
}