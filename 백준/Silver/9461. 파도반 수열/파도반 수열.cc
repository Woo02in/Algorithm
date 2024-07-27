
#include<stdio.h>
long long DP[101] = { 0, };
int main() {
	int Test;
	scanf("%d", &Test);
	int N;
	DP[1] = 1;
	DP[2] = 1;
	DP[3] = 1;
	DP[4] = 2;
	DP[5] = 2;
	for (int i = 6; i <= 100; i++) {
		DP[i] = DP[i - 2] + DP[i - 3];
	}
	while (Test--) {
		scanf("%d", &N);
		printf("%lld\n", DP[N]);
	}


	return 0;

}