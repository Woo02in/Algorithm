#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<queue>
#include<algorithm>
#include<vector>

using namespace std;

int N;
int map[26][26];
int vis[26][26];
int dir[4][2] = { {-1,0},{1,0},{0,-1},{0,1} };
vector<int> ans;
void BFS(int a, int b) {
	vis[a][b] = 1;
	queue<pair<int, int>>q;
	q.push({ a, b });
	int cnt = 1;
	while (!q.empty()) {
		int y = q.front().first;
		int x = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int ny = y + dir[i][0];
			int nx = x + dir[i][1];

			if (ny<1 || nx<1 || ny>N || nx>N) {
				continue;
			}
			if (vis[ny][nx]) {
				continue;
			}
			if (!map[ny][nx]) {
				continue;
			}
			q.push({ ny,nx });
			vis[ny][nx] = 1;
			cnt++;
		}
	}
	ans.push_back(cnt);
}

int main() {
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			scanf("%1d", &map[i][j]);
		}
	}
	for (int i = 1; i <= N; i++) {
		for(int j =1; j<=N; j++){
			if (map[i][j] && !vis[i][j]) {
				BFS(i, j);
			}
		}
	}
	sort(ans.begin(), ans.end());
	printf("%d\n", ans.size());
	for (int i = 0; i < ans.size(); i++) {
		printf("%d\n", ans[i]);
	}
	return 0;
}