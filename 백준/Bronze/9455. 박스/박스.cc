#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;
int T;
int main() {
	cin >> T;
	while (T--) {
		int m, n;
		int map[101][101] = { 0, };
		int count = 0;
		cin >> m >> n;
		for (int i = m-1; i >= 0; i--) {
			for (int j = 0; j < n; j++) {
				cin >> map[i][j];
			}
		}
		for (int j = 0; j < n; j++) {
			for (int i = 1; i < m; i++) {
				int tmp = i;
				while (true) {
					if (map[tmp][j] == 1 && map[tmp - 1][j] == 0) {
						map[tmp][j] = 0;
						map[tmp - 1][j] = 1;

						count++;
						tmp--;
						if (tmp == 0) break;
					}
					else break;
				}
			}
		}
		cout << count << '\n';
	}


	return 0;
}