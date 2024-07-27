#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int map[130][130];
int white, blue;
void compute(int N, int x,int y) {
	int cur = map[x][y];
	for (int i = x; i < x + N; i++) {
		for (int j = y; j < y + N; j++) {
			if (cur != map[i][j]) {
				compute(N / 2, x, y);
				compute(N / 2, x + N / 2, y);
				compute(N / 2, x, y + N / 2);
				compute(N / 2, x + N / 2, y + N / 2);
				return;
			}
		}
	}
	if (cur) blue++;
	else white++;
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
	printf("%d\n%d", white, blue);

	return 0;
}