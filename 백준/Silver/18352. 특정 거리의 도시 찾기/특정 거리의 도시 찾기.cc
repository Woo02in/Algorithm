#include <iostream>
#include <vector>
#include <list>

using namespace std;

int N, M, K, X;

vector<vector<int> > graph; 
vector<int> dist; 
vector<int> result;

void bfs() {
	int start = X; 
	dist[X] = 0;

	list<int> queue;
	queue.push_back(X);

	while (!queue.empty()) {
		int now = queue.front();
		queue.pop_front();
		
		for (int i = 0; i < graph[now].size(); i++) {
			int next = graph[now][i]; 
			if (dist[next] == -1) { 
				dist[next] = dist[now] + 1; 
				queue.push_back(next); 
			}
		}

	}
	for (int i = 1; i <= N; i++) {
		if (dist[i] == K) 
			result.push_back(i);
	}
}
int main() {
	cin >> N >> M >> K >> X;
	graph = vector<vector<int> >(N + 1);
	dist = vector<int>(N + 1, -1); 

	for (int i = 0; i < M; i++) {
		int a,b;
		cin >> a >> b;
		graph[a].push_back(b);
	}
	bfs();
	if (result.size() == 0) cout << -1;
	else {
		for (int i = 0; i < result.size(); i++)
			cout << result[i] << endl;
	}
}
