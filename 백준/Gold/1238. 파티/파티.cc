#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <climits>

using namespace std;

struct Edge {
    int destination;
    int distance;
};

int N, M, X;

vector<vector<Edge>> graph;
vector<int> dist_to_X;
vector<int> dist_from_X;

vector<int> dijkstra(int start) {
    vector<int> dist(N + 1, INT_MAX);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    dist[start] = 0;
    pq.push({0, start});

    while (!pq.empty()) {
        int current_dist = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if (current_dist > dist[u]) continue;

        for (const auto& edge : graph[u]) {
            int v = edge.destination;
            int weight = edge.distance;

            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }

    return dist;
}

int main() {
    cin >> N >> M >> X;

    graph.resize(N + 1);

    for (int i = 0; i < M; ++i) {
        int u, v, d;
        cin >> u >> v >> d;
        graph[u].push_back({v, d});
    }

    dist_to_X = dijkstra(X);

    int max_distance = 0;

    for (int i = 1; i <= N; ++i) {
        if (i == X) continue;
        dist_from_X = dijkstra(i);
        if (dist_from_X[X] == INT_MAX || dist_to_X[i] == INT_MAX) continue; // Skip if no valid path
        max_distance = max(max_distance, dist_from_X[X] + dist_to_X[i]);
    }

    cout << max_distance << endl;

    return 0;
}
