#include<iostream>
#include<algorithm>
using namespace std;

int R, C;
char arr[21][21];
int dir[4][2] = { {1,0},{-1,0}, {0,1},{0,-1} };
int ans = 1;
bool visit[26];

void dfs(int x, int y, int cnt) {
	if (x >= R || y >= C || x < 0 || y < 0) {
		return;
	}
	ans = max(ans, cnt);

	for (int i = 0; i < 4; i++) {
		int nx = x + dir[i][0];
		int ny = y + dir[i][1];
		if (nx >= R || ny >= C || nx < 0 || ny < 0) {
			continue;
		}
		if (visit[arr[nx][ny] - 'A'] == true) {
			continue;
		}
		visit[arr[nx][ny] - 'A'] = true;
		dfs(nx, ny, cnt + 1);
		visit[arr[nx][ny] - 'A'] = false;
	}


}

int main() {
	cin >> R >> C;
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			cin >> arr[i][j];
		}
	}
	visit[arr[0][0] - 'A'] = true;
	dfs(0, 0, 1);
	cout << ans;
	return 0;
}