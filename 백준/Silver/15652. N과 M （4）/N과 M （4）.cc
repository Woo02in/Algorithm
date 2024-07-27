#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int N, M;
int arr[9];

void dfs(int cnt,int min) {
	if (cnt == M) {
		for (int i = 0; i < M; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n");
		return ;
	}
	for (int i = 1; i <= N; i++) {
		arr[cnt] = i;
		if (i < min)
			continue;
		dfs(cnt + 1,i);
	}
	
}

int main() {
	scanf("%d %d", &N, &M);
	dfs(0,0);

	return 0;
}