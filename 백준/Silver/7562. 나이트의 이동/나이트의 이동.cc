//00:49
#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
#include<queue>
#include<utility>
using namespace std;

int I, cnt, answer;;
int check[301][301];
int vis[301][301];
int dir[8][2] = {{-1,-2},{-2,-1},{-2,1},{-1,2},{1,-2},{2,-1},{2,1},{1,2} };
queue<pair<int, int>>q;
void bfs(int x, int y) {
	while (!q.empty()) {
		int a = q.front().first;
		int b = q.front().second;
		vis[a][b] = 1;
		q.pop();
		if (a == x && b == y) {
			cout << check[a][b] << '\n';
			return;
		}
		for (int i = 0; i < 8; i++) {
			int nx = a + dir[i][0];
			int ny = b + dir[i][1];
			if (nx < 0 || nx >= I || ny < 0 || ny >= I || vis[nx][ny]) continue;
			check[nx][ny] = check[a][b] + 1;
			vis[nx][ny] = 1;
			q.push({ nx,ny });
			
		}
	}
}
int main() {
	int T;	
	cin >> T;
	for (int t = 0; t < T; t++) {
		int curnightx, curnighty, destnightx, destnighty;
		cin >> I;
		cin >> curnightx >> curnighty;				
		cin >> destnightx >> destnighty;
		q.push({ curnightx, curnighty });
		bfs(destnightx, destnighty);		
		memset(vis, 0, sizeof(vis));
		memset(check, 0, sizeof(check));
		while (!q.empty()) {
			q.pop();
		}
	}


	return 0;
}