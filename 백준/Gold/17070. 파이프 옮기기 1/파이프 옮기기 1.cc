#include<iostream>
#include<algorithm>

using namespace std;

int map[21][21];
int n;

void dfs(int x, int y, int dir) {
	map[x][y]++;
	if (dir == 0 || dir == 2) {
		if (y < n && map[x][y + 1] != -1) {
			dfs(x, y + 1, 0);
		}
	}
	if (dir == 1 || dir == 2) {
		if (x < n && map[x + 1][y] != -1) {
			dfs(x + 1, y, 1);
		}
	}
	if (x < n && y < n && map[x][y + 1] != -1 && map[x + 1][y] != -1 && map[x + 1][y + 1] != -1) {
		dfs(x + 1, y + 1, 2);
	}
	return;
}

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> map[i][j];
			if (map[i][j] == 1)
				map[i][j] = -1;

		}
	}
	dfs(1, 2, 0);
    if(map[n][n] == -1) 
        map[n][n] =0;
	cout << map[n][n];
	return 0;
}