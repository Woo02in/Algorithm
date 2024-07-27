#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<queue>

using namespace std;

int n, m, v, point_1, point_2;
int map[1001][1001];
int vis[1001];


void DFS(int node) {
	printf("%d ", node);
	vis[node] = 1;
	for (int i = 1; i <= n; i++) {
		if (map[node][i] == 1 && vis[i] != 1) {
			DFS(i);
		}
	}
}

void BFS(int node) {
	queue<int> Q;
	Q.push(node);
	vis[node] = 0;
	while (!Q.empty()) {
		int tmp = Q.front();
		printf("%d ", tmp);
		Q.pop();
		for (int i = 1; i <= n; i++) {
			if (map[tmp][i] == 1 && vis[i] != 0) {
				Q.push(i);
				vis[i] = 0;
			}
		}
	}
}

int main() {
	scanf("%d %d %d", &n, &m, &v);
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &point_1, &point_2);
		map[point_1][point_2] = map[point_2][point_1] = 1;
	}
	DFS(v);
	printf("\n");
	BFS(v);


	return 0;
}