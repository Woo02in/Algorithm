#include<iostream>
#include<queue>
#include<utility>
#include<vector>

using namespace std;

int M, N, K; // M = 가로, N = 세로, K = 배추 위치 개수
//int K_loc[50][50];
int Map[51][51];
int x, y; //  배추의 위치
queue<pair<int,int>>q;

int near[4][2] = { {-1,0}, {0,1}, {1,0}, {0,-1} };
int vis[51][51] = { 0, };


int BFS() {
	int answer = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (Map[i][j] == 0) {
				continue;
			}
			if (vis[i][j] == 1) {
				continue;
			}
			q.push(make_pair(i, j));
			vis[i][j] = 1;

			while (!q.empty()) {
				int Y = q.front().first;
				int X = q.front().second;
				q.pop();
				for (int k = 0; k < 4; k++) {
					int new_Y = Y + near[k][0];
					int new_X = X + near[k][1];
					if (new_Y < 0 || new_Y >= N || new_X < 0 || new_X >= M) {
						continue;
					}
					if (Map[new_Y][new_X] == 0) {
						continue;
					}
					if (vis[new_Y][new_X] == 1) {
						continue;
					}
					q.push(make_pair(new_Y, new_X));
					vis[new_Y][new_X] = 1;
				}
			}
			answer++;
		}
	}
	return answer;
}

int main() {
	int Test;
	vector<int> Answer;
	cin >> Test;
	for (int T = 0; T < Test; T++) {
		cin >> M >> N >> K;
		for (int i = 0; i <= N; i++) {
			for (int j = 0; j <= M; j++) {
				Map[i][j] = 0;
				vis[i][j] = 0;
			}
		}
		for (int i = 0; i < K; i++) {
			cin >> x >> y;
			Map[y][x] = 1;
		}
		Answer.push_back(BFS());
	}
	
	for (int i = 0; i < Answer.size(); i++) {
		printf("%d\n",Answer[i]);
	}

	return 0;
}