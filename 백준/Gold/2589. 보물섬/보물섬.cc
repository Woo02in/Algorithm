#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<utility>

using namespace std;

int N, M, answer;
char map[51][51];
int vis[51][51];
int check[51][51];
int dir[4][2] = { {1,0},{0,1},{-1,0},{0,-1} };

int bfs(int x, int y) {
	queue<pair<int, int>> q;
	int a = 0, b = 0;
	q.push({ x,y });
	vis[x][y] = 1;
	while (!q.empty()) {
		a = q.front().first;
		b = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int na = a + dir[i][0];
			int nb = b + dir[i][1];
			if (na < 0 || nb < 0 || na >= N || nb >= M || vis[na][nb])continue;
			if (map[na][nb] == 'W')continue;
			q.push({ na,nb });
			vis[na][nb] = 1;
			check[na][nb] = check[a][b] + 1;			
		}
	}
	return check[a][b];
}

void init() {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			vis[i][j] = 0;
			check[i][j] = 99999;
		}
	}
}

int main() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> map[i][j];
		}
	}
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {			
			if (map[i][j] == 'L') {
				init();
				check[i][j] = 0;
				answer = max(answer, bfs(i, j));
			}
		} 
	}
	cout << answer << endl;
	return 0;
}

