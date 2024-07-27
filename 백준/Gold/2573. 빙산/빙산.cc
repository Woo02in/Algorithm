#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<utility>
using namespace std;

int N, M;
int vis[301][301];
int map[301][301];
int years, sea, area;
int dis[4][2] = { {0,1},{0,-1}, {1,0}, {-1,0} };
vector<pair<int, int>>land;
vector<int> v;
int melt(int x, int y) {
	sea = 0;
	for (int i = 0; i < 4; i++) {
		int nx = x + dis[i][0];
		int ny = y + dis[i][1];
		if (map[nx][ny] == 0) {
			sea++;
		}
	}
	return sea;
}
void dfs(int x, int y) {
	int nx, ny;	
	vis[x][y] = 1;	
	for (int i = 0; i < 4; i++) {
		nx = x + dis[i][0];
		ny = y + dis[i][1];
		if (nx >= N || nx < 0 || ny >= M || ny < 0) {
			continue;
		}
		if (map[nx][ny] > 0 && !vis[nx][ny] ) {
			land.push_back({ nx,ny });
			//cout << nx << " " << ny << endl;
			dfs(nx, ny);
		}
	}
}

int main() {
	bool flag = false;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> map[i][j];
		}
	}
	while (true) {		
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (!vis[i][j] && map[i][j] != 0) {
					land.push_back({ i,j });
					dfs(i, j);					
					//cout << i << " " << j << endl;
					area++;
				}
			}
		}
		for (int i = 0; i < land.size(); i++) {
			//cout << land[i].first << " " << land[i].second << endl;
			int s = melt(land[i].first, land[i].second);
			v.push_back(s);
			//cout << "s : " << s << endl;
			
		}
		for (int i = 0; i < land.size(); i++) {
			if (map[land[i].first][land[i].second] - v[i] <= 0) {
				map[land[i].first][land[i].second] = 0;
			}
			else
				map[land[i].first][land[i].second] -= v[i];
		}
		//cout <<"area : "<< area << endl;
		if (area >= 2) {
			flag = true;
			break;
		}
		else {
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < M; j++) {
					if (map[i][j]) {
						flag = true;
						break;
					}
				}
			}
		}
		if (!flag) {
			break;
		}
		flag = false;
		area = 0;
		memset(vis, false, sizeof(vis));
		land.clear();
		v.clear();
		years++;
		//cout <<"years : "<< years << endl;
	}
	if (!flag)
		cout << 0 << '\n';
	else
		cout << years<<'\n';
	/*for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << map[i][j] << " ";
		}
		cout << endl;
	}*/
	return 0;
}