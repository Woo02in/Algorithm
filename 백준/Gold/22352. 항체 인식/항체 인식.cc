#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
#include<utility>

using namespace std;

int N, M;
int before_sp[31][31];
int after_sp[31][31];
int vis[31][31];
int dir[4][2] = { {1,0},{0,1},{-1,0},{0,-1} };
vector<pair<int, int>> after;
vector<pair<int, int>> before;

void dfs(int x, int y) {
	
	for (int i = 0; i < 4; i++) {
		int nx = x + dir[i][0];
		int ny = y + dir[i][1];
		if (nx < 0 || ny < 0 || nx >= N || ny >= M || vis[nx][ny])continue;
		if (before_sp[nx][ny] != before_sp[x][y]) continue;		
		vis[nx][ny] = 1;
		before.push_back({ nx,ny });
		dfs(nx, ny);
	}
}

int main() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> before_sp[i][j];
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> after_sp[i][j];
		}
	}
	vector<int> kind;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (before_sp[i][j] != after_sp[i][j]) {
				kind.push_back(after_sp[i][j]);
				after.push_back({ i,j });
			}
		}
	}

	if (after.size() == 0) {
		cout << "YES" << '\n';
		return 0;
	}
	
	int start_x = after[0].first;
	int start_y = after[0].second;
	before.push_back({ start_x,start_y });
	vis[start_x][start_y] = 1;
	dfs(start_x, start_y);

	for (int i = 0; i < before.size(); i++) {
		before_sp[before[i].first][before[i].second] = after_sp[start_x][start_y];
	}
	bool flag = true;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (before_sp[i][j] != after_sp[i][j]) {
				flag = false;
				break;
			}
		}		
	}
	/*for (int i = 0; i < before.size(); i++) {
		cout << before[i].first << " " << before[i].second << endl;
	}
	cout << endl;
	for (int i = 0; i < after.size(); i++) {
		cout << after[i].first << " " << after[i].second << endl;
	}*/
	if (flag) cout << "YES" << '\n';
	else cout << "NO" << '\n';
	return 0;
}