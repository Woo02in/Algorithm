#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int N, M;
int dir[4][2] = { {1,0}, {-1,0},{0,1},{0,-1} };
char map[11][11];

void check(int x, int y) {
	int sea = 0;
	for (int i = 0; i < 4; i++) {
		int nx = x + dir[i][0];
		int ny = y + dir[i][1];
		if (nx < 0) sea++;
		if (ny < 0)sea++;
		if (nx >= N)sea++;
		if (ny >= M)sea++;
		if (map[nx][ny] == '.')
			sea++;
	}
	if (sea >= 3) map[x][y] = 'D';
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
			if(map[i][j] == 'X')
				check(i,j);
		}
	}
	int minrow = 55, mincol = 55, maxrow = -1, maxcol = -1;
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (map[i][j] == 'D')
				map[i][j] = '.';
			if (map[i][j] == 'X') {
				minrow = min(minrow, j);				
				maxrow = max(maxrow, j);
				
			}
		}
		
	}
	for (int j = 0; j < M; j++) {		
		for (int i = 0; i < N; i++) {
			if (map[i][j] == 'X') {
				mincol = min(mincol, i);
				maxcol = max(maxcol, i);
				
			}
		}
		
	}
	//cout << mincol << " " << maxcol << endl << minrow << " " << maxrow;
	for (int i = mincol; i <= maxcol; i++) {
		for (int j = minrow; j <= maxrow; j++) {
			cout << map[i][j];
		}
		cout << endl;
	}

	return 0;
}
