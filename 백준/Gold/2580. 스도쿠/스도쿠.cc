#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int map[9][9];
bool row[9][9];
bool col[9][9];
bool square[9][9];

void dfs(int cur) {
	if (cur == 81) {
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				printf("%d ", map[i][j]);
			}
			printf("\n");
		}
		exit(0);
	}
	int r = cur / 9;
	int c = cur % 9;
	int idx = (r / 3) * 3 + (c / 3);
	if (map[r][c] == 0) {
		for (int i = 1; i <= 9; i++) {
			if (!row[r][i] && !col[c][i] && !square[idx][i]) {
				map[r][c] = i;
				row[r][i] = 1;
				col[c][i] = 1;
				square[idx][i] = 1;
				dfs(cur + 1);
				row[r][i] = 0;
				map[r][c] = 0;
				col[c][i] = 0;
				square[idx][i] = 0; //
			}
		}
	}
	else dfs(cur + 1); // 
}

int main() {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%d", &map[i][j]);
			if (map[i][j] != 0) {
				row[i][map[i][j]] = true;
				col[j][map[i][j]] = true;
				square[(i/3)*3 + (j/3)][map[i][j]] = true;
			}
		}
	}
	dfs(0);

	return 0;
}