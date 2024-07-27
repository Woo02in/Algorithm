#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int N, M;
int num[8];



// cnt의 의미는 : 배열에 들어가 있는 숫자의 개수
void dfs(int cnt) {
	if (cnt == M) {
		for (int i = 0; i < M; i++) {
			printf("%d ", num[i]);
		}
		printf("\n");
		return;
	}

	for (int i = 1; i <= N; i++) {
		num[cnt] = i;
		dfs(cnt + 1);
	}

}


int main()
{
	scanf("%d %d", &N, &M);
	dfs(0);

	return 0;
}