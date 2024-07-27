#include<iostream>
#include<algorithm>

using namespace std;

int map[5][5];
int vis[5][5];
int col[5], row[5];
int bingo = 0;
bool left_diag = false, right_diag = false;
void check(int x, int y, int map[5][5]) {
	bool flag = false;
	for (int i = 0; i < 5; i++) {
		if (!vis[x][i]) {
			flag = true;
			break;
		}
	}
	if (!flag) {
		bingo++;
		row[x] = 1;
	}
	flag = false;
	for (int i = 0; i < 5; i++) {
		if (!vis[i][y]) {
			flag = true;
			break;
		}
	}
	if (!flag) {
		bingo++;
		col[y] = 1;
	}
	flag = false;
	if (vis[0][0] && vis[1][1] && vis[2][2] && vis[3][3] && vis[4][4] && !left_diag) {
		bingo++;
		left_diag = true;
	}
	if (vis[0][4] && vis[1][3] && vis[2][2] && vis[3][1] && vis[4][0] && !right_diag) {
		bingo++;
		right_diag = true;
	}
}

int main() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> map[i][j];
		}
	}
	
	for (int i = 1; i <= 25; i++) {
		int x;
		cin >> x;
		for (int j = 0; j < 5; j++) {
			for (int k = 0; k < 5; k++) {
				if (map[j][k] == x) {
					vis[j][k] = 1;
					check(j, k, map);
				}
			}
		}
		
	
		/*for (int q = 0; q < 5; q++) {
			for (int w = 0; w < 5; w++) {
				cout << vis[q][w] << " ";
			}
			cout << endl;
		}
		cout << bingo << endl;*/
		
		if (bingo >= 3) {
			cout << i << endl;
			break;
		}
	}
	return 0;
}