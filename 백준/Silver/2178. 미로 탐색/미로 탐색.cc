#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<vector>
#include<queue>
#include<utility>
#include<algorithm>

using namespace std;
int map[101][101];
int vis[101][101];
int dir[4][2] = { {1,0}, {-1,0}, {0,1},{0,-1} };
int n, m;

int BFS(int row, int col) {
	vis[col][row] = 1;
	queue<pair<pair<int,int>,int>> q;
	q.push({ {col,row} ,1 });
	while (!q.empty()) {
		int y = q.front().first.first;
		int x = q.front().first.second;
		int cnt = q.front().second;
		q.pop();
		if (x == m && y == n) {
			return cnt;
		}
		for (int i = 0; i < 4; i++) {
			int nx = x + dir[i][0];
			int ny = y + dir[i][1];
			if (nx <1 || ny < 1 || nx >m || ny >n) {
				continue;
			}
			if (vis[ny][nx] == 1) {
				continue;
			}
			if (map[ny][nx] == 0) {
				continue;
			}
			q.push({ { ny,nx },cnt+1});
			vis[ny][nx] = 1;
		}
	}
}


int main() {
	
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf("%1d", &map[i][j]);
		}
	}
	cout << BFS(1, 1);
	return 0;
}
