#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<algorithm>
using namespace std;

int main() {
	int A, B, C, D, E;
	scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);
	int X_cost = 0, Y_cost = 0;
	X_cost = A * E;
	if (C > E) {
		Y_cost = B;
	}
	else if (C < E) {
		Y_cost = (E - C)*D + B;
	}
	printf("%d", min(X_cost, Y_cost));

	return 0;
}