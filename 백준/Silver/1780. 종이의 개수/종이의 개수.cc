#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int map[2200][2200];
int minus, zero, one;
void compute(int n, int x, int y) {
	int cur = map[x][y];
	for (int i = x; i < x + n; i++) {
		for (int j = y; j < y + n; j++) {
			if (cur != map[i][j]) {
				int size = n / 3;
				for (int k = 0; k < 3; k++) {
					for (int l = 0; l < 3; l++) {
						compute(size, x + size * k, y + size * l);
					}
				}
				return;
			}
		}
	}
	if (cur == -1) minus++;
	if (cur == 0) zero++;
	if (cur == 1) one++;
}


int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%d", &map[i][j]);
		}
	}
	compute(N, 0, 0);
	printf("%d\n%d\n%d", minus, zero, one);

	return 0;
}