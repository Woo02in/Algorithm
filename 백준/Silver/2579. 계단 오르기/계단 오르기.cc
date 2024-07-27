#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<algorithm>

using namespace std;

int DP[301];
int sta[301];

int main(){
	int N; 
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		scanf("%d", &sta[i]);
	}
	DP[1] = sta[1];
	DP[2] = sta[1] + sta[2];
	DP[3] = max(sta[1] + sta[3], sta[2] + sta[3]);
	for (int i = 4; i <= N; i++) {
		DP[i] = max(sta[i] + DP[i - 2], sta[i] + DP[i - 3] + sta[i - 1]);
	}
	printf("%d", DP[N]);

	return 0;
}