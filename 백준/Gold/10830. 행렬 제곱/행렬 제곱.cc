#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
typedef long long ll;
int n;

// 행렬 곱셈을 하는 함수이며,
int** Mul_mat(int** A,int**B) {
	int** C = (int**)malloc(sizeof(int*)*n);
	for (int i = 0; i < n; i++)
	{
		C[i] = (int*)malloc(sizeof(int)*n);
		for (int j = 0; j < n; j++) {
			C[i][j] = 0;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int l = 0; l < n; l++) {
				C[i][j] += A[i][l] * B[l][j];
			}
			C[i][j] %= 1000;
		}
	}

	return C;
}

int main() {
	ll m;
	scanf("%d %lld", &n, &m);
	int **A = (int**)malloc(sizeof(int*)*n);
	int **C = (int**)malloc(sizeof(int*)*n);
	for (int i = 0; i < n; i++) {
		A[i] = (int*)malloc(sizeof(int)*n);
		C[i] = (int*)malloc(sizeof(int)*n);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &A[i][j]);
			if (i == j) C[i][j] = 1;
			else C[i][j] = 0;
		}
	}
	
	while (m > 0) {
		if (m %2 == 1) {
			C = Mul_mat(A,C); // C = A * C;
		}
		A = Mul_mat(A, A);
		m /= 2;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}
	return 0;
}