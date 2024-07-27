#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<algorithm>
using namespace std;
int arr[1001]; // 0으로 초기화
int DP[1001];
int N,result;

int main() {
	scanf("%d", &N); // input N
	for (int i = 1; i <= N; i++) {
		scanf("%d", &arr[i]);
		int tmp = 0;
		for (int j = 0; j < i; j++) {
			if(arr[i] > arr[j])
				tmp = max(tmp, DP[j]);
		}
		DP[i] = tmp + 1;
		DP[i] > result ? result = DP[i] : NULL;
	}
	

	printf("%d", result);

	return 0;
}