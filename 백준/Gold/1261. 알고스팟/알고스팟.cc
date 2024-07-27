#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<queue>

using namespace std;

int N, M, answer;
char map[101][101];
int vis[101][101];
int result[101][101];
int dir[4][2] = { {1,0},{0,1},{-1,0},{0,-1} };
priority_queue<pair<int, pair<int, int>>>pq;

void bfs() {
	while (!pq.empty()) {
		int cost = -pq.top().first;
		int x = pq.top().second.first;
		int y = pq.top().second.second;	
		pq.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dir[i][0];
			int ny = y + dir[i][1];
			if (nx < 0 || ny < 0 || nx >= M || ny >= N ||vis[nx][ny]) continue;			
			if (result[nx][ny] > result[x][y] + (map[nx][ny] - '0')) {
				result[nx][ny] = result[x][y] + (map[nx][ny] - '0');
				pq.push({ -result[nx][ny], { nx,ny } });
			}			
			
		}
	}
}

int main() {	
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			cin >> map[i][j];	
			result[i][j] = 200;
		}
	}
	vis[0][0] = 1;
	result[0][0] = 0;
	pq.push({0, { 0, 0 } });
	bfs();

	//for (int i = 0; i < M; i++) {
	//	for (int j = 0; j < N; j++) {
	//		cout << result[i][j] << " ";
	//	}
	//	cout << endl;
	//}
	cout << result[M-1][N-1] << endl;
	return 0;
}