#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<algorithm>
using namespace std;

int N, num ;
int arr[5];
int ans;
int sum[5];
int main() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%d", &N);
			sum[i] += N;
		}
		if (ans < sum[i]) {
			ans = sum[i];
			num = i+1;
		}
	}
	printf("%d\n%d", num ,ans);
	return 0;
}