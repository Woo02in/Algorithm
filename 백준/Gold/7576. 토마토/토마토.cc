#include<iostream>
#include<queue>
#include<utility>

using namespace std;

int N, M;
int Map[1001][1001];
queue < pair<int, int>> q;
int vis[1001][1001];
int near[4][2] = { {-1,0},{0,1},{1,0},{0,-1} };

void BFS() {
	int ans = 0;

	while (!q.empty()) {
		int s = q.size();
		for (int i = 0; i < s; i++) {
			int y = q.front().first;
			int x = q.front().second;
			q.pop();
			for (int j = 0; j < 4; j++) {
				int ny = y + near[j][0];
				int nx = x + near[j][1];
				if (ny<1 || ny>N || nx < 1 || nx >M) {
					continue;
				}
				if (vis[ny][nx] == 1) {
					continue;
				}
				if (Map[ny][nx] == -1 || Map[ny][nx] == 1) {
					continue;
				}				
				Map[ny][nx] = 1;
				vis[ny][nx] = 1;
				q.push(make_pair(ny, nx));				
			}
		}
		ans++;
	}

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			if (Map[i][j] == 0) {
				printf("-1");
				return;
			}
		}
	}
	printf("%d", ans-1);

}




int main() {
	cin >> M >> N;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			cin >> Map[i][j];
			if (Map[i][j] == 1)
			{
				q.push(make_pair(i, j));
				vis[i][j] = 1;
			}
		}
	}

	BFS();

	return 0;
}