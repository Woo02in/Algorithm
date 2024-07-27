//18:15
// 18:29 - 18:41 -> 12분
//
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int R, C, N;
char map[201][201];
int bombmap[201][201];
int dir[4][2] = { {1,0},{-1,0},{0,1},{0,-1} };

void bomb(int x, int y) {
	map[x][y] = '.';
	for (int i = 0; i < 4; i++) {
		int nx = x + dir[i][0];
		int ny = y + dir[i][1];
		if (nx < 0 || nx >= R || ny < 0 || ny >= C) continue;
		map[nx][ny] = '.';
	}
}

int main() {
	cin >> R >> C >> N;
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			cin >> map[i][j];
			if (map[i][j] == 'O') bombmap[i][j] = 1;
		}
	}
	if (N == 1) {
		for (int i = 0; i < R; i++) {
			for (int j = 0; j < C; j++) {
				cout << map[i][j];
			}
			cout << '\n';
		}
	}
	else if (N % 2 == 0) {
		for (int i = 0; i < R; i++) {
			for (int j = 0; j < C; j++) {
				cout << 'O';
			}
			cout << '\n';
		}
	}
	else {
		for (int i = 0; i < R; i++) {
			for (int j = 0; j < C; j++) {				
				map[i][j] = 'O';
			}
		}
		for (int i = 0; i < R; i++) {
			for (int j = 0; j < C; j++) {
				if (bombmap[i][j] == 1) {
					bomb(i, j);
				}
			}
		}
		for (int i = 0; i < R; i++) {
			for (int j = 0; j < C; j++) {
				if (map[i][j] == 'O') bombmap[i][j] = 2;
			}
		}
		if (N % 4 == 3) {
			for (int i = 0; i < R; i++) {
				for (int j = 0; j < C; j++) {
					cout << map[i][j];
				}
				cout << '\n';
			}
		}
		else if (N % 4 == 1) {
			for (int i = 0; i < R; i++) {
				for (int j = 0; j < C; j++) {					
					map[i][j] = 'O';
				}
			}
			for (int i = 0; i < R; i++) {
				for (int j = 0; j < C; j++) {
					if (bombmap[i][j] == 2) {
						bomb(i, j);
					}
				}
			}
			for (int i = 0; i < R; i++) {
				for (int j = 0; j < C; j++) {
					cout << map[i][j];
				}
				cout << '\n';
			}
		}
	}
	return 0;
}