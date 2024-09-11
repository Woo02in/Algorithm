#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<queue>
#define INF 987654321

using namespace std;
int N, M;
int node[1001][1001];
int value[1001];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			node[i][j] = INF;
		}
	}
	for (int i = 1; i <= N; i++) {
		node[i][i] = 0;
		value[i] = INF;
	}

	
	for (int i = 0; i < M; i++) {
		int u, v, w;
		cin >> u >> v >> w;
		if (node[u][v] > w) {
			node[u][v] = w;
		}
	}
	int start, end;
	cin >> start >> end;
	value[start] = 0;

	pq.push({ 0,start });

	while (!pq.empty()) {
		int x = pq.top().first;
		int y = pq.top().second;
		pq.pop();
		for (int i = 1; i <= N; i++) {
			int V = i;
			int cost = node[y][i];

			if (cost == INF) continue;

			if (x + cost < value[V]) {
				value[V] = x + cost;
				pq.push({ x + cost, V });
			}
		}
	}

	cout << value[end] << '\n';
	return 0;
}
