#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

int N, M; // 세로 :M ,가로 : N
int map[501][501];
int dp[501][501];
bool vis[501][501];
int dir[4][2] = { {1,0}, {-1,0}, {0,1}, {0,-1} };
// dfs의 반환값은 row가 M까지 가고 col이 N까지 갔을 때의 경우의 수
int dfs(int row, int col) {
	if (vis[row][col]) {
		return dp[row][col];
	}
	if (row == M && col == N) {
		return 1;
	}
	vis[row][col] = true;

	for (int i = 0; i < 4; i++) {
		int nRow = row + dir[i][0];
		int nCol = col + dir[i][1];

		if (nRow <1 || nRow >M || nCol <1 || nCol >N) {
			continue;
		}
		if (map[nRow][nCol] >= map[row][col]) {
			continue;
		}
		dp[row][col] += dfs(nRow , nCol);
	}
	return dp[row][col];
}


int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	cin >> M >> N;
	for (int i = 1; i <= M; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> map[i][j];
		}
	}
	cout << dfs(1, 1);

	return 0;
}