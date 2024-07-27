#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<algorithm>

using namespace std;
int DP[1001];

int main() {
	int N , sum;
	scanf("%d", &N);
	DP[1] = 1;
	DP[2] = 3;
	for (int i = 3; i <= N; i++) {
		DP[i] = (2 * (DP[i - 2]) + DP[i - 1]) % 10007;
	}
	printf("%d", (DP[N]) % 10007);
	

	return 0;
}