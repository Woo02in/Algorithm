#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<algorithm>

using namespace std;

int grape[10001];
int DP[10001];

int main() {
	int N, n;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		scanf("%d", &n);
		grape[i] = n;
	}
	DP[1] = grape[1];
	DP[2] = grape[1] + grape[2];

	for (int i = 3; i <= N; i++) {
		DP[i] = max(DP[i - 3] + grape[i - 1] + grape[i],  DP[i - 2] + grape[i]); 
		DP[i] = max(DP[i - 1], DP[i]);		
	}
	printf("%d", DP[N]);




	return 0;
}