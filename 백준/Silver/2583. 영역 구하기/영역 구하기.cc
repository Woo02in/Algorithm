#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

int N, M, K;
int map[101][101];
int dir[4][2] = { {1,0}, {-1,0}, {0,1}, {0,-1} };
int vis[101][101];
int square[101][4];
int answer, cnt;

void dfs(int x, int y) {
	cnt++;
	vis[x][y] = 1;
	for (int i = 0; i < 4; i++) {
		int nx = x + dir[i][1];
		int ny = y + dir[i][0];
		if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
		if (!vis[nx][ny] && !map[nx][ny]) {
			dfs(nx, ny);
		}
	}
}
vector<int> v;
int main() {
	cin >> N >> M >> K;
	for (int i = 0; i < K; i++) {		
		cin >> square[i][0] >> square[i][1] >> square[i][2] >> square[i][3];
		for (int j = square[i][3]; j > square[i][1]; j--) {
			for (int k = square[i][0]; k < square[i][2]; k++) {
				if (map[N - j][k]) continue;
				map[N - j][k] = 1;
			}
		}
	}	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (!vis[i][j] && !map[i][j]) {
				cnt = 0;
				dfs(i, j);
				v.push_back(cnt);
				//answer++;
			}
		}
	}
	/*for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << map[i][j] <<" " ;
		}
		cout << endl;
	}*/
	sort(v.begin(), v.end());
	cout << v.size() << endl;
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	return 0;
}