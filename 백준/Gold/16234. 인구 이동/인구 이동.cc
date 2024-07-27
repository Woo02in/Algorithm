#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<queue>
#include<cmath>

using namespace std;
int N, L, R;
int map[51][51];
int vis[51][51];
int dir[4][2] = { {1,0}, {-1,0}, {0,1},{0,-1} };
vector<pair<int, int>> v;
bool check = false;
void bfs(int x, int y, int map[51][51]) {
	queue<pair<int, int>> q;
	q.push({ x,y });
	vis[x][y] = 1;
	v.push_back({ x,y });
	int sum = 0;
	sum += map[x][y];
	while (!q.empty()) {
		int a = q.front().first;
		int b = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = a + dir[i][0];
			int ny = b + dir[i][1];
			if (nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
			if (vis[nx][ny] == 1) continue;
			if (abs(map[nx][ny] - map[a][b]) >= L && abs(map[nx][ny] - map[a][b]) <= R) {
				q.push({ nx,ny });
				v.push_back({ nx,ny });
				sum += map[nx][ny];
				vis[nx][ny] = 1;
			}
		}
	}
	if (v.size() >= 2) check = true;
	int cnt = sum / v.size();
	//cout << cnt << endl;
	for (int i = 0; i < v.size(); i++) {
		map[v[i].first][v[i].second] = cnt;
	}
	/*for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << map[i][j];
		}
		cout << endl;
	}*/
	while (!v.empty()) {
		v.pop_back();
	}
}

int main() {
	cin >> N >> L >> R;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> map[i][j];
		}
	}
	int answer = 0;
	while (true) {
		check = false;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (vis[i][j] == 0) {
					bfs(i, j, map);					
				}
			}
		}
		if (check) answer++;
		else break;		
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				vis[i][j] = 0;
			}
		}
		
	}

	/*for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << map[i][j];
		}
		cout << endl;
	}*/
	cout << answer << endl;
	return 0;
}