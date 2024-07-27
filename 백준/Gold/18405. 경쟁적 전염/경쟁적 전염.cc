////23:12
//#include<iostream>
//#include<algorithm>
//#include<vector>
//
//using namespace std;
//
//int map[201][201];
//int N, K, S, X, Y;
//int vis[201][201];
//int dir[4][2] = { {1,0},{-1,0},{0,1},{0,-1} };
//void bfs(int x, int y, int virus) {
//	for (int i = 0; i < 4; i++) {
//		int nx = x + dir[i][0];
//		int ny = y + dir[i][1];
//		if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
//		if (vis[nx][ny]) continue;
//		else vis[nx][ny] = virus;
//		
//	}
//}
//
//int main() {
//	cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
//	cin >> N >> K;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> map[i][j];
//			vis[i][j] = map[i][j];
//		}
//	}
//	cin >> S >> X >> Y;
//	
//	while (S--) {
//		for (int k = 1; k <= K; k++) {
//			for (int i = 0; i < N; i++) {
//				for (int j = 0; j < N; j++) {
//					if (map[i][j] == k) {
//						bfs(i, j, k);
//					}
//				}
//			}
//		}
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				map[i][j] = vis[i][j];
//			}			
//		}
//	}	
//	cout << map[X - 1][Y - 1] << '\n';
//	
//	return 0;
//}


#include<iostream>
#include<algorithm>

using namespace std;

int map[201][201];
int N, K, S, X, Y;
int vis[201][201];
int dir[4][2] = { {1,0},{-1,0},{0,1},{0,-1} };

void bfs(int x, int y) {
	int v = 99999;
	for (int i = 0; i < 4; i++) {
		int nx = x + dir[i][0];
		int ny = y + dir[i][1];
		if (nx < 0 || nx >= N || ny < 0 || ny >= N || map[nx][ny] == 0) continue;
		if (map[nx][ny]) {
			v = min(v, map[nx][ny]);
		}		
	}
	if (v != 99999) {
		vis[x][y] = v;
	}
}

int main() {
	cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> map[i][j];
			vis[i][j] = map[i][j];
		}
	}
	cin >> S >> X >> Y;
	while (S--) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (map[i][j] == 0) {
					bfs(i, j);
				}
			}
		}
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				map[i][j] = vis[i][j];
			}
		}
		//cout << 'a';
	}
	/*for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << map[i][j] << " ";
		}
		cout << '\n';
	}*/
	cout << map[X - 1][Y - 1] << '\n';
	return 0;
}