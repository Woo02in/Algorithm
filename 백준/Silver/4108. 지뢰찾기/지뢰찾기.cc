#include<iostream>
#include<algorithm>
#include<string>

using namespace std;
int R, C;
char map[101][101];
int dir[8][2] = { {1,0}, {-1,0},{0,1},{0,-1}, {1,1},{1,-1}, {-1,1},{-1,-1} };

int check(int x, int y) {
	int cnt = 0;
	for (int i = 0; i < 8; i++) {
		int nx = x + dir[i][0];
		int ny = y + dir[i][1];
		if (nx < 0 || ny < 0 || nx >= R || ny >= C) continue;
		if (map[nx][ny] == '*') {
			cnt++;
		}
	}
	return cnt;
}

int main() {
	while (true) {
		cin >> R >> C;
		if (R == 0 && C == 0) {
			break;
		}
		for (int i = 0; i < R; i++) {
			for (int j = 0; j < C; j++) {
				cin >> map[i][j];
			}
		}
		for (int i = 0; i < R; i++) {
			for (int j = 0; j < C; j++) {				
				if (map[i][j] == '*') cout << '*';
				else cout << check(i, j);
			}
			cout << endl;
		}
	}
	return 0;
}