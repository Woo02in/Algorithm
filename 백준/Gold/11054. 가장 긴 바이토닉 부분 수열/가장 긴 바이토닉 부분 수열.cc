#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<algorithm>

using namespace std;

int arr[1001];
int DP[1001];
int re_DP[1001];
int N, result, re_sult;

int main() {
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		scanf("%d", &arr[i]);
		int tmp = 0;
		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j]) tmp = max(tmp, DP[j]);
		}
		DP[i] = tmp + 1;
		DP[i] > result ? result = DP[i] : NULL;
	}
	for (int i = N; i >= 1; i--) {
		int tmp_1 = 0;
		for (int j = N+1; j > i; j--) {
			if (arr[i] > arr[j]) tmp_1 = max(tmp_1, re_DP[j]);
		}
		re_DP[i] = tmp_1 + 1;
		re_DP[i] > re_sult ? re_sult = re_DP[i] : NULL;
	}
	int big = 0;
	for (int i = 1; i <= N; i++) {
		int sum = DP[i] + re_DP[i] - 1;
		big < sum ? big = sum : NULL;
	}
	printf("%d", big);
	
	return 0;
}