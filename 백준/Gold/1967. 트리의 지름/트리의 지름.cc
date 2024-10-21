#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;

int N;
vector<pair<int, int>> graph[10001];
int vis[10001];
int answer;
int End;

void dfs(int s, int length) {
	if (vis[s]) return;
	vis[s] = 1;
	if (answer < length) {
		answer = length;
		End = s;
	}
	for (int i = 0; i < graph[s].size(); i++) {
		dfs(graph[s][i].first, length + graph[s][i].second);
	}
}

int main() {
	cin >> N;
	
	for (int i = 0; i < N-1; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		graph[a].push_back({b,c});
		graph[b].push_back({ a,c });
	}
	dfs(1, 0);
	answer = 0;
	for (int i = 0; i < N+1; i++) {
		vis[i] = 0;
	}
	dfs(End, 0);
	cout << answer << '\n';

	return 0;
}