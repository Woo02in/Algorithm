#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int N;
int map[21][21];
int visited[21];
int result = 987654321;

void dfs(int cnt, int cur) {
	
	if (cnt == N / 2) {
		int start = 0, end = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (visited[i] && visited[j]) start += map[i][j];
				if (!visited[i] && !visited[j]) end += map[i][j];
			}
		}
		int tmp = abs(start - end);
		tmp < result ? result = tmp : NULL;
		return;
	}

	
	for (int i = cur; i < N; i++) {
		visited[i] = 1;
		dfs(cnt + 1, i+1);
		visited[i] = 0;
	}
}

int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++) {
			scanf("%d", &map[i][j]);
		}
	}
	dfs(0, 1);
	printf("%d", result);

	return 0;
}