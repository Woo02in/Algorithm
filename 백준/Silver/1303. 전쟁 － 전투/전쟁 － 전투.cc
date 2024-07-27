#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
#include<cmath>
using namespace std;

int N, M;
char map[101][101];
int vis[101][101];
int B_answer, W_answer;
int dir[4][2] = { {1,0},{-1,0},{0,1},{0,-1} };
int cnt
;
int dfs(int x, int y, char cur) {
	cnt++;
	vis[x][y] = 1;
	for (int i = 0; i < 4; i++) {
		int nx = x + dir[i][0];
		int ny = y + dir[i][1];
		if (map[nx][ny]!= cur || nx < 0 || nx >= N || ny < 0 || ny >= M || vis[nx][ny])continue;
		
		dfs(nx, ny, cur);
	}
	return cnt;
}

int main() {	
	cin >> M >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> map[i][j];
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cnt = 0;
			if (!vis[i][j]) {								
				if (map[i][j] == 'W') {
					W_answer += pow(dfs(i, j, map[i][j]), 2);
				}
				else B_answer += pow(dfs(i, j,map[i][j]), 2);
			}
		}
	}
	cout << W_answer << " " << B_answer << endl;
	return 0;
}