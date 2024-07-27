//19:35
#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;
int N, M;
int vis[501][501];
int picture[501][501];
int answer, cnt;
int dir[4][2] = { {1,0},{-1,0}, {0,1},{0,-1} };

int dfs(int x, int y) {
	vis[x][y] = 1;
	cnt++;
	for (int i = 0; i < 4; i++) {
		int nx = x + dir[i][0];
		int ny = y + dir[i][1];
		if (nx < 0 || nx >= N || ny < 0 || ny >= M || vis[nx][ny]) continue;
		if (picture[nx][ny]) {
			dfs(nx, ny);
		}
	}
	return cnt;
}

int main() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> picture[i][j];
		}
	}
	int pic = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (!vis[i][j] && picture[i][j]) {
				answer = max(answer, dfs(i, j));
				pic++;
				cnt = 0;
			}
		}
	}
	cout << pic << '\n' << answer;


	return 0;
}