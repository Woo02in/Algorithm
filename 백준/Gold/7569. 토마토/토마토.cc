#include<iostream>	
#include<queue>

using namespace std;

int M, N, H;
int map[101][101][101];
int vis[101][101][101];
int dir[6][3] = { {0,0,1}, {0,0,-1},{1,0,0}, {-1,0,0}, {0,1,0},{0,-1,0} };
queue<pair<pair<int, int>, int>> q;

void bfs() {
	int res = 0;
	while (!q.empty()) {
		int size = q.size();
		for (int i = 0; i < size; i++) {
			int y = q.front().first.first;
			int x = q.front().first.second;
			int h = q.front().second;
			q.pop();
			for (int j = 0; j < 6; j++) {
				int nx = x + dir[j][0];
				int ny = y + dir[j][1];
				int nh = h + dir[j][2];

				if (ny <1 || nx <1 || nh <1 || ny>N || nx>M || nh>H) {
					continue;
				}
				if (map[ny][nx][nh] == 1 || map[ny][nx][nh] == -1) {
					continue;
				}
				if (vis[ny][nx][nh]) {
					continue;
				}
				q.push({ { ny,nx }, nh });
				vis[ny][nx][nh] = 1;
				map[ny][nx][nh] = 1;

			}
		}
		res++;
	}
	for (int i = 1; i <= H; i++) {
		for (int j = 1; j <= N; j++) {
			for (int k = 1; k <= M; k++) {
				if (map[j][k][i] == 0) {
					cout << -1 << "\n";
					return;
				}
			}
		}
	}
	cout << res - 1 << "\n";
}
int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);

	cin >> M >> N >> H;
	for (int i = 1; i <= H; i++) {
		for (int j = 1; j <= N; j++) {
			for (int k = 1; k <= M; k++) {
				cin >> map[j][k][i];
				if (map[j][k][i] == 1) {
					q.push({ { j,k },i });
					vis[j][k][i] = 1;
				}

			}
		}
	}
	bfs();

	return 0;
}