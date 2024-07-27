#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<algorithm>
using namespace std;
int cnt_5;

int main() {
	int N;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		int tmp = i;
		if (i % 5 == 0) {
			while (tmp % 5==0) {
				tmp /= 5;
				cnt_5++;
			}
		}
	}
	printf("%d", cnt_5);
	return 0;
}