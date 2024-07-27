#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<algorithm>
using namespace std;
int board[101][101];
int n, m;
int main() {
	int test;
	scanf("%d", &test);
	for (int i = 0; i < test; i++) {
		scanf("%d %d", &n, &m);
		for (int j = n; j < n + 10; j++) {
			for (int k = m; k < m + 10; k++) {
				board[j][k] = 1;
			}
		}
	}
	int cnt = 0;
	for (int i = 0; i <= 100; i++) {
		for (int j = 0; j <= 100; j++) {
			if (board[i][j] == 1) cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}