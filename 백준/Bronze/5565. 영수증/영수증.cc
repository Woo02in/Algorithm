#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<algorithm>
using namespace std;
int n;
int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < 9; i++) {
		scanf("%d", &n);
		N -= n;
	}
	printf("%d", N);
	return 0;
}