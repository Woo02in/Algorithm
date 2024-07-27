#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;
int map[500][500];
int vis[501][501];
int N, M;
int answer, cnt, sum, ansT;
int dir[4][2] = { {1,0},{-1,0} ,{0,1} ,{0,-1} };

void dfs(int x, int y, int d, int s) {
	vis[x][y] = 1;
	s += map[x][y];	
	if (d == 4) {
		if (s > answer) answer = s;
		vis[x][y] = 0;
		return;
	}
	for (int i = 0; i < 4; i++) {
		int nx = x + dir[i][0];
		int ny = y + dir[i][1];
		if (nx < 0 || nx >= N || ny < 0 || ny >= M) {
			continue;
		}
		if (vis[nx][ny]) continue;
		if (!vis[nx][ny]) {
			dfs(nx, ny, d + 1, s);
		}
	}
	vis[x][y] = 0;
}

int main() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> map[i][j];
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			dfs(i, j,1,0);
			if (i - 1 >= 0 && j + 2 < M) {
				ansT = map[i][j] + map[i][j + 1] + map[i][j + 2] + map[i - 1][j + 1];
				answer = max(ansT, answer);
			}
			if (j + 2 < M && i + 1 < N) {
				ansT = map[i][j] + map[i][j + 1] + map[i][j + 2] + map[i + 1][j + 1];
				answer = max(ansT, answer);
			}
			if (i + 2 < N && j + 1 < M) {
				ansT = map[i][j] + map[i + 1][j] + map[i + 2][j] + map[i + 1][j + 1];
				answer = max(answer, ansT);
			}
			if (i + 1 < N && i - 1 >= 0 && j + 1 < M) {
				ansT = map[i][j] + map[i - 1][j + 1] + map[i][j + 1] + map[i + 1][j + 1];
				answer = max(answer, ansT);
			}
		}
	}
	cout << answer;
	return 0;
}