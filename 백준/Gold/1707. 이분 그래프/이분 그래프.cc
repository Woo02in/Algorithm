#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>

using namespace std;
vector<int> graph[200001];
int vis[20001];
int color[20001];
bool flag = true;
vector<int> Node;
void dfs(int node, int c) {	
	vis[node] = 1;	
	for (int i = 0; i < graph[node].size(); i++) {
		int now = graph[node][i];				
		if (vis[now] && c == color[now]) {
			flag = false;
			return;
		}
		else {
			if (!vis[now]) {
				if (c) {
					color[now] = 0;
				}
				else {
					color[now] = 1;
				}
				dfs(now, color[now]);
			}
			else
				continue;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++) {
		int V, E;		
		int u, v;
		flag = true;
		cin >> V >> E;		
		for (int i = 0; i < E; i++) {			
			cin >> u >> v;
			Node.push_back(u);			
			graph[u].push_back(v);
			graph[v].push_back(u);			
		}
		for (int i = 0; i < Node.size(); i++) {
			if (!vis[Node[i]])
				dfs(Node[i], color[Node[i]]);
		}
		if (!flag)
			cout << "NO" << '\n';
		else
			cout << "YES" << '\n';
		memset(vis, false, sizeof(vis));
		memset(vis, false, sizeof(color));
		memset(graph, false, sizeof(graph));
	}

	return 0;
}