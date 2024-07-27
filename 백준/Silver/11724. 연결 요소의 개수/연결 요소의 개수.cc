#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int graph[1001][1001];
int vis[1001];
int N, M, u, v;

void DFS(int x) {
	vis[x] = 1;
	for (int i = 1; i <= N; i++) {
		if (graph[x][i] == 1 && vis[i] != 1) {
			DFS(i);
		}
	}
}

int main() {
	int conn = 0;
	scanf("%d %d", &N, &M);
	for (int i = 0; i < M; i++) {
		scanf("%d %d", &u, &v);
		graph[u][v] = graph[v][u] = 1;
	}
	for (int i = 1; i <= N; i++) {
		if (vis[i] != 1) {
			DFS(i);
			conn++;
		}
	}
	printf("%d", conn);

	return 0;
}