#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
typedef long long ll;
ll n;

// 행렬 곱셈을 하는 함수이며,
ll** Mul_mat(ll **A, ll **B) {
	ll **C = (ll**)malloc(sizeof(ll*) * 2);
	for (ll i = 0; i < 2; i++) {
		C[i] = (ll*)malloc(sizeof(ll) * 2);
		for (ll j = 0; j < 2; j++) {
			C[i][j] = 0;
		}
	}

	for (ll i = 0; i < 2; i++) {
		for (ll j = 0; j < 2; j++) {
			for (ll l = 0; l < 2; l++) {
				C[i][j] += A[i][l] * B[l][j];
			}
			C[i][j] %= 1000000;
		}
	}

	return C;
}

int main() {
	ll n;
	scanf("%lld", &n);
	ll** A = (ll**)malloc(sizeof(ll*) * 2);
	ll** C = (ll**)malloc(sizeof(ll*) * 2);
	ll** res = (ll**)malloc(sizeof(ll*) * 2);
	for (ll i = 0; i < 2; i++) {
		A[i] = (ll*)malloc(sizeof(ll) * 2);
		C[i] = (ll*)malloc(sizeof(ll) * 2);
		res[i] = (ll*)malloc(sizeof(ll) * 2);
	}
	A[0][0] = 1; A[0][1] = 0;
	A[1][0] = 0; A[1][1] = 0;

	C[0][0] = 1; C[0][1] = 1;
	C[1][0] = 1; C[1][1] = 0;


	res[0][0] = 1; res[0][1] = 0;
	res[1][0] = 0; res[1][1] = 1;
	while (n > 0) {
		if (n % 2 == 1) {
			res = Mul_mat(res, C); // C = A * C;
		}
		C = Mul_mat(C, C);
		n /= 2;
	}
	res = Mul_mat(res, A);
	printf("%d",res[1][0]);


	return 0;
}