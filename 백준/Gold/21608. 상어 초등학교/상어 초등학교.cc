#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
int student[401][5];
int map[21][21];
int dir[4][2] = { {1,0}, {-1,0}, {0,1},{0,-1} };
int N;

struct info {
	int x;
	int y;
	int empty;
	int match;
};

bool compare(info a, info b) {
	if (a.match == b.match) {
		if (a.empty == b.empty) {
			if (a.x == b.x) return a.y < b.y;			
			return a.x < b.x;
		}
		return a.empty > b.empty;
	}
	return a.match > b.match;
}

info bfs(int k, int x, int y) {
	info tmp = { x,y,0,0 };
	for (int i = 0; i < 4; i++) {
		int nx = x + dir[i][0];
		int ny = y + dir[i][1];
		if (nx < 0 || nx>=N || ny<0 || ny>=N) continue;
		if (map[nx][ny] == 0) {
			tmp.empty++;
			continue;
		}
		for (int j = 1; j < 5; j++) {
			if (student[k][j] == map[nx][ny]) tmp.match++;
		}
	}
	return tmp;
}
void matching(int key, int keyindex) {
	vector<info> list;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (map[i][j] == 0) list.push_back(bfs(keyindex, i, j));
		}
	}
	sort(list.begin(), list.end(), compare);
	map[list[0].x][list[0].y] = key;
}
int main() {
	cin >> N;
	for (int i = 0; i < N * N; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> student[i][j];
		}
	}
	for (int i = 0; i < N * N; i++) {
		matching(student[i][0], i);
	}

	int sum = 0;
	for (int k = 0; k < N * N; k++) {
		for (int i = 0; i < N; i++) {
			bool flag = false;
			for (int j = 0; j < N; j++) {
				if (map[i][j] == student[k][0]) {
					info tmp = bfs(k, i, j);
					//cout << tmp.empty << " " << tmp.match << endl;
					sum += pow(10, tmp.match - 1);						
					break;
				}
				
			}
			if (flag) break;
		}
	}
	cout << sum << endl;
	return 0;
}
