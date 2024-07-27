#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string>
#include<math.h>
using namespace std;

int main() {
	int N;
	int cnt = 5;
	scanf("%d", &N);
	if (N == 1) {
		printf("%d", cnt);
	}
	else {
		for (int i = 3; i <= N+1; i++) {
			cnt = (cnt + (3 * i) - 2) % 45678;
		}
		printf("%d", cnt);
		return 0;
	}
}