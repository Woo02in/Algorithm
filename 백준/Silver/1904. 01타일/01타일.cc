
#include<stdio.h>
int DP[1000000] = { 0, };
int main() {
	int N;
	scanf("%d", &N);
	DP[1] = 1;
	DP[2] = 2;
	for (int i = 3; i <= N; ++i) {
		DP[i] = (DP[i - 2] + DP[i - 1]) % 15746;
	}
	
	printf("%d", DP[N]);

	return 0;

}