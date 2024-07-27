#include<iostream>
#include<queue>
#include<memory.h>

using namespace std;
int map[51][51];
int vis[51][51];
int dir[8][2] = { {1,0},{1,1},{1,-1}, {-1,0},{-1,-1},{-1,1}, {0,1},{0,-1} };
int w, h;

void BFS(int row, int col) {
	queue<pair<int, int>>q;
	q.push({ row, col });
	vis[row][col] = 1;
		while(!q.empty()){
			int r = q.front().first;
			int c = q.front().second;
			q.pop();
			for (int i = 0; i < 8; i++) {
				int nr = r + dir[i][0];
				int nc = c + dir[i][1];
				if (nr >= h || nc >= w || nr < 0 || nc < 0) {
					continue;
				}
				if (vis[nr][nc] == 1) {
					continue;
				}
				if (map[nr][nc] == 0) {
					continue;
				}
				vis[nr][nc] = 1;
				q.push({ nr,nc });
			}
	}

}


int main() {
	while (true) {
		cin >> w >> h;
		memset(vis, 0, sizeof(vis));
		memset(map, 0, sizeof(map));
		if (w == 0 && h == 0) {
			break;
		}
		else {
			for (int i = 0; i < h; i++) {
				for (int j = 0; j < w; j++) {
					cin >> map[i][j];
				}
			}
			/*for (int i = 0; i < h; i++) {
				for (int j = 0; j < w; j++) {
					cout << map[i][j] << " ";
				}
				cout << endl;
			}*/
			int ans = 0;
			for (int i = 0; i < h; i++) {
				for (int j = 0; j < w; j++) {
					if (vis[i][j] == 0 && map[i][j] == 1) {
						BFS(i, j);
						ans++;
					}
				}
			}
			cout << ans << endl;
		}
	}
	return 0;
}