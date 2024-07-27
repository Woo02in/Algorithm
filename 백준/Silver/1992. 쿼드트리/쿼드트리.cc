#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int map[65][65];

void compute(int n, int x, int y) {
	int cur = map[x][y];
	for (int i = x; i < x + n; i++) {
		for (int j = y; j < y + n; j++){
			if (cur != map[i][j]) {
				printf("(");
				compute(n / 2, x, y);
				compute(n / 2, x, y + n / 2);
				compute(n / 2, x + n / 2, y);
				compute(n / 2, x + n / 2, y + n / 2);
				printf(")");
				return;
			}
		}
	}
	if (cur) printf("1");
	else printf("0");
}

int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%1d", &map[i][j]);
		}
	}
	compute(N, 0, 0);
	return 0;
}