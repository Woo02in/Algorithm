#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<algorithm>
#include<vector>

using namespace std;

vector<pair<int, int>> wire;
int DP[101];
int N, Max;

int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		int n, m;
		scanf("%d %d", &n, &m);
		wire.push_back({ n,m });
	}
	sort(wire.begin(), wire.end());

	for (int i = 0; i < N; i++) {
		DP[i] = 1;
		for (int j = 0; j < i; j++) {
			if (wire[i].second > wire[j].second)
				DP[i] = max(DP[i],DP[j] + 1);
		}
		Max = max(Max, DP[i]);
	}

	printf("%d", N - Max);
	return 0;
}