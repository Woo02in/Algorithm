#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;

int dis[4][2] = { {1,0}, {-1,0}, {0,1},{0,-1} };
int vis[101][101];
int map[101][101];
int height[101];
int answer, area;
int N;
void dfs(int x, int y, int h) {
	vis[x][y] = true;		
	for (int i = 0; i < 4; i++) {
		int nx = x + dis[i][1];
		int ny = y + dis[i][0];
		if (nx >= N || nx < 0 || ny >= N || ny < 0)
			continue;
		if (!vis[nx][ny] && map[nx][ny] > h)
			dfs(nx, ny, h);		
	}	
}



int main() {
	
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> map[i][j];
			if (!height[map[i][j]])
				height[map[i][j]] = 1;
		}
	}
	for (int h = 1; h <= 100; h++) {		
		if (height[h]) {
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < N; j++) {
					if (!vis[i][j] && map[i][j] > h) {
						dfs(i, j, h);
						area++;						
					}
				}
			}
			/*cout << h << endl;
			cout << area << endl;*/
			answer = max(area, answer);
		}
		height[h] = 0;
		area = 0;
		memset(vis, false, sizeof(vis));
	}
	if (answer == 0)
		cout << 1 << endl;
	else
		cout << answer << endl;
	return 0;
}