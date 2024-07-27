#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<algorithm>
using namespace std;
int n, cnt = 0;
int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &n);
		if (n == 1) cnt++;
	}
	if (cnt > N - cnt) printf("Junhee is cute!");
	else printf("Junhee is not cute!");
	return 0;
}