#include<iostream>
#include<algorithm>
#include<queue>
#include<utility>
#include<cstring>
using namespace std;
int N, M, Time, answer;
int vis[101][101];
int dir[4][2] = { {1,0}, {-1,0}, {0,1},{0,-1}};
int map[101][101];

bool bfs(int x, int y) {
	queue<pair<int, int>> q;
	q.push({ x,y });
	vis[x][y] = 1;
	int cnt = 0;
	Time++;
	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dir[i][1];
			int ny = y + dir[i][0];
			if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
			if (vis[nx][ny]) continue;
			if (!map[nx][ny])
				q.push({ nx,ny });
			else {
				map[nx][ny] = 0;
				cnt++;
			}
			vis[nx][ny] = 1;
		}
	}
	if (cnt == 0) {
		cout << --Time << '\n' << answer;
		return true;
	}
	else {
		answer = cnt;
		return false;
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> map[i][j];
		}
	}
	while (true) {
		if (bfs(0, 0)) break;
		memset(vis, 0, sizeof(vis));
	}
	
	return 0;
}