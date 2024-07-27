#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>

using namespace std;
int N, M, answer;
int map[8][8];
int copymap[8][8];
int vis[8][8];
int dir[4][2] = { {1,0},{-1,0},{0,1},{0,-1} };
vector<pair<int, int>> virus;
int checkwall[8][8];

void dfs(int x, int y) {
	vis[x][y] = 1;
	for (int i = 0; i < 4; i++) {
		int nx = x + dir[i][0];
		int ny = y + dir[i][1];
		if (nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
		if (vis[nx][ny]) continue;
		if (copymap[nx][ny] == 1 || copymap[nx][ny] == 2) continue;
		copymap[nx][ny] = 2;
		dfs(nx, ny);
	}
}

void init() {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			copymap[i][j] = map[i][j];
			vis[i][j] = 0;
		}
	}
}

void check() {
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (copymap[i][j] == 0) {
				cnt++;
			}
		}
	}
	answer = max(answer, cnt);
}
vector<pair<int, int>> w;
void wall(int x, int y, int count) {
	if (count == 3) {
		return;
	}
	for (int i = x; i < N; i++) {
		for (int j = y; j < M; j++) {
			if (checkwall[i][j] == 0 && map[i][j] == 0) {
				checkwall[i][j] = 1;
				copymap[i][j] = 1;
				w.push_back({ i,j });
				wall(i, j, count + 1);
				checkwall[i][j] = 0;
				copymap[i][j] = 0;
				count--;
			}
		}
	}
}

int main() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> map[i][j];
			copymap[i][j] = map[i][j];
			if (map[i][j] == 2) {
				virus.push_back({ i,j });
			}
		}
	}
	int x1, x2, x3, y1, y2, y3;
	
	for (int i = 0; i < N * M; i++) {
		x1 = i / M;
		y1 = i % M;
		if (!copymap[x1][y1]) {
			for (int j = i + 1; j < N * M; j++) {
				x2 = j / M;
				y2 = j % M;
				if (!copymap[x2][y2]) {
					for (int k = j + 1; k < N * M; k++) {
						x3 = k / M;
						y3 = k % M;
						if (!copymap[x3][y3]) {
							copymap[x1][y1] = 1;
							copymap[x2][y2] = 1;
							copymap[x3][y3] = 1;
							for (int q = 0; q < virus.size(); q++) {
								dfs(virus[q].first, virus[q].second);
							}
							check();
							init();
						}
					}
				}
			}
		}
	}
	
	
	cout << answer << endl;
	return 0;
}