#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string>
#include<math.h>
using namespace std;

int main() {
	long long N;
	scanf("%lld", &N);
	long long ans = 0;
	for (int i = 1; i < N; i++) {
		ans += (N +1) * i;
	}
	printf("%lld", ans);

	return 0;
}