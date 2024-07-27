#include<iostream>
#include<vector>

using namespace std;
int N;
int vis[100001];
vector<int> graph[100001];


void dfs(int node) {		
	for (int i = 0; i < graph[node].size(); i++) {
		int next = graph[node][i];
		if (vis[next] == 0) {
			vis[next] = node;
			dfs(next);			
		}
	}
}
//void bfs() {
//	queue<int>q;
//	vis[1] = 1;
//	q.push(1);
//
//	while(!q.empty()) {
//		int parent = q.front();
//		q.pop();
//		for (int i = 0; i < graph[parent].size(); i++) {
//			int child = graph[parent][i];
//			if (!vis[child]) {
//				ans[child] = parent;
//				vis[child] = 1;
//				q.push(child);
//			}
//		}
//	}
//}
//
int main() {	
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> N;
	for (int i = 0; i < N-1; i++) {
		int u, v;
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	//bfs();
	dfs(1);
	for (int i = 2; i <= N; i++) {
		cout << vis[i] << '\n';
	}
	return 0;
}