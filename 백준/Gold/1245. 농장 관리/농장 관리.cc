#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<utility>

using namespace std;
int N, M, answer;
int map[101][101];
int vis[101][101];
int dir[8][2] = { {1,0}, {1,1},{0,1},{-1,1},{-1,0},{-1,-1},{0,-1},{1,-1} };
queue<pair<int, int>> q;
bool flag = true;

void dfs(int x, int y) {
	vis[x][y] = 1;
	for (int i = 0; i < 8; i++) {
		int nx = x + dir[i][0];
		int ny = y + dir[i][1];
		if (nx >= N || ny >= M || nx < 0 || ny < 0) continue;
		if (map[x][y] < map[nx][ny]) {
			flag = false;
		}
		if (vis[nx][ny]) continue;
		
		if (map[x][y] == map[nx][ny] && vis[nx][ny] == 0) {
			dfs(nx, ny);
		}
	}
}


int main() {
	cin >> N >> M;
	for (int i = 0; i<N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> map[i][j];
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (!vis[i][j] && map[i][j] != 0) {
				flag = true;
				dfs(i, j);				
				if (flag) {					
					answer++;
				}
			}
		}
	}
	cout << answer << endl;
	return 0;
}