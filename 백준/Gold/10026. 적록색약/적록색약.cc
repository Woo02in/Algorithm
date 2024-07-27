#include<iostream>
#include<algorithm>
#include<utility>
#include<cstring>
using namespace std;
int vis[101][101];
int dis[4][2] = { {0,1},{0,-1}, {1,0}, {-1,0} };
char color[101][101];
int cnt, N;

void dfs(int a, int b) {
	vis[a][b] = true;
	for (int i = 0; i < 4; i++){
		int nx = a + dis[i][1];
		int ny = b + dis[i][0];
		if (nx < 0 || ny >= N || nx >= N || ny < 0) {
			continue;
		}
		if (!vis[nx][ny] && color[a][b] == color[nx][ny]) {
			dfs(nx, ny);
		}
	}
}

int main() {	
	cin >> N;
	string s;
	for (int i = 0; i < N; i++) {
		cin >> color[i];		
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (!vis[i][j]) {
				dfs(i, j);
				cnt++;
			}
		}
	}
	cout << cnt <<" ";
	memset(vis, false, sizeof(vis));
	cnt = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (color[i][j] == 'R')
				color[i][j] = 'G';
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (!vis[i][j]) {
				dfs(i, j);
				cnt++;
			}
		}
	}
	cout << cnt << endl;

	
	return 0;
}