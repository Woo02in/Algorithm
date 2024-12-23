#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>

using namespace std;

int R, C, K, answer;
int vis[6][6];
char map[6][6];
int dir[4][2] = { {1,0}, {0,1}, {-1,0},{0,-1} };

void dfs(int x, int y, int cnt) {
	if (x == 0 && y == C-1) {
		if (cnt == K) {
			answer++;
			return;
		}		
		/*for (int i = 0; i < R; i++) {
			for (int j = 0; j < C; j++) {
				cout << map[i][j];
			}
			cout << endl;
		}
		cout << cnt << endl;
		cout << endl;*/
	}
	for (int i = 0; i < 4; i++) {
		int nx = x + dir[i][0];
		int ny = y + dir[i][1];			
		if (nx < 0 || ny < 0 || nx >= R || ny >= C) continue;
		if (map[nx][ny] == 'T') continue;
		if (vis[nx][ny]) continue;
		vis[nx][ny] = 1;		
		//map[nx][ny] = 'a';
		dfs(nx, ny, cnt + 1);
		//map[nx][ny] = '.';
		vis[nx][ny] = 0;
		
	}
}

int main() {
	cin >> R >> C >> K;
	
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			cin >> map[i][j];
		}
	}
	vis[R - 1][0] = 1;
	dfs(R-1, 0, 1);
	cout << answer << '\n';
	return 0;
}