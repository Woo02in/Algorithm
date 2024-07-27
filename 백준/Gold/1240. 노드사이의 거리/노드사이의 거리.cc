#include<iostream>
#include<vector>
#include<utility>
using namespace std;

vector<pair<int,int>> v[1001];

int vis[1001];
int ans;
void dfs(int start, int end, int distance) {
	if (start == end) {
		ans = distance;		
		return;
	}
	for (int i = 0; i < v[start].size(); i++) {
		int n = v[start][i].first;
		int d = v[start][i].second;
		if (vis[n] == 0) {
			vis[n] = 1;			
			dfs(n, end, (d + distance));			
			vis[n] = 0;
		}
	}
}
int main() {
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N-1; i++) {
		int x, y, l;
		cin >> x >> y >> l;
		v[x].push_back({ y,l });
		v[y].push_back({ x,l });
	}
	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		for (int j = 0; j < 1001; j++) {
			vis[j] = 0;
		}
		vis[a] = 1;
		dfs(a, b, 0);
		vis[a] = 0;
		cout << ans << endl;
	}



	return 0;
}
