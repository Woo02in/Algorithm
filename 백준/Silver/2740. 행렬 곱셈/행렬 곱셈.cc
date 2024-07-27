#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int A[101][101], B[101][101], C[101][101];
int n, m, k;

void Mul_mat() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			for (int l = 0; l < m; l++) {
				C[i][j] += A[i][l] * B[l][j];
			}
		}
	}
}

int main() {
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &A[i][j]);
		}
	}
	scanf("%d %d", &m, &k);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < k; j++) {
			scanf("%d", &B[i][j]);
		}
	}
	Mul_mat();
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}
	return 0;
}