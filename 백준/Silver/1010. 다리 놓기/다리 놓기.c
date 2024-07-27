#include<stdio.h>
double combination(int N, int M) {
	double r, fac_N=1, fac_M=1, fac_NM=1;
	for (int i = 1; i <= N; i++) fac_N *= i;
	for (int i = 1; i <= M; i++) fac_M *= i;
	for (int i = 1; i <= M - N; i++) fac_NM *= i;
	r = fac_M / fac_NM / fac_N;

	return r;
}
int main() {
	int TestCase, N, M;
	scanf("%d", &TestCase);
	for (int i = 0; i < TestCase; i++) {
		scanf("%d %d", &N, &M);
		printf("%0.0lf\n", combination(N, M));
	}

	return 0;
}