#include<iostream>
#include<vector>
#include<utility>
#include<queue>
using namespace std;
#define INF 2e9
int V, E, K;

typedef struct NODE {
	int num;
	int dis;
};

typedef struct cmp {
	bool operator()(NODE a, NODE b){
		return a.dis > b.dis;
	}
};

vector<NODE> graph[20001];
int Dis[20001];

void Dijkstra(int start) {
	Dis[start] = 0;
	priority_queue<NODE, vector<NODE>, cmp> pq;
	pq.push({ start, 0 });
	while (!pq.empty()) {
		int distance = pq.top().dis;
		int cur = pq.top().num;
		pq.pop();
		for (int i = 0; i < graph[cur].size(); i++) {
			int n = graph[cur][i].num;
			int time = distance + graph[cur][i].dis;
			if (time < Dis[n]) {
				Dis[n] = time;
				pq.push({ n,time });
			}
		}
	}
}

int main()
{
	cin.sync_with_stdio(0);
	cin.tie(0);

	cin >> V >> E;
	cin >> K;

	for (int i = 0; i < E; ++i) {
		int u, v, w;
		cin >> u >> v >> w;
		graph[u].push_back({ v,w });
	}
	for (int i = 1; i <= V; ++i)
		Dis[i] = INF; // 무한대로 설정

	Dijkstra(K);
	for (int i = 1; i <= V; ++i) {
		if (Dis[i] != INF)
			cout << Dis[i] << "\n";
		else
			cout << "INF" << "\n";
	}

	return 0;
}