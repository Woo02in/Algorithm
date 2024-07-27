#include<iostream>
#include<vector>
#include<deque>
#include<utility>

using namespace std;
int N, K, L;
int map[101][101];
int dir[4][2] = { {0,1}, {0,-1}, {1,0}, {-1,0} };
vector<pair<int, char>> v;

int change_dir(int curdir, char c) {
	if (c == 'L') {
		if (curdir == 0) return 3;
		else if (curdir == 1)return 2;
		else if (curdir == 2) return 0;
		else if (curdir == 3) return 1;
	}
	else if (c == 'D') {
		if (curdir == 0) return 2;
		else if (curdir == 1) return 3;
		else if (curdir == 2) return 1;
		else if (curdir == 3) return 0;
	}
}

int main() {
	cin >> N >> K;
	for (int i = 0; i < K; i++) {
		int x, y;
		cin >> x >> y;
		map[x - 1][y - 1] = 1; // 사과
	}
	cin >> L;
	for (int i = 0; i < L; i++) {
		int a;
		char b;
		cin >> a >> b;
		v.push_back({ a,b });
	}
	deque<pair<int, int>> dq;
	int x = 0, y = 0, d = 0, answer = 0, idx = 0;
	dq.push_back({ x,y });
	map[x][y] = 2; //뱀 있는 곳 2
	while (true) {
		answer++;
		int nx = x + dir[d][0];
		int ny = y + dir[d][1];
		if ((nx < 0 || ny < 0 || nx >= N || ny >= N) || map[nx][ny] == 2) {
			break;
		}
		else if (map[nx][ny] == 0) {
			map[nx][ny] = 2;
			map[dq.back().first][dq.back().second] = 0;
			dq.pop_back();
			dq.push_front({ nx,ny });
		}
		else if (map[nx][ny] == 1) {
			map[nx][ny] = 2;
			dq.push_front({ nx,ny });
		}
		if (idx < v.size()) {
			if (answer == v[idx].first) {
				if (v[idx].second == 'L') d = change_dir(d, 'L');
				else if (v[idx].second == 'D') d = change_dir(d, 'D');
				idx++;
			}
		}
		x = nx;
		y = ny;
	}
	cout << answer << endl;
	return 0;
}