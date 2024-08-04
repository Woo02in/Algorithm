#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#define INF 987654321

using namespace std;
int n, m;
int map[201][201];
int res[201][201];

void func() {
	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (map[i][j] > map[i][k] + map[k][j]) {
					map[i][j] = map[i][k] + map[k][j];
					if (i != k) res[i][j] = res[i][k];
				}
			}
		}
	}

}

int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i != j)map[i][j] = INF;
		}
	}
	for (int i = 0; i < m; i++) {
		int x, y, z;
		cin >> x >> y >> z;
		map[x][y] = map[y][x] = z;
		res[x][y] = y;
		res[y][x] = x;
	}
	func();
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == j) cout << "-" << " ";
			else cout << res[i][j] << " ";
		}
		cout << '\n';
	}
	return 0;
}