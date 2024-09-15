#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int M, N;
int vis[1001][1001];
int dir[4][2] = { {1,0},{0,1}, {-1,0},{0,-1} };
char map[1001][1001];

void dfs(int x, int y) {
	for (int i = 0; i < 4; i++) {
		int nx = x + dir[i][0];
		int ny = y + dir[i][1];
		if (nx >= M || nx < 0 || ny >= N || ny < 0 || vis[nx][ny] == 1 || map[nx][ny] == '1') {
			continue;
		}
		vis[nx][ny] = 1;
		dfs(nx, ny);
		
	}
}

bool check() {
	bool ans = true;
	for (int i = 0; i < N; i++) {
		if (vis[M-1][i] == 1) {
			ans = false;
			break;
		}
	}
	return ans;
}
int main() {
	cin >> M >> N;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			cin >> map[i][j];
		}
	}
	for (int i = 0; i < N; i++) {
		if (!vis[0][i] && map[0][i] == '0')
			vis[0][i] = 1;
			dfs(0, i);
	}
	
	//for (int i = 0; i < M; i++) {
	//	for (int j = 0; j < N; j++) {
	//		cout << vis[i][j] << " ";

	//	}
	//	cout << endl;
	//}
	if (check()) {
		cout << "NO" << '\n';
	}
	else cout << "YES" << '\n';

	return 0;
}